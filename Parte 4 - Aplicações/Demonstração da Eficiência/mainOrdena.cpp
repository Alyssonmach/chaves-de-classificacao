// programa de teste MergeSort
#include <iostream>
using std::cout;
using std::endl;

#include "Ordena.cpp" // definicao da classe MergeSort

int main(void)
{
    // cria o objeto para executar a classificacao por intercalacao
    Ordena sortVector1(100000), sortVector2(100000);
	
    //cout << "=== Vetor Desordenado ===" << endl;
    //sortVector1.displayElements(); // imprime o vetor nao classificado
    
	float inicio = clock();
    sortVector1.sortMergeSort(); // classifica o vetor
	float fim = clock();
	cout << endl;
    cout << "Tempo de execucao em segundos (MergeSort): " << (fim - inicio)/CLOCKS_PER_SEC << endl;
	cout << endl;	
   // cout << "=== Vetor Ordenado (MergeSort) ===" << endl;
    //sortVector1.displayElements(); // imprime o vetor classificado
   // cout << endl << endl << endl;
	
	//cout << "=== Vetor Desordenado ===" << endl;
    //sortVector2.displayElements(); // imprime o vetor nao classificado
    //cout << endl;
    
    
    inicio = clock();
    sortVector2.sortSelectionSort(); // classifica o vetor
    fim = clock();
    cout << endl;
    cout << "Tempo de execucao em segundos (SelectionSort): " << (fim - inicio)/CLOCKS_PER_SEC << endl;
	
	//cout << endl;
    //cout << "=== Vetor Ordenado (SelectionSort) ===" << endl;
    //sortVector2.displayElements(); // imprime o vetor classificado
    //cout << endl;

    return 0;
} // fim da main