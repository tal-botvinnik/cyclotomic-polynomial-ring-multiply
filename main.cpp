#include "./main.hpp"
#include <chrono>
#include <iostream>

using std::cout;
using std::endl;
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::seconds;

int main(int argc, char** argv) {
    srand(time(NULL));
    gmp_randstate_t state;
    gmp_randinit_mt(state);
    gmp_randseed_ui(state, rand());

    cout << "Hello" << endl;
    for (int z=0; z < 25; z++) {
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        multi(state, z);
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        auto duration = duration_cast<seconds>(t2 - t1).count();
        cout << "Hadamard-multiplied 2^" << z << " = " << pow(2, z);
        cout << " polynomials in Z_{2^" << BITS << "}/(X^" << N << "+1) ";
        cout << endl;
        cout << "in " << duration << " seconds " << endl;
    }
    return 0;
}

void multi(gmp_randstate_t state, int pols) {
    mpz_t a, b, res;
    mpz_inits(a, b, res, NULL);
    mpz_urandomb(a, state, BITS);
    mpz_urandomb(b, state, BITS);

    uint64_t quantity = pow(2, pols);
    for (uint64_t j=0; j < quantity; j++) {
        int i;
        for (i=0; i < N; i++) {
            mpz_mul(res, a, b);
        }
    }
}
