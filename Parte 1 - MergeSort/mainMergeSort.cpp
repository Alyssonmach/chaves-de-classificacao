// programa de teste MergeSort
#include <iostream>
using std::cout;
using std::endl;

#include "MergeSort.cpp" // definição da classe MergeSort

int main(void)
{
    // cria o objeto para executar a classificação por intercalação
    MergeSort sortVector(10);

    cout << "Unsorted Vector: " << endl;
    sortVector.displayElements(); // imprime o vetor não classificado

    sortVector.sort(); // classifica o vetor

    cout << "Sorted Vector: " << endl;
    sortVector.displayElements(); // imprime o vetor classificado
    cout << endl;


    return 0;
} // fim da main