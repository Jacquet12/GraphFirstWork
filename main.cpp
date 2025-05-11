#include <iostream>
#include "Grafo.h"
#include "Aresta.h"

int main() {
    int A, R;
    std::cin >> A >> R;

    Grafo grafo(A);

    for (int i = 0; i < R; ++i) {
        int X, Y;
        char Z;
        std::cin >> X >> Y >> Z;
        Aresta aresta(X, Y, Z);
        grafo.insere_aresta(aresta);
    }

    if (grafo.eh_bipartido_1()) {
        std::cout << "SIM" << std::endl;
    } else {
        std::cout << "NAO" << std::endl;
    }

    if (grafo.eh_bipartido_2()) {
        std::cout << "SIM" << std::endl;
    } else {
        std::cout << "NAO" << std::endl;
    }

    return 0;
}