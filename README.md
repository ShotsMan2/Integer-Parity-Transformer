# Integer Parity Transformer

This project implements a data manipulation algorithm in C designed to modify the state of integers within a dataset based on their **Parity** (Odd/Even status). It ensures that specific elements adhere to an odd-parity constraint by transforming even numbers.

## ⚙️ Algorithm Logic

The algorithm iterates through a sequence $S$ and applies a transformation function $f(x)$ to each element $x_i$:

$$
f(x) = 
\begin{cases} 
x + 1 & \text{if } x \equiv 0 \pmod 2 \quad (\text{Even}) \\
x & \text{if } x \equiv 1 \pmod 2 \quad (\text{Odd})
\end{cases}
$$

### Operational Flow:
1.  **Traversal:** Linearly scans the array of size $N$.
2.  **Detection:** Checks if the current element is even using the modulo operator (`% 2 == 0`).
3.  **Transformation:** If even, increments the value by 1 (In-Place Update).
    * $20 \rightarrow 21$
    * $42 \rightarrow 43$
4.  **Output:** Prints the modified dataset.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o parity_transform
    ```
2.  Run the executable:
    ```bash
    ./parity_transform
    ```

### Example Transformation
**Input:** `{20, 60, 45, 42 ...}`
**Output:** `21 61 45 43 ...`

---
*This repository demonstrates conditional logic and direct memory manipulation in C.*
