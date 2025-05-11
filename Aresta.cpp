#include "Aresta.h"

Aresta::Aresta(int origem, int destino, char tipo) {
    this->origem = origem;
    this->destino = destino;
    this->ataca = (tipo == 'A');
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