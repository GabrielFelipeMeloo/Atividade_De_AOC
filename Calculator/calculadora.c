// calculator.c
#include <math.h>
#include <emscripten/emscripten.h>

// Mantemos os nomes simples e exportamos
EMSCRIPTEN_KEEPALIVE
double add(double a, double b) {
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
double sub(double a, double b) {
    return a - b;
}

EMSCRIPTEN_KEEPALIVE
double mul(double a, double b) {
    return a * b;
}

EMSCRIPTEN_KEEPALIVE
double divide(double a, double b) {
    if (b == 0.0) {
        return NAN; // sinaliza divisão por zero com NaN
    }
    return a / b;
}