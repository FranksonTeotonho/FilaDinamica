#include <stdlib.h>
#include "Fila.h"
//Cria Fila
Fila::Fila(fila* f){
   f->primeiro = NULL;
   f->ultimo = NULL;

}
//Opera��es da Fila
void Fila::insere(fila* f, int X, bool& DeuCerto){
    //criando n�
    nodeptr aux = new node;
    //verifica��o de fila cheia
    if(cheia(f)){
        DeuCerto = false;
    }else{
        DeuCerto = true;
        //atribuindo informa��es ao novo n�
        aux->info = X;
        aux->next = NULL;
        if(vazia(f)){
            f->primeiro = aux;
        }else{
            f->ultimo->next = aux;
        }
            f->ultimo = aux;

    }
}
void Fila::retira(fila* f, int& X, bool& Deucerto){
    nodeptr aux = new node;
    if(vazia(f)){
        Deucerto = false;
    }else{
        Deucerto = true;
        X = f->primeiro->info;//retornando a informa��o
        aux = f->primeiro; // aux ajuda a desalocar a memoria
        f->primeiro = f->primeiro->next; //repassando o ponteiro primeiro para o proximo n� da fila
        if(f->primeiro = NULL){//fila ficou vazia
            f->ultimo = NULL;
        }
        delete(aux);//desalocando memoria
    }
}
bool Fila::cheia(fila* f){
    return false;
}
bool Fila::vazia(fila* f){
    if(f->primeiro == NULL){
        return true;
    }else{
        return false;
    }
}

