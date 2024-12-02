//ORDENACAO EM (Selection Sort)
#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10 //constante difinida

using namespace std;

//funcoes auxiliares
void printVector(int vector[]){    
    for(int i = 0; i < TAM; i++){
        cout << " |" << vector[i] << "| ";
    }
    cout << "\n";
}

void selectionSort(int vector[]){
    
    int positionA, aux, i, j;

    for(int i = 0; i < TAM; i++){
        //recebe a posicao inicial para o menor valor
        positionA = i;
        //analisa os elementos na frente
        for(j = i + 1; j < TAM; j++){
           //caso encontre o valor menor na frente dos analizados
           if(vector[j] < vector[positionA]){
            positionA = j;
           }
            
        
       }
       //verifica se houve mudanca e troca os valores
       if (positionA != i){
        aux = vector[i];
        vector[i] = vector[positionA];
        vector[positionA] = aux;
       }
        printVector(vector);
    }
}






//funcao principal
int main(){
    int vector[TAM] = {1,5,6,3,4,2,7,9,8,10};

    cout << "Vetor atual da lista de numeros:\n";
    printVector(vector);

    selectionSort(vector);

    printVector(vector);

    return 0;

}
