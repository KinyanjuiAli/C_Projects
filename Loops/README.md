# Approximating the Mathematical Constant **e** in C

This mini C project demonstrates two classic ways to **approximate the value of Euler's number `e`** using its infinite series expansion:

\[
e = 1 + \frac{1}{1!} + \frac{1}{2!} + \frac{1}{3!} + \cdots
\]

Understanding how to calculate `e` using series is not only a great exercise in mathematical programming, but also in mastering **loops**, **factorials**, **floating-point precision**, and **condition-based iterations** in C.

---

## 📁 Files Included

### 🔹 `approx_e_fixed_n.c`
> 📌 **Approximates e using a fixed number of terms (n)**

This version of the program asks the user to enter an integer `n`, then computes the approximation of `e` using the first `n` terms of its Taylor series.

**Input:**
- Integer `n` (e.g. 10)

**Output:**
- Approximate value of `e` after summing `n` terms.

**Example:**
```bash
Enter the number of terms (n): 10
Approximation of e using 10 terms: 2.718281801146385
