# Cyclotomic-polynomial-ring-multiply
## C++ time estimation for products in Z_q[X]/(X^n+1)

Reports product of 2^24 polynomials in 48 minutes in a laptop, in the cyclotomic ring Z_{2^24-1}[X]/(X^1024+1).
Uses the GMP library for large precision arithmetic. 
The script is provided in order to demonstrate claims in [GGRV2018](https://eprint.iacr.org/2018/1177). 
