#ifndef FLOAT_H
#define FLOAT_H

#define FLOAT_SHIFT_AMOUNT 17
#define F mypow(14)
#define Q 14

// mypow é na base de 2
int mypow(int p);
typedef int float_type;

// conversão de int p/ float
#define FLOAT_CONST(A) ((float_type)(A * F))

// Soma e subtração de floats
#define FLOAT_ADD(A, B) (A + B)
#define FLOAT_SUB(A, B) (A - B)

// Soma e subtração de float com int
#define FLOAT_ADD_MIX(A, B) (A + (B * F))
#define FLOAT_SUB_MIX(A, B) (A - (B * F))

// multiplicação e divisão de float com int
#define FLOAT_MULT_MIX(A, B) (A * B)
#define FLOAT_DIV_MIX(A, B) (A / B)

// multiplicação e divisão de floats
#define FLOAT_MULT(A, B) ((float_type)(((int64_t) A) * B / F))
#define FLOAT_DIV(A, B) ((float_type)((((int64_t) A) * F) / B))

// Pega a parte inteira do float
#define FLOAT_INT_PART(A) (A >> FLOAT_SHIFT_AMOUNT)

// Arredondamento
#define FLOAT_ROUND(A) (A >= 0 ? ((A + (1 * mypow(Q - 1))) / F) \ 
        : ((A - (1 * mypow(Q - 1))) / F))

#endif