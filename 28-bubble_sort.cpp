//ORDENACAO EM (Bubble Sort)
#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;

//Funcoes auxiliares do codigo principal
void print_lista(int lista[]){
    int i;
    cout << "\n";
    for(int i = 0; i < TAM; i++){
        cout << " |" << lista[i] << "| ";               
    }
    cout << "\n";
}
//checa a lista
void bubble_sort(int lista[]){
    bool trocou = false;//flag para verificar se houve troca
    for(int i = 0; i < TAM -1; i++) {
        trocou = false;
        for(int j = 0; j < TAM -1; j++){
            if(lista[j] > lista[j + 1]){
            //troca os elementos
            int temp = lista[j];
            lista[j] = lista[j + 1];
            lista[j + 1] = temp;
            trocou = true;

            }
        
        }
        // Se nao houve troca, a lista ja esta ordenada
        if(!trocou) break;


    }

}


//FUNCAO PRINCIPAL
int main(){
    int lista[TAM]{0,3,2,10,8,7,9,1,4,5};
    

    cout << "Lista original:";
    print_lista(lista);

    //ordena lista
    bubble_sort(lista);

    cout << "Lista ordenada:";
    print_lista(lista);

    

    return 0;
}