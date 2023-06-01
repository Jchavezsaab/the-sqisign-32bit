#include <stddef.h>
#include <stdint.h>
#include <torsion_constants.h>
#if 0
#elif 8*DIGIT_LEN == 16
const uint64_t TORSION_PLUS_EVEN_POWER = 0x4b;
const uint64_t TORSION_ODD_PRIMES[28] = {0x3, 0x17, 0x3b, 0x65, 0x6d, 0xc5, 0x1eb, 0x2e7, 0x779, 0x7, 0xb, 0xd, 0x25, 0x59, 0x61, 0x6b, 0x83, 0x89, 0xdf, 0xef, 0x17f, 0x185, 0x1f3, 0x25f, 0x409, 0x419, 0x4a9, 0x7b5};
const uint64_t TORSION_ODD_POWERS[28] = {0x24, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x4, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1};
const uint64_t TORSION_PLUS_ODD_PRIMES[9] = {0x3, 0x17, 0x3b, 0x65, 0x6d, 0xc5, 0x1eb, 0x2e7, 0x779};
const size_t TORSION_PLUS_ODD_POWERS[9] = {0x24, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2};
const uint64_t TORSION_MINUS_ODD_PRIMES[19] = {0x7, 0xb, 0xd, 0x25, 0x59, 0x61, 0x6b, 0x83, 0x89, 0xdf, 0xef, 0x17f, 0x185, 0x1f3, 0x25f, 0x409, 0x419, 0x4a9, 0x7b5};
const size_t TORSION_MINUS_ODD_POWERS[19] = {0x4, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1};
const size_t DEGREE_COMMITMENT_POWERS[28] = {0x0, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x4, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1};
const ibz_t CHARACTERISTIC = {{._mp_alloc = 0, ._mp_size = 16, ._mp_d = (mp_limb_t[]) {0xffff,0xffff,0xffff,0xffff,0x47ff,0x3551,0x9e49,0x252c,0x7437,0x8740,0xa865,0x33a6,0xd98c,0x6b95,0x9e28,0x34e2}}};
const ibz_t TORSION_ODD = {{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x9c39,0x8bdf,0x3ada,0xa0cb,0xe195,0xb62c,0xca65,0x18ad,0x4ef2,0xb1c7,0x963f,0xa5f5,0xff2c,0xda91,0x2ce5,0xa54d,0x85bb,0x29e4,0xd6c0,0xfadc,0x17e}}};
const ibz_t TORSION_ODD_PRIMEPOWERS[28] = {{{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0xc6d1,0x8b91,0x3e46,0x215}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x211}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xd99}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x27d9}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2e69}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x9799}}}, {{._mp_alloc = 0, ._mp_size = 2, ._mp_d = (mp_limb_t[]) {0xadb9,0x3}}}, {{._mp_alloc = 0, ._mp_size = 2, ._mp_d = (mp_limb_t[]) {0x6c71,0x8}}}, {{._mp_alloc = 0, ._mp_size = 2, ._mp_d = (mp_limb_t[]) {0xd731,0x37}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x961}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xb}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xd}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x25}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x59}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x61}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x6b}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x83}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x89}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xdf}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xef}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x17f}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x185}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1f3}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x25f}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x409}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x419}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x4a9}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x7b5}}}};
const ibz_t TORSION_ODD_PLUS = {{._mp_alloc = 0, ._mp_size = 12, ._mp_d = (mp_limb_t[]) {0xaa29,0xc926,0xa593,0x86e4,0xe80e,0xcb0,0x74d5,0x3186,0x72bb,0xc50d,0x9c53,0x6}}};
const ibz_t TORSION_ODD_MINUS = {{._mp_alloc = 0, ._mp_size = 10, ._mp_d = (mp_limb_t[]) {0xc391,0x81fc,0x4307,0xb45c,0x8cc7,0xa562,0x2134,0x3fea,0xef0a,0x39}}};
const ibz_t TORSION_PLUS_2POWER = {{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x800}}};
const ibz_t TORSION_PLUS_3POWER = {{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0xc6d1,0x8b91,0x3e46,0x215}}};
const ibz_t TORSION_PLUS_23POWER = {{._mp_alloc = 0, ._mp_size = 9, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x8800,0x8e36,0x345c,0xa9f2,0x10}}};
const ibz_t DEGREE_COMMITMENT = {{._mp_alloc = 0, ._mp_size = 17, ._mp_d = (mp_limb_t[]) {0x28e9,0xc551,0x1238,0xa0b3,0x76c,0x9d7d,0x4579,0xb59d,0xef3,0xb18b,0x664a,0xb2f1,0x383c,0x81df,0xa08,0x85e4,0xb7dc}}};
const ibz_t DEGREE_COMMITMENT_PLUS = {{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0xb3d9,0x59c1,0x9f3b,0x2e,0xecaa,0x686f,0x744b,0x32c}}};
const ibz_t DEGREE_COMMITMENT_MINUS = {{._mp_alloc = 0, ._mp_size = 10, ._mp_d = (mp_limb_t[]) {0xc391,0x81fc,0x4307,0xb45c,0x8cc7,0xa562,0x2134,0x3fea,0xef0a,0x39}}};
const ibz_t DEGREE_CHALLENGE = {{._mp_alloc = 0, ._mp_size = 9, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x8800,0x8e36,0x345c,0xa9f2,0x10}}};
#elif 8*DIGIT_LEN == 32
const uint64_t TORSION_PLUS_EVEN_POWER = 0x4b;
const uint64_t TORSION_ODD_PRIMES[28] = {0x3, 0x17, 0x3b, 0x65, 0x6d, 0xc5, 0x1eb, 0x2e7, 0x779, 0x7, 0xb, 0xd, 0x25, 0x59, 0x61, 0x6b, 0x83, 0x89, 0xdf, 0xef, 0x17f, 0x185, 0x1f3, 0x25f, 0x409, 0x419, 0x4a9, 0x7b5};
const uint64_t TORSION_ODD_POWERS[28] = {0x24, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x4, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1};
const uint64_t TORSION_PLUS_ODD_PRIMES[9] = {0x3, 0x17, 0x3b, 0x65, 0x6d, 0xc5, 0x1eb, 0x2e7, 0x779};
const size_t TORSION_PLUS_ODD_POWERS[9] = {0x24, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2};
const uint64_t TORSION_MINUS_ODD_PRIMES[19] = {0x7, 0xb, 0xd, 0x25, 0x59, 0x61, 0x6b, 0x83, 0x89, 0xdf, 0xef, 0x17f, 0x185, 0x1f3, 0x25f, 0x409, 0x419, 0x4a9, 0x7b5};
const size_t TORSION_MINUS_ODD_POWERS[19] = {0x4, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1};
const size_t DEGREE_COMMITMENT_POWERS[28] = {0x0, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x4, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1};
const ibz_t CHARACTERISTIC = {{._mp_alloc = 0, ._mp_size = 8, ._mp_d = (mp_limb_t[]) {0xffffffff,0xffffffff,0x355147ff,0x252c9e49,0x87407437,0x33a6a865,0x6b95d98c,0x34e29e28}}};
const ibz_t TORSION_ODD = {{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x8bdf9c39,0xa0cb3ada,0xb62ce195,0x18adca65,0xb1c74ef2,0xa5f5963f,0xda91ff2c,0xa54d2ce5,0x29e485bb,0xfadcd6c0,0x17e}}};
const ibz_t TORSION_ODD_PRIMEPOWERS[28] = {{{._mp_alloc = 0, ._mp_size = 2, ._mp_d = (mp_limb_t[]) {0x8b91c6d1,0x2153e46}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x211}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xd99}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x27d9}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2e69}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x9799}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x3adb9}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x86c71}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x37d731}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x961}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xb}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xd}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x25}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x59}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x61}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x6b}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x83}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x89}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xdf}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xef}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x17f}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x185}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1f3}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x25f}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x409}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x419}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x4a9}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x7b5}}}};
const ibz_t TORSION_ODD_PLUS = {{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xc926aa29,0x86e4a593,0xcb0e80e,0x318674d5,0xc50d72bb,0x69c53}}};
const ibz_t TORSION_ODD_MINUS = {{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0x81fcc391,0xb45c4307,0xa5628cc7,0x3fea2134,0x39ef0a}}};
const ibz_t TORSION_PLUS_2POWER = {{._mp_alloc = 0, ._mp_size = 3, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x800}}};
const ibz_t TORSION_PLUS_3POWER = {{._mp_alloc = 0, ._mp_size = 2, ._mp_d = (mp_limb_t[]) {0x8b91c6d1,0x2153e46}}};
const ibz_t TORSION_PLUS_23POWER = {{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x8e368800,0xa9f2345c,0x10}}};
const ibz_t DEGREE_COMMITMENT = {{._mp_alloc = 0, ._mp_size = 9, ._mp_d = (mp_limb_t[]) {0xc55128e9,0xa0b31238,0x9d7d076c,0xb59d4579,0xb18b0ef3,0xb2f1664a,0x81df383c,0x85e40a08,0xb7dc}}};
const ibz_t DEGREE_COMMITMENT_PLUS = {{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0x59c1b3d9,0x2e9f3b,0x686fecaa,0x32c744b}}};
const ibz_t DEGREE_COMMITMENT_MINUS = {{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0x81fcc391,0xb45c4307,0xa5628cc7,0x3fea2134,0x39ef0a}}};
const ibz_t DEGREE_CHALLENGE = {{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x8e368800,0xa9f2345c,0x10}}};
#elif 8*DIGIT_LEN == 64
const uint64_t TORSION_PLUS_EVEN_POWER = 0x4b;
const uint64_t TORSION_ODD_PRIMES[28] = {0x3, 0x17, 0x3b, 0x65, 0x6d, 0xc5, 0x1eb, 0x2e7, 0x779, 0x7, 0xb, 0xd, 0x25, 0x59, 0x61, 0x6b, 0x83, 0x89, 0xdf, 0xef, 0x17f, 0x185, 0x1f3, 0x25f, 0x409, 0x419, 0x4a9, 0x7b5};
const uint64_t TORSION_ODD_POWERS[28] = {0x24, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x4, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1};
const uint64_t TORSION_PLUS_ODD_PRIMES[9] = {0x3, 0x17, 0x3b, 0x65, 0x6d, 0xc5, 0x1eb, 0x2e7, 0x779};
const size_t TORSION_PLUS_ODD_POWERS[9] = {0x24, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2};
const uint64_t TORSION_MINUS_ODD_PRIMES[19] = {0x7, 0xb, 0xd, 0x25, 0x59, 0x61, 0x6b, 0x83, 0x89, 0xdf, 0xef, 0x17f, 0x185, 0x1f3, 0x25f, 0x409, 0x419, 0x4a9, 0x7b5};
const size_t TORSION_MINUS_ODD_POWERS[19] = {0x4, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1};
const size_t DEGREE_COMMITMENT_POWERS[28] = {0x0, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x4, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1};
const ibz_t CHARACTERISTIC = {{._mp_alloc = 0, ._mp_size = 4, ._mp_d = (mp_limb_t[]) {0xffffffffffffffff,0x252c9e49355147ff,0x33a6a86587407437,0x34e29e286b95d98c}}};
const ibz_t TORSION_ODD = {{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xa0cb3ada8bdf9c39,0x18adca65b62ce195,0xa5f5963fb1c74ef2,0xa54d2ce5da91ff2c,0xfadcd6c029e485bb,0x17e}}};
const ibz_t TORSION_ODD_PRIMEPOWERS[28] = {{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2153e468b91c6d1}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x211}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xd99}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x27d9}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2e69}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x9799}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x3adb9}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x86c71}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x37d731}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x961}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xb}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xd}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x25}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x59}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x61}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x6b}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x83}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x89}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xdf}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0xef}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x17f}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x185}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1f3}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x25f}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x409}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x419}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x4a9}}}, {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x7b5}}}};
const ibz_t TORSION_ODD_PLUS = {{._mp_alloc = 0, ._mp_size = 3, ._mp_d = (mp_limb_t[]) {0x86e4a593c926aa29,0x318674d50cb0e80e,0x69c53c50d72bb}}};
const ibz_t TORSION_ODD_MINUS = {{._mp_alloc = 0, ._mp_size = 3, ._mp_d = (mp_limb_t[]) {0xb45c430781fcc391,0x3fea2134a5628cc7,0x39ef0a}}};
const ibz_t TORSION_PLUS_2POWER = {{._mp_alloc = 0, ._mp_size = 2, ._mp_d = (mp_limb_t[]) {0x0,0x800}}};
const ibz_t TORSION_PLUS_3POWER = {{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2153e468b91c6d1}}};
const ibz_t TORSION_PLUS_23POWER = {{._mp_alloc = 0, ._mp_size = 3, ._mp_d = (mp_limb_t[]) {0x0,0xa9f2345c8e368800,0x10}}};
const ibz_t DEGREE_COMMITMENT = {{._mp_alloc = 0, ._mp_size = 5, ._mp_d = (mp_limb_t[]) {0xa0b31238c55128e9,0xb59d45799d7d076c,0xb2f1664ab18b0ef3,0x85e40a0881df383c,0xb7dc}}};
const ibz_t DEGREE_COMMITMENT_PLUS = {{._mp_alloc = 0, ._mp_size = 2, ._mp_d = (mp_limb_t[]) {0x2e9f3b59c1b3d9,0x32c744b686fecaa}}};
const ibz_t DEGREE_COMMITMENT_MINUS = {{._mp_alloc = 0, ._mp_size = 3, ._mp_d = (mp_limb_t[]) {0xb45c430781fcc391,0x3fea2134a5628cc7,0x39ef0a}}};
const ibz_t DEGREE_CHALLENGE = {{._mp_alloc = 0, ._mp_size = 3, ._mp_d = (mp_limb_t[]) {0x0,0xa9f2345c8e368800,0x10}}};
#endif
