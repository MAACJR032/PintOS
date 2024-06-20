#ifndef FLOAT_H
#define FLOAT_H

#define Q 14

typedef int float_type;

// conversão de int p/ float
#define FLOAT_CONST(A) ((float_type)(A << Q))

// Soma e subtração de floats
#define FLOAT_ADD(A, B) (A + B)
#define FLOAT_SUB(A, B) (A - B)

// Soma e subtração de float com int
#define FLOAT_ADD_MIX(A, B) (A + (B << Q))
#define FLOAT_SUB_MIX(A, B) (A - (B << Q))

// multiplicação e divisão de float com int
#define FLOAT_MULT_MIX(A, B) (A * B)
#define FLOAT_DIV_MIX(A, B) (A / B)

// multiplicação e divisão de floats
#define FLOAT_MULT(A, B) ((float_type)((((int64_t) A) * B) >> Q))
#define FLOAT_DIV(A, B) ((float_type)((((int64_t) A) << Q) / B))

// Pega a parte inteira do float
#define FLOAT_INT_PART(A) (A >> Q)

// Arredondamento
#define FLOAT_ROUND(A) (A >= 0 ? ((A + (1 << (Q - 1))) >> Q) : ((A - (1 << (Q - 1))) >> Q))

#endif