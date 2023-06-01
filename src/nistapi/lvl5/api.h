// SPDX-License-Identifier: Apache-2.0

#ifndef api_h
#define api_h

#define CRYPTO_SECRETKEYBYTES 1509
#define CRYPTO_PUBLICKEYBYTES  128
#define CRYPTO_BYTES           335

#define CRYPTO_ALGNAME "lvl5"

int
crypto_sign_keypair(unsigned char *pk, unsigned char *sk);

int
crypto_sign(unsigned char *sm, unsigned long long *smlen,
            const unsigned char *m, unsigned long long mlen,
            const unsigned char *sk);

int
crypto_sign_open(unsigned char *m, unsigned long long *mlen,
                 const unsigned char *sm, unsigned long long smlen,
                 const unsigned char *pk);

#endif /* api_h */
