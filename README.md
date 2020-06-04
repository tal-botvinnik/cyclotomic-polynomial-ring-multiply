# cyclotomic-polynomial-ring-multiply
## C++ time estimation for products in `Z_q[X]/(X^n+1)`

Reports product of `2^24` polynomials in the cyclotomic ring
`Z_{2^24-1}[X]/(X^1024+1)`, in less than an hour with an Intel i7-10510U (8) @
4.900GHz processor.
Uses the GMP library for large precision arithmetic.

The script is provided in order to demonstrate claims in [GGRV2018](https://eprint.iacr.org/2018/1177).
