# Decision Making in C

**Conditional statements** execute different code blocks based on whether specified conditions are true or false. They control program flow by running code only when required.

---

## Conditional Statement Types

| Statement | Purpose | Use Case |
|-----------|---------|----------|
| **if** | Executes code if condition is true | Single condition check |
| **if-else** | Executes one block if true, another if false | Two-path decision |
| **Nested if-else** | `if`/`else` inside another `if`/`else` block | Multiple step-by-step conditions |
| **if-else-if ladder** | Tests multiple conditions sequentially | Multiple exclusive conditions |
| **switch** | Executes based on expression value | Value-based multiple cases |
| **Ternary operator (`?:`)** | Shorthand `if-else` for expressions | Quick conditional expressions |

---
<img width="862" height="585" alt="image" src="https://github.com/user-attachments/assets/6f0fcd0c-6c3f-4be5-9fbc-1271f0bfc397" />


## 1. if Statement

Executes a block only when a condition is true.

### Example

    #include <stdio.h>

    int main() {
        int age = 20;

        if (age >= 18) {
            printf("Eligible for vote");
        }

        return 0;
    }

**Output:**
    Eligible for vote

> [!NOTE]
> Braces `{}` can be omitted for a single statement, but using them improves readability and helps prevent errors.

---

## 2. if-else Statement

Executes one block if the condition is true and another if it is false.

### Example

    #include <stdio.h>

    int main() {
        int age = 10;

        if (age >= 18) {
            printf("Eligible for vote");
        }
        else {
            printf("Not Eligible for vote");
        }

        return 0;
    }

**Output:**
    Not Eligible for vote

---

## 3. Nested if-else Statement

Tests multiple conditions in a step-by-step manner. Inner conditions are evaluated only when program execution reaches them.

### Example

    #include <stdio.h>

    int main() {
        int age = 11;

        if (age >= 18) {
            if (age >= 60)
                printf("Eligible to vote (Senior Citizen)\n");
            else
                printf("Eligible for vote\n");
        }
        else {
            printf("Not eligible to vote (Under 18)\n");

            if (age >= 13)
                printf("teenager\n");
            else
                printf("not a teenager\n");
        }

        return 0;
    }

**Output:**
    Not eligible to vote (Under 18)
    not a teenager

---

## 4. if-else-if Ladder

Tests multiple conditions from top to bottom. Executes the first block whose condition evaluates to true.

### Example

    #include <stdio.h>

    int main() {
        int i = 20;

        if (i == 10)
            printf("Not Eligible");
        else if (i == 15)
            printf("wait for three years");
        else if (i == 20)
            printf("You can vote");
        else
            printf("Not a valid age");

        return 0;
    }

**Output:**
    You can vote

> [!TIP]
> Conditions are checked from top to bottom. Once a condition is true, its block executes and the remaining conditions in the ladder are skipped.

---

## 5. switch Statement

Executes different code blocks based on the value of an expression. It is useful when checking one expression against multiple constant values.

### Example

    #include <stdio.h>

    int main() {
        int var = 18;

        switch (var) {
            case 15:
                printf("You are a kid");
                break;

            case 18:
                printf("Eligible for vote");
                break;

            default:
                printf("Default Case is executed");
                break;
        }

        return 0;
    }

**Output:**
    Eligible for vote

> [!IMPORTANT]
> In C, a `switch` expression must have an integer type, including character types and enumerated types. Floating-point values and strings cannot be used directly as `switch` expressions.
>
> The `break` statement terminates the `switch` block and prevents execution from falling through to subsequent cases. The `default` case executes when no case matches.

---

## 6. Conditional Operator (Ternary)

The conditional operator is a shorthand alternative to a simple `if-else` statement. It chooses one of two expressions based on a condition.

**Syntax:**

    condition ? true_expression : false_expression;

### Example

    #include <stdio.h>

    int main() {
        int flag = 0;
        int var = (flag == 0) ? 25 : -25;

        printf("Value of var when flag is 0: %d\n", var);

        return 0;
    }

**Output:**
    Value of var when flag is 0: 25

> [!TIP]
> Use the ternary operator for concise conditional expressions. For complex decisions, a regular `if-else` statement is often easier to read.

---

## Quick Summary

| Statement | Key Feature |
|-----------|-------------|
| `if` | Executes code when a condition is true |
| `if-else` | Chooses between two alternatives |
| Nested `if-else` | Places conditional statements inside other conditional statements |
| `if-else-if` ladder | Checks multiple conditions sequentially |
| `switch` | Selects a case based on an expression's value |
| Ternary (`?:`) | Selects between two expressions |
