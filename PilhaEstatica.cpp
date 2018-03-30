#include <iostream>
#define TAM 10
typedef struct Pilha{
int elementos[TAM];
int topo;
} Pilha;

void criar(Pilha& p){
    p.topo = 0;
}
bool vazia(Pilha& p){
    if(p.topo==0){
        return true;
    }else{
        return false;
    }
}
bool cheia(Pilha& p){
    if(p.topo==TAM-1){
        return true;
    }else{
        return false;
    }

}

void empilha(Pilha& p,int X,bool& DeuCerto){

    if(cheia(p1)){
        DeuCerto=false;
    }else{
        p.topo++;
        p.elementos[p.topo]=X;
        DeuCerto=true;
    }

}
void desempilha(Pilha& p,int& X,bool& DeuCerto){

    if(vazia(p)){
        DeuCerto = false;
    }else{
        DeuCerto = true;
        X = p.elementos[p.topo];
        p.topo--;
    }
}
