#ifndef FILA_H_DEFINED
#define FILA_H_DEFINED
//estrutura do nó
typedef struct node{
int info;
node* next;
} node;
//definindo ponteiro para o nó
typedef node* nodeptr;
//estrutura da fila
typedef struct fila{
 nodeptr primeiro;
 nodeptr ultimo;
};
//classe fila
class Fila{
    public:
        //Cria Fila
        Fila(fila *f);
        //Operações da fila
        void insere(fila* f, int X, bool& DeuCerto);
        void retira(fila* f, int X, bool& Deucerto);
        bool cheia(fila* f);
        bool vazia(fila* f);
};
#endif // FILA_H_DEFINED
