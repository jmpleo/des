#define NUM_CHUNK_BITS 28

static uint64_t plaintext_zipped[64] = {

    // Unprocessed plaintext: 0x8787878787878787
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL,
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL,
    0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL,
    0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL,
    0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL,
    0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL,
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL,
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL,
    0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL,
    0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL,
    0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL,
    0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL,
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL,
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL,
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL,
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL

};

static uint64_t ciphertext_zipped[64] = {

    // Unprocessed ciphertext: 0x4f26297eb3dc8fed
    0xffffffffffffffffLL, 0x0000000000000000LL, 0xffffffffffffffffLL, 0x0000000000000000LL,
    0xffffffffffffffffLL, 0x0000000000000000LL, 0x0000000000000000LL, 0xffffffffffffffffLL,
    0x0000000000000000LL, 0x0000000000000000LL, 0xffffffffffffffffLL, 0xffffffffffffffffLL,
    0xffffffffffffffffLL, 0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL,
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL, 0x0000000000000000LL,
    0xffffffffffffffffLL, 0x0000000000000000LL, 0xffffffffffffffffLL, 0xffffffffffffffffLL,
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0x0000000000000000LL, 0xffffffffffffffffLL,
    0x0000000000000000LL, 0xffffffffffffffffLL, 0x0000000000000000LL, 0xffffffffffffffffLL,
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL,
    0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL, 0x0000000000000000LL,
    0xffffffffffffffffLL, 0x0000000000000000LL, 0x0000000000000000LL, 0xffffffffffffffffLL,
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL, 0x0000000000000000LL,
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0xffffffffffffffffLL, 0x0000000000000000LL,
    0xffffffffffffffffLL, 0xffffffffffffffffLL, 0x0000000000000000LL, 0xffffffffffffffffLL,
    0x0000000000000000LL, 0xffffffffffffffffLL, 0x0000000000000000LL, 0xffffffffffffffffLL,
    0xffffffffffffffffLL, 0x0000000000000000LL, 0xffffffffffffffffLL, 0xffffffffffffffffLL

};
