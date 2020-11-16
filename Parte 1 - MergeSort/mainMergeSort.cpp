// programa de teste MergeSort
#include <iostream>
using std::cout;
using std::endl;

#include "MergeSort.cpp" // definicao da classe MergeSort

int main(void)
{
    // cria o objeto para executar a classificacao por intercalacao
    MergeSort sortVector(10);

    cout << "Unsorted Vector: " << endl;
    sortVector.displayElements(); // imprime o vetor nao classificado

    sortVector.sort(); // classifica o vetor
	
	cout << endl;
    cout << "Sorted Vector: " << endl;
    sortVector.displayElements(); // imprime o vetor classificado
    cout << endl;


    return 0;
} // fim da main