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
 
 #include <string>
 
 class Aresta {
 public:
    const int v1;
    const int v2;
 
    Aresta(int v1, int v2);
 
    std::string to_string();
 };
 
 #endif /* ARESTA_H */