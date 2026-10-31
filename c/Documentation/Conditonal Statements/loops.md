# Loops in C

**Loops** repeatedly execute a block of code while a condition is satisfied. C provides three main loop types: **for**, **while**, and **do-while**. They reduce code repetition and can be controlled with `break` and `continue` statements.


---

## Loop Types Comparison

<img width="800" height="400" alt="image" src="https://github.com/user-attachments/assets/af708ba5-d1ee-4a49-adc1-bcc988db17a1" />



| Loop Type | Control Type | Condition Check | Executes If False |
|-----------|--------------|-----------------|-------------------|
| **for** | Entry-controlled | Before body | Never |
| **while** | Entry-controlled | Before body | Never |
| **do-while** | Exit-controlled | After body | At least once |

---

## 1. for Loop

An **entry-controlled loop** that checks the condition before executing the body.


### Syntax

    for (initialization; condition; update) {
        // Body of loop
    }

### Components

- **Initialization:** Sets the initial value of the loop variable.
- **Condition:** Determines whether the loop continues.
- **Update:** Changes the loop variable after each iteration.
- **Body:** Contains the statements executed repeatedly.

### Example

    #include <stdio.h>

    int main() {
        for (int i = 0; i < 5; i++) {
            printf("%d ", i + 1);
        }

        return 0;
    }

**Output:**

    1 2 3 4 5

**Flowchart**
<img width="800" height="400" alt="image" src="https://github.com/user-attachments/assets/d5d93aee-f0b2-4f26-a8f1-9aeb08122584" />

---

## 2. while Loop

An **entry-controlled loop** that checks the condition before each iteration. Initialization and updating are handled separately.

### Syntax

    while (condition) {
        // Body of loop
    }

### Example

    #include <stdio.h>

    int main() {
        int i = 0;

        while (i <= 5) {
            printf("%d ", i + 1);
            i++;
        }

        return 0;
    }

**Output:**

    1 2 3 4 5 6

**Flowchart**
<img width="800" height="400" alt="image" src="https://github.com/user-attachments/assets/46f5bb6e-b600-47d6-a921-05977aaabbfe" />

---

## 3. do-while Loop

An **exit-controlled loop** that checks the condition **after** executing the body. Therefore, it executes at least once, even if the condition is initially false.

### Syntax

    do {
        // Body of loop
    } while (condition);

### Example

    #include <stdio.h>

    int main() {
        int i = 0;

        do {
            printf("%d ", i);
            i++;
        } while (i <= 10);

        return 0;
    }

**Output:**

    0 1 2 3 4 5 6 7 8 9 10
**Flowchart**
<img width="800" height="400" alt="image" src="https://github.com/user-attachments/assets/09eae557-5a28-45b8-bb49-24677234d7b7" />

---

## 4. Infinite Loops

> [!WARNING]
> An **infinite loop** occurs when a loop continues indefinitely because its condition never becomes false or because it has no terminating condition.

### Using a for Loop

    for (;;) {
        printf("This loop will run forever.\n");
    }

### Using a while Loop

    while (1) {
        printf("This loop will run forever.\n");
    }

> [!TIP]
> Use `break` to exit a loop early and `continue` to skip the remaining statements in the current iteration and proceed to the next iteration.

---

## 5. break and continue Statements

### break Statement

The `break` statement immediately terminates the innermost loop or `switch` statement.

**Example:**

    #include <stdio.h>

    int main() {
        for (int i = 1; i <= 10; i++) {
            if (i == 5) {
                break;
            }

            printf("%d ", i);
        }

        return 0;
    }

**Output:**

    1 2 3 4

### continue Statement

The `continue` statement skips the remaining statements in the current iteration and proceeds to the next iteration.

**Example:**

    #include <stdio.h>

    int main() {
        for (int i = 1; i <= 5; i++) {
            if (i == 3) {
                continue;
            }

            printf("%d ", i);
        }

        return 0;
    }

**Output:**

    1 2 4 5

---

## 6. Without Loop vs With Loop

| Approach | Description |
|----------|-------------|
| **Without Loop** | Requires repetitive statements, such as multiple `printf()` calls. |
| **With Loop** | Uses a single loop to execute statements repeatedly, making the code shorter and easier to maintain. |

### Without a Loop

    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");

### With a Loop

    for (int i = 0; i < 5; i++) {
        printf("Hello\n");
    }

Both examples print `Hello` five times, but the loop-based approach is easier to scale to a larger number of repetitions.

---

## Quick Summary

| Feature | for Loop | while Loop | do-while Loop |
|---------|----------|------------|---------------|
| Condition checked | Before execution | Before execution | After execution |
| Minimum executions | 0 | 0 | 1 |
| Initialization | Usually in loop header | Usually before loop | Usually before loop |
| Update | Usually in loop header | Usually inside the body | Usually inside the body |
| Best suited for | Known iteration counts | Condition-based repetition | Tasks that must execute at least once |

> [!TIP]
> Choose a `for` loop when the number of iterations is known, a `while` loop when repetition depends on a condition, and a `do-while` loop when the body must execute at least once.
