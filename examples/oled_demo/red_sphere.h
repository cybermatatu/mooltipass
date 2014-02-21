/*
 * bitmap red_sphere
 */

#define RED_SPHERE_WIDTH 68
#define RED_SPHERE_HEIGHT 64

const struct {
    uint16_t width;
    uint8_t height;
    uint8_t depth;
    uint8_t flags;
    uint16_t dataSize;
    uint16_t data[1088];
} image_red_sphere __attribute__((__progmem__)) = {
    RED_SPHERE_WIDTH, RED_SPHERE_HEIGHT, 4, 0, 1088,
    {
   /* 0 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000, 
   /* 1 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0b75,  0x4333,  
    0x2222,  0x2333,  0x4700,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000, 
   /* 2 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0db9,  0x7520,  0x0000,  
    0x0000,  0x0000,  0x0147,  0x8000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000, 
   /* 3 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x000e,  0xc742,  0x1112,  0x2211,  
    0x1111,  0x1111,  0x1000,  0x0370,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000, 
   /* 4 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x00d8,  0x2233,  0x3333,  0x2211,  
    0x1111,  0x1111,  0x1111,  0x0000,  0x7000,  0x0000,  0x0000,  0x0000,  
    0x0000, 
   /* 5 */ 0x0000,  0x0000,  0x0000,  0x0000,  0xd748,  0xbcb8,  0x5443,  0x3221,  
    0x1111,  0x1111,  0x1111,  0x1110,  0x1170,  0x0000,  0x0000,  0x0000,  
    0x0000, 
   /* 6 */ 0x0000,  0x0000,  0x0000,  0x000b,  0x89bc,  0xdddb,  0x6443,  0x3221,  
    0x1111,  0x1111,  0x1111,  0x1111,  0x0004,  0xa000,  0x0000,  0x0000,  
    0x0000, 
   /* 7 */ 0x0000,  0x0000,  0x0000,  0x0eaa,  0xbcee,  0xddcb,  0x6444,  0x3322,  
    0x1111,  0x1111,  0x1111,  0x1112,  0x4421,  0x3800,  0x0000,  0x0000,  
    0x0000, 
   /* 8 */ 0x0000,  0x0000,  0x0000,  0xec8e,  0x0edd,  0xcca8,  0x5444,  0x3322,  
    0x1111,  0x1111,  0x1111,  0x1112,  0x6886,  0x2290,  0x0000,  0x0000,  
    0x0000, 
   /* 9 */ 0x0000,  0x0000,  0x000e,  0xba0e,  0xeddd,  0xca75,  0x5443,  0x3222,  
    0x1111,  0x1111,  0x1111,  0x1111,  0x479a,  0xb728,  0x0000,  0x0000,  
    0x0000, 
   /* 10 */ 0x0000,  0x0000,  0x000c,  0xc0ee,  0xeddb,  0x9765,  0x5443,  0x3222,  
    0x2111,  0x1111,  0x1111,  0x1111,  0x1578,  0xabc6,  0x7000,  0x0000,  
    0x0000, 
   /* 11 */ 0x0000,  0x0000,  0x00bc,  0xe0ee,  0xddba,  0x8765,  0x5433,  0x2222,  
    0x1112,  0x2222,  0x2211,  0x1111,  0x1356,  0x8acb,  0x8800,  0x0000,  
    0x0000, 
   /* 12 */ 0x0000,  0x0000,  0x0cce,  0x0eee,  0xdba9,  0x8765,  0x4432,  0x2222,  
    0x2222,  0x2222,  0x2222,  0x2222,  0x2235,  0x68ac,  0xb8b0,  0x0000,  
    0x0000, 
   /* 13 */ 0x0000,  0x0000,  0xdb00,  0xeeed,  0xca98,  0x7655,  0x4332,  0x2222,  
    0x2222,  0x2222,  0x2222,  0x2222,  0x2223,  0x568a,  0xde8d,  0x0000,  
    0x0000, 
   /* 14 */ 0x0000,  0x000d,  0xbeee,  0xeedc,  0xba98,  0x7654,  0x4322,  0x2222,  
    0x2233,  0x3333,  0x2222,  0x2222,  0x2222,  0x3578,  0xacc9,  0xc000,  
    0x0000, 
   /* 15 */ 0x0000,  0x000d,  0xc0ee,  0xedcc,  0xb988,  0x7654,  0x3222,  0x2222,  
    0x3333,  0x3333,  0x3333,  0x3222,  0x2222,  0x2357,  0x9bda,  0xc000,  
    0x0000, 
   /* 16 */ 0x0000,  0x00dd,  0xeeee,  0xdccb,  0xa987,  0x6554,  0x3222,  0x2233,  
    0x3333,  0x3444,  0x4443,  0x3332,  0x2222,  0x2246,  0x79cd,  0xcd00,  
    0x0000, 
   /* 17 */ 0x0000,  0x00cd,  0x0eed,  0xccba,  0xa998,  0x7543,  0x3333,  0x3333,  
    0x3344,  0x4444,  0x4444,  0x4433,  0x3222,  0x2224,  0x68ad,  0xcb00,  
    0x0000, 
   /* 18 */ 0x0000,  0x0dcd,  0xeedc,  0xccba,  0xaaba,  0x8643,  0x3333,  0x3333,  
    0x4444,  0x4444,  0x4444,  0x4443,  0x3222,  0x2223,  0x579c,  0xccd0,  
    0x0000, 
   /* 19 */ 0x0000,  0x09d0,  0xeecc,  0xcbbb,  0xbbaa,  0x9863,  0x3333,  0x3344,  
    0x4455,  0x5555,  0x5554,  0x4444,  0x3322,  0x2222,  0x367a,  0xdd90,  
    0x0000, 
   /* 20 */ 0x0000,  0xecee,  0xddcc,  0xcccc,  0xbbaa,  0x9754,  0x4333,  0x3444,  
    0x5555,  0x5555,  0x5555,  0x5544,  0x4332,  0x2222,  0x2469,  0xcdce,  
    0x0000, 
   /* 21 */ 0x0000,  0xeeee,  0xdccc,  0xcccc,  0xbbaa,  0x9754,  0x4333,  0x3445,  
    0x5555,  0x5555,  0x5555,  0x5554,  0x4433,  0x2222,  0x2367,  0xadee,  
    0x0000, 
   /* 22 */ 0x000e,  0xceed,  0xcbbc,  0xdccb,  0xbba9,  0x9644,  0x4333,  0x3455,  
    0x5566,  0x6666,  0x6655,  0x5555,  0x4443,  0x2222,  0x2246,  0x9cec,  
    0xe000, 
   /* 23 */ 0x000e,  0xaeec,  0xbbcd,  0xdccb,  0xbba9,  0x8644,  0x4333,  0x4455,  
    0x5666,  0x6666,  0x6666,  0x5555,  0x5443,  0x3222,  0x2236,  0x8beb,  
    0xe000, 
   /* 24 */ 0x000e,  0x8edb,  0xabcd,  0xcccb,  0xbaa9,  0x8544,  0x4333,  0x4455,  
    0x6666,  0x6666,  0x6666,  0x6555,  0x5444,  0x3322,  0x2225,  0x7adb,  
    0xe000, 
   /* 25 */ 0x000d,  0xaeca,  0xabcc,  0xccbb,  0xbaa9,  0x7544,  0x4333,  0x4456,  
    0x6666,  0x6666,  0x6666,  0x6655,  0x5544,  0x3322,  0x2224,  0x79cc,  
    0xe000, 
   /* 26 */ 0x00eb,  0xcea8,  0xabcc,  0xcbbb,  0xbaa9,  0x6544,  0x4434,  0x4456,  
    0x6666,  0x6666,  0x6666,  0x6655,  0x5544,  0x3332,  0x2224,  0x69ce,  
    0xce00, 
   /* 27 */ 0x00ca,  0xdc98,  0x9bcc,  0xbbbb,  0xbaa9,  0x6544,  0x4334,  0x4456,  
    0x6666,  0x6666,  0x6666,  0x6665,  0x5544,  0x3332,  0x2223,  0x58bf,  
    0xcd00, 
   /* 28 */ 0x00b9,  0xe977,  0x8bbb,  0xbbbb,  0xaa99,  0x6544,  0x4334,  0x4455,  
    0x6666,  0x6666,  0x6666,  0x6665,  0x5554,  0x4332,  0x2222,  0x48be,  
    0xcd00, 
   /* 29 */ 0x00b8,  0xe767,  0x8abb,  0xbbbb,  0xaa99,  0x6444,  0x4344,  0x4445,  
    0x6666,  0x6666,  0x6666,  0x6665,  0x5554,  0x4333,  0x2222,  0x47ae,  
    0xcd00, 
   /* 30 */ 0x00a7,  0xd656,  0x7aaa,  0xaaba,  0xaa98,  0x6444,  0x4344,  0x4445,  
    0x6666,  0x6677,  0x7666,  0x6655,  0x5554,  0x4333,  0x2222,  0x47ae,  
    0xcd00, 
   /* 31 */ 0x00b6,  0x8555,  0x79aa,  0xaaaa,  0xa998,  0x5444,  0x4444,  0x4445,  
    0x5666,  0x6677,  0x7666,  0x6655,  0x5554,  0x4333,  0x2222,  0x47ae,  
    0xcd00, 
   /* 32 */ 0x00b5,  0x4445,  0x6999,  0xaaaa,  0xa998,  0x5444,  0x4444,  0x4444,  
    0x5566,  0x6667,  0x6666,  0x6655,  0x5554,  0x4333,  0x2222,  0x47ae,  
    0xcd00, 
   /* 33 */ 0x00c5,  0x1344,  0x6889,  0x99aa,  0xa998,  0x5444,  0x3444,  0x4444,  
    0x5556,  0x6666,  0x6666,  0x6555,  0x5544,  0x3333,  0x2222,  0x47ae,  
    0xcd00, 
   /* 34 */ 0x00c6,  0x1344,  0x5778,  0x999a,  0x9998,  0x5443,  0x3334,  0x4444,  
    0x5556,  0x6666,  0x6666,  0x6555,  0x5544,  0x3333,  0x2222,  0x47be,  
    0xcd00, 
   /* 35 */ 0x00d7,  0x1233,  0x4778,  0x8999,  0x9997,  0x5443,  0x3333,  0x3444,  
    0x4555,  0x6666,  0x6666,  0x6555,  0x5544,  0x4333,  0x2222,  0x47bf,  
    0xcd00, 
   /* 36 */ 0x00e9,  0x0344,  0x4667,  0x8899,  0x9987,  0x5443,  0x3333,  0x3444,  
    0x4555,  0x5666,  0x6666,  0x5555,  0x5544,  0x3333,  0x2222,  0x48be,  
    0xce00, 
   /* 37 */ 0x000b,  0x0344,  0x4567,  0x7889,  0x9986,  0x5444,  0x4333,  0x4444,  
    0x4555,  0x5666,  0x6666,  0x5555,  0x5544,  0x3333,  0x2222,  0x48cc,  
    0xd000, 
   /* 38 */ 0x000c,  0x2444,  0x4466,  0x7788,  0x8886,  0x4444,  0x3333,  0x4444,  
    0x4555,  0x5666,  0x6666,  0x5555,  0x5544,  0x3333,  0x2221,  0x59ca,  
    0xe000, 
   /* 39 */ 0x0000,  0x7544,  0x4356,  0x6778,  0x8875,  0x4444,  0x3333,  0x3344,  
    0x4555,  0x5666,  0x6666,  0x5555,  0x5544,  0x3333,  0x2221,  0x5bda,  
    0xe000, 
   /* 40 */ 0x0000,  0xb544,  0x4345,  0x6677,  0x8875,  0x4333,  0x3333,  0x3444,  
    0x4555,  0x5666,  0x6666,  0x5555,  0x5544,  0x3333,  0x2222,  0x6bec,  
    0xe000, 
   /* 41 */ 0x0000,  0x0644,  0x4334,  0x5667,  0x7774,  0x3333,  0x3333,  0x3444,  
    0x4555,  0x6666,  0x6666,  0x5555,  0x5544,  0x3333,  0x2213,  0x8ced,  
    0x0000, 
   /* 42 */ 0x0000,  0x0754,  0x4334,  0x4566,  0x7774,  0x3333,  0x3333,  0x4444,  
    0x4555,  0x5566,  0x6665,  0x5555,  0x5544,  0x3332,  0x2215,  0xadce,  
    0x0000, 
   /* 43 */ 0x0000,  0x0a64,  0x4333,  0x3445,  0x5664,  0x3333,  0x3333,  0x4444,  
    0x5555,  0x5556,  0x5555,  0x5555,  0x5444,  0x3332,  0x2227,  0xcc90,  
    0x0000, 
   /* 44 */ 0x0000,  0x0084,  0x4433,  0x3333,  0x3333,  0x3333,  0x3333,  0x4444,  
    0x5555,  0x5555,  0x5555,  0x5555,  0x5444,  0x3332,  0x2239,  0xbbd0,  
    0x0000, 
   /* 45 */ 0x0000,  0x00b6,  0x4433,  0x3333,  0x3333,  0x3333,  0x3334,  0x4444,  
    0x5555,  0x5555,  0x5555,  0x5555,  0x4444,  0x3332,  0x2217,  0x9b00,  
    0x0000, 
   /* 46 */ 0x0000,  0x0009,  0x4443,  0x3333,  0x3333,  0x3333,  0x3344,  0x4445,  
    0x5555,  0x5555,  0x5555,  0x5554,  0x4444,  0x3322,  0x2213,  0x8d00,  
    0x0000, 
   /* 47 */ 0x0000,  0x000b,  0x6444,  0x3333,  0x3333,  0x3333,  0x3444,  0x4445,  
    0x5555,  0x5555,  0x5555,  0x5544,  0x4443,  0x3322,  0x2212,  0x9000,  
    0x0000, 
   /* 48 */ 0x0000,  0x0000,  0xa444,  0x3333,  0x3333,  0x3334,  0x4444,  0x4444,  
    0x5555,  0x5555,  0x5555,  0x5444,  0x4443,  0x3322,  0x2227,  0xd000,  
    0x0000, 
   /* 49 */ 0x0000,  0x0000,  0xe744,  0x3333,  0x3333,  0x3333,  0x4444,  0x4444,  
    0x4455,  0x5555,  0x5554,  0x4444,  0x4433,  0x3322,  0x224d,  0x0000,  
    0x0000, 
   /* 50 */ 0x0000,  0x0000,  0x0c53,  0x4333,  0x3333,  0x2333,  0x3344,  0x4444,  
    0x4444,  0x4444,  0x4444,  0x4444,  0x4333,  0x3322,  0x12b0,  0x0000,  
    0x0000, 
   /* 51 */ 0x0000,  0x0000,  0x00a5,  0x3333,  0x3333,  0x2223,  0x3334,  0x4444,  
    0x4444,  0x4444,  0x4444,  0x4444,  0x3333,  0x3332,  0x3900,  0x0000,  
    0x0000, 
   /* 52 */ 0x0000,  0x0000,  0x0009,  0x4333,  0x3333,  0x3222,  0x3333,  0x3444,  
    0x4444,  0x4444,  0x4444,  0x4443,  0x3333,  0x3323,  0x8000,  0x0000,  
    0x0000, 
   /* 53 */ 0x0000,  0x0000,  0x0000,  0x8333,  0x3233,  0x3322,  0x2233,  0x3333,  
    0x4444,  0x4444,  0x4443,  0x3333,  0x3333,  0x3328,  0xd000,  0x0000,  
    0x0000, 
   /* 54 */ 0x0000,  0x0000,  0x0000,  0x0a23,  0x3322,  0x3322,  0x2222,  0x3333,  
    0x3333,  0x3333,  0x3333,  0x3333,  0x3333,  0x329e,  0x0000,  0x0000,  
    0x0000, 
   /* 55 */ 0x0000,  0x0000,  0x0000,  0x00b4,  0x2232,  0x2222,  0x2222,  0x2222,  
    0x3333,  0x3333,  0x3333,  0x3333,  0x3322,  0x4ae0,  0x0000,  0x0000,  
    0x0000, 
   /* 56 */ 0x0000,  0x0000,  0x0000,  0x000b,  0x6312,  0x2222,  0x2222,  0x2222,  
    0x2222,  0x2222,  0x2222,  0x2222,  0x2137,  0xb000,  0x0000,  0x0000,  
    0x0000, 
   /* 57 */ 0x0000,  0x0000,  0x0000,  0x0000,  0xd843,  0x2222,  0x2222,  0x2222,  
    0x2222,  0x2222,  0x2222,  0x2222,  0x348d,  0x0000,  0x0000,  0x0000,  
    0x0000, 
   /* 58 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x00b6,  0x3222,  0x2222,  0x2222,  
    0x2222,  0x2222,  0x2222,  0x2223,  0x6b00,  0x0000,  0x0000,  0x0000,  
    0x0000, 
   /* 59 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0621,  0x2222,  0x2211,  
    0x1111,  0x1222,  0x2222,  0x1260,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000, 
   /* 60 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x3211,  0x1111,  
    0x1111,  0x1111,  0x1123,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000, 
   /* 61 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x4322,  0x1111,  
    0x1111,  0x1111,  0x2234,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000, 
   /* 62 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0004,  0x3322,  
    0x2222,  0x2233,  0x4400,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000, 
   /* 63 */ 0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  
    0x0000, 
    }
};