// Figura 8.15: selectionsort.cpp
// Este programa coloca valores em um array, classifica os valores em ordem 
// crescente e imprime o array resultante.

#include <iostream>

using std::cout;
using std::endl;

# include <iomanip>

using std::setw;

void selectionSort(int * const, const int); // prototipo
void swap(int * const, int * const); // prototipo

int main(void)
{
    const int arraySize = 10;
    int a[arraySize] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    cout << "Data items in original order" << endl;

    for(int i = 0; i < arraySize; i++)
    {
        cout << setw(4) << a[i];
    }
	
	cout << endl;
	
    selectionSort(a, arraySize); // classifica o array

    cout << "Data items in ascending order" << endl;

    for(int j = 0; j < arraySize; j++)
    {
        cout << setw(4) << a[j];
    }

    cout << endl;

    return 0; // indica terminacao bem sucedida
} // fim da main

// funcao para classificar um array
void selectionSort(int * const array, const int size)
{
    int smallest; // indice do menor elemento

    // itera sobre size - 1 elementos
    for(int i = 0; i < size - 1; i++)
    {
        smallest = i; // primeiro indice do array

        // faz um loop para localizar o indice do menor elemento
        for(int index = i + 1; index < size; index++)
        {
            if(array[index] < array[smallest])
            {
                smallest = index;
            }
        }

        swap(&array[i], &array[smallest]);
    } // fim do for
} // fim da funcao selectionSort

// troca os valores nas posicoes de memoria para as quais
// elemento1Ptr e elemento2Ptr apontem
void swap(int * const element1Ptr, int * const element2Ptr)
{
    int hold = * element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
} // fim da funcao swap