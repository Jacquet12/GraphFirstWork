/*
 * Tarefa 01 - Grafo - Listas de Adjacencia
 *
 * GEN254 - Grafos - 2024/1
 *
 * Nome:      XXXX
 * Matricula: XXXX
 */

#ifndef ARESTA_H
#define ARESTA_H
 
class Aresta {
    private:
        int origem;
        int destino;
        bool ataca;
 
    public:
        Aresta(int origem, int destino, char tipo);
        int getOrigem();
        int getDestino();
        bool isAtaca();
    };
 
#endif /* ARESTA_H */ 