// programa de teste MergeSort
#include <iostream>
using std::cout;
using std::endl;

#include "MergeSort.cpp" // definicao da classe MergeSort

int main(void)
{
    // cria o objeto para executar a classificacao por intercalacao
    MergeSort sortVector1(100000), sortVector2(100000);
	
    cout << "Vetor Desordenado: " << endl;
    //sortVector1.displayElements(); // imprime o vetor nao classificado
    
	float inicio = clock();
    sortVector1.sort_mergesort(); // classifica o vetor
	float fim = clock();
	cout << endl;
    cout << "Clock: " << (fim - inicio)/CLOCKS_PER_SEC << endl;
	
	cout << endl;	
    cout << "Vetor Ordenado (MergeSort): " << endl;
    //sortVector1.displayElements(); // imprime o vetor classificado
    cout << endl;
	
	cout << "Vetor Desordenado: " << endl;
    //sortVector2.displayElements(); // imprime o vetor nao classificado
    cout << endl;
    
    
    inicio = clock();
    sortVector2.sort_selectionsort(); // classifica o vetor
    fim = clock();
    cout << endl;
    cout << "Clock: " << (fim - inicio)/CLOCKS_PER_SEC << endl;
	
	cout << endl;
    cout << "Vetor Ordenado (SelectionSort): " << endl;
    //sortVector2.displayElements(); // imprime o vetor classificado
    cout << endl;

    return 0;
} // fim da main