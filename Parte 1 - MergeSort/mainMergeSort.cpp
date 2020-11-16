// programa de teste MergeSort
#include <iostream>
using std::cout;
using std::endl;

#include "MergeSort.cpp" // definicao da classe MergeSort

int main(void)
{
    // cria o objeto para executar a classificacao por intercalacao
    MergeSort sortVector(10);

    cout << "=== Vetor Desordenado ===" << endl;
    sortVector.displayElements(); // imprime o vetor nao classificado

    sortVector.sort(); // classifica o vetor
	
	cout << endl;
    cout << "=== Vetor Ordenado ===" << endl;
    sortVector.displayElements(); // imprime o vetor classificado
    cout << endl;

    return 0;
} // fim da main