#ifndef COMPUERTAS_H
#define COMPUERTAS_H

// Compuertas de 1 entrada
inline int compuertaNOT(int a)    { return !a; }
inline int compuertaBuffer(int a) { return a;  }

// Compuertas de 2 entradas
inline int compuertaAND(int a, int b)  { return a && b;  }
inline int compuertaOR(int a, int b)   { return a || b;   }
inline int compuertaNAND(int a, int b) { return !(a && b); }
inline int compuertaNOR(int a, int b)  { return !(a || b);  }
inline int compuertaXOR(int a, int b)  { return a ^ b;    }
inline int compuertaXNOR(int a, int b) { return !(a ^ b);  }

#endif