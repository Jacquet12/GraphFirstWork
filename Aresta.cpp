#include "Aresta.h"

Aresta::Aresta(int origem, int destino, char tipo) {
    this->origem = origem;
    this->destino = destino;
    if (tipo == 'N') {
        this->ataca = false;
    } else if (tipo == 'A') {
        this->ataca = true;
    }
}

int Aresta::getOrigem() {
    return origem;
}

int Aresta::getDestino() {
    return destino;
}

bool Aresta::isAtaca() {
    return ataca;
}