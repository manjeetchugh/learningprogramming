# Nested Functions in C

**Nested functions** (defining one function inside another) are **not allowed in standard C**. Every function must be defined at file scope. However, **GCC supports nested functions as a compiler-specific extension**.

---

## Standard C Behavior

| Aspect | Details |
|---|---|
| **Support** | Not allowed in standard C |
| **Scope Rule** | Functions must be defined at file scope |
| **Portability** | Nested function definitions are not portable across C compilers |
| **Error Example** | Defining `inner()` inside `main()` violates standard C syntax |

### Example: Invalid in Standard C

    #include <stdio.h>

    int main(void) {
        void fun(void) {
            printf("GeeksForGeeks");
        }

        fun();  // Error in standard C
        return 0;
    }

> [!WARNING]
> The code above is invalid in standard C because it defines `fun()` inside `main()`. A standard-compliant C compiler will reject this code.

---

## GCC Extension for Nested Functions

GCC allows nested functions as a **non-standard extension**. This can be useful when a helper function should only be accessible within its enclosing function.

### Example: Valid in GCC

    #include <stdio.h>

    int main(void) {
        printf("Outer Function\n");

        void inner(void) {
            printf("Inner Function\n");
        }

        inner();
        return 0;
    }

**Output:**

    Outer Function
    Inner Function

> [!NOTE]
> This example works with GCC when nested functions are enabled. It is not portable standard C and may fail with other compilers.

---

## Scope, Lifetime & Trampolines

| Feature | Description |
|---|---|
| **Scope** | The nested function's name is accessible only within its enclosing function |
| **Trampoline** | A small piece of executable code that may be generated when a nested function's address is taken |
| **Lexical Scoping** | A nested function can access variables from its enclosing function |
| **Lifetime** | Access to enclosing-function variables depends on the enclosing function's active stack frame |

### Trampoline Mechanism

When a GCC nested function accesses variables from its enclosing function, a trampoline may be used when its address is taken.

A trampoline typically provides the nested function with access to the enclosing function's execution context.

This allows **lexical scoping**, meaning the nested function can access variables declared in the enclosing function.

### Example: Nested Function with a Function Pointer

    #include <stdio.h>

    void print(void (*fp)(void)) {
        fp();
    }

    void outer(int x) {
        int y = 10;

        void inner(void) {
            printf("%d\n", x + y);
        }

        void (*fp)(void) = inner;
        print(fp);
    }

    int main(void) {
        outer(5);
        return 0;
    }

**Output:**

    15

> [!NOTE]
> This example uses GCC's nested-function extension. Taking the address of a nested function may require a trampoline, depending on the compiler and target platform. Trampolines can also have security and executable-memory implications.

---

## Safety Considerations

A nested function that accesses variables from its enclosing function must not be called after the enclosing function has returned. Its enclosing stack frame is no longer active, so accessing those variables is invalid.

### Example: Safe Use

    #include <stdio.h>

    void outer(int x) {
        int y = 10;

        void inner(void) {
            printf("%d\n", x + y);
        }

        inner();
    }

    int main(void) {
        outer(5);
        return 0;
    }

**Output:**

    15

> [!WARNING]
> Do not retain or invoke a pointer to a nested function after its enclosing function returns. The pointer may rely on a trampoline or execution context that is no longer valid.

> [!TIP]
> If a helper function does not need access to local variables, define it at file scope instead. This is portable standard C and avoids the lifetime and portability issues associated with GCC nested functions.

### Portable Alternative

    #include <stdio.h>

    void inner(void) {
        printf("Hello from inner()\n");
    }

    void outer(void) {
        inner();
    }

    int main(void) {
        outer();
        return 0;
    }

**Output:**

    Hello from inner()

---

## Summary

| Aspect | Standard C | GCC Extension |
|---|---|---|
| **Allowed** | ❌ No | ✅ Yes |
| **Portability** | Portable standard syntax | ⚠️ GCC-specific |
| **Use Case** | File-scope helper functions | Helpers scoped to an enclosing function |
| **Access to Outer Variables** | Not applicable | ✅ Supported |
| **Trampolines** | Not applicable | May be used when taking a nested function's address |
| **Recommended Approach** | Define functions at file scope | Use only when GCC-specific behavior is acceptable |

> [!TIP]
> For portable C programs, define functions at file scope and pass the required variables as arguments. Use GCC nested functions only when you specifically need the extension and understand its limitations.
