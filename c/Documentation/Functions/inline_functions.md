# Inline Function in C

An **inline function** is declared using the `inline` keyword, which suggests that the compiler replace a function call with its actual code to reduce function call overhead.

## Syntax

    inline return_type function_name(parameters) {
        // Function body
    }

| Component | Description |
|---|---|
| `inline` | Suggests that the compiler inline the function. |
| `return_type` | Specifies the type of value returned. |
| `parameters` | Inputs accepted by the function. |

## Example

    #include <stdio.h>

    static inline int add(int a, int b)
    {
        return a + b;
    }

    int main()
    {
        int result = add(5, 3);
        printf("Sum = %d", result);

        return 0;
    }

**Output:**

    Sum = 8

## How It Works

1. Declare a function using the `inline` keyword.
2. The compiler determines whether inlining is suitable.
3. If inlined, the function call may be replaced with its body.
4. Otherwise, the function executes through a normal function call.

> [!NOTE]
> Inlining is not guaranteed. The compiler decides whether to inline a function based on its implementation and optimization settings.

## Inline Function vs Normal Function

| Inline Function | Normal Function |
|---|---|
| Declared using `inline`. | Usually declared without `inline`. |
| May reduce function call overhead. | Uses the normal function call mechanism. |
| Can increase code size if overused. | Generally avoids repeated code expansion. |
| Inlining depends on the compiler. | May also be automatically inlined by the compiler. |

## Inline Function vs Macro

| Inline Function | Macro |
|---|---|
| Provides type checking. | Does not provide normal type checking. |
| Follows function scope rules. | Uses preprocessor text substitution. |
| Easier to debug. | Can be harder to debug. |
| Function arguments are evaluated once per parameter occurrence. | Arguments may be evaluated multiple times. |
| Supports normal function recursion. | Recursive macro expansion is not supported like normal function recursion. |

## Uses

- Small, frequently called functions.
- Performance-sensitive applications.
- Embedded systems and real-time software.
- Situations where type safety and easier debugging are preferred over macros.

## Advantages

- May reduce function call overhead.
- Can improve performance for small functions.
- Provides type checking and normal function semantics.
- Is generally easier to maintain than macros.

## Limitations

- The compiler may ignore the `inline` request.
- Excessive inlining can increase executable size.
- Large functions may increase instruction-cache pressure.
- Results depend on the compiler and optimization settings.

> [!TIP]
> Use `inline` for small, frequently called functions when profiling suggests a performance benefit. Modern compilers can inline functions automatically.

> [!WARNING]
> In standard C, `inline` has specific linkage rules. A standalone `inline` definition may not provide the external definition required by other translation units. Using `static inline` is often suitable for functions restricted to a single source file.
