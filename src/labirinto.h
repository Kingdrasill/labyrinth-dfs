#include "pilha.h"
#define ARQ_MAXTAM 30

typedef struct Cell Cell;
typedef struct Labirinto Labirinto;

struct Cell {
    char value;
    bool left;
    bool right;
    bool bottom;
};

struct Labirinto {
    Cell **map;
    int linha;
    int coluna;
};

void Inicializar(Labirinto *lab, int l, int c);

void Finalizar(Labirinto *lab);

void ImprimirLab(Labirinto *lab);

int DFS(Labirinto *lab, Pilha *p);

bool LerArquivo(Labirinto *lab);