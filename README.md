# Ramanujan–Sato Infinite Series in C++

## Overview

This project implements one of the most famous infinite series discovered by Srinivasa Ramanujan for calculating π.

Published in 1914, Ramanujan's series for \( \frac{1}{\pi} \) is known for its incredible rate of convergence, producing approximately **8 additional correct decimal digits of π per term**.

The formula is:

$$
\frac{1}{\pi} = \frac{2\sqrt{2}}{9801}
\sum_{k=0}^{\infty}
\frac{(4k)! (1103 + 26390k)}
{(k!)^4 396^{4k}}
$$

Because of its extremely fast convergence, even the first term (\(k = 0\)) produces an approximation of π accurate to several decimal places.

This project explores:

- Implementing arbitrary precision calculations in C++
- Understanding infinite series convergence
- Comparing calculated values of π against the true value
- Measuring runtime and accuracy across multiple iterations

---

## Features

- Calculates π using Ramanujan's infinite series
- Supports increasing precision with additional terms
- Measures program execution time
- Compares computed π with the actual value of π

---

## Example

Using only the first term:

Calculated π: 3.141592653589793
Actual π: 3.141592653589793

Adding more terms rapidly increases accuracy due to the exponential convergence of the series.

---

## Future Improvements

- Add arbitrary precision support using libraries such as Boost.Multiprecision
- Visualize convergence over multiple iterations
- Compare Ramanujan's series against other π algorithms
- Benchmark performance improvements

---

## References

- S. Ramanujan, "Modular equations and approximations to π", 1914
