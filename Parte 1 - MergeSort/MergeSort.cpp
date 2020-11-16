// definicao de funcao-membro da classe MergeSort
#include <iostream>

using std::cout;
using std::endl;

#include <vector>

using std::vector;

#include <cstdlib> // prototipos para a funcao srand e rand

using std::rand;
using std::srand;

#include <ctime> // prototipo para a funcao time

using std::time;

#include "MergeSort.h" // definicao da classe MergeSort

// construtor preenche vetor com inteiros aleatorios
MergeSort::MergeSort(int vectorSize)
{
    size = (vectorSize > 0 ? vectorSize : 0); // valida vectorSize
    srand( time(0) ); // semeia gerados de numeros aleatorios utilizando a hora atual

    // preenche o vetor com ints aleatorios no intervalo de 10-99
    for(int i = 0; i < size; i++)
    {
        data.push_back(10 + rand() % 90);
    }

} // fim do construtor de MergeSort

// divide o vetor, classifica os subvetores,  e intercala os subvetores no vetor classificado
void MergeSort::sort()
{
    sortSubVector(0, size - 1); // classifca recursivamente o vetor inteiro
} // fim da funcao sort

// funcao recursiva para classificar subvetores
void MergeSort::sortSubVector(int low, int high)
{
    // caso basico de teste; tamanho do vetor e igual a 1
    if( (high - low) >= 1) // se nao for o caso basico
    {
        int middle1 = (low + high) / 2; // calcula o meio do vetor
        int middle2 = middle1 + 1; // calcula o proximo elemento

        // gera saida do passo da divisao
        cout << endl;
        cout << "Divide os dados: " << endl << endl;
        displaySubVector(low, high);
        cout << endl << " ";
        displaySubVector(low, middle1);
        cout << endl << " ";
        displaySubVector(middle2, high);
        cout << endl << endl;

        // divide o vetor pela metade; classifica cada metade (chamadas recursivas)
        sortSubVector(low, middle1); // primeira metade do vetor
        sortSubVector(middle2, high); // segunda metade do vetor

        // intercala dois vetores classificados apos as chamadas de divisao retornarem
        merge(low, middle1, middle2, high);
    } // fim do if
} // fim da funcao sortSubVector

// intercala dois subvetores classificados em um subvetor classificado
void MergeSort::merge(int left, int middle1, int middle2, int right)
{
    int leftIndex = left; // indice do subvetor esquerdo
    int rightIndex = middle2; // indice do subvetor direito
    int combinedIndex = left; // indice no vetor de trabalho temporario
    vector< int > combined(size); // vetor de trabalho

    // gera saida dos dois subvetores antes da intercalacao
    cout << "Funde os dados: " << endl << endl;
    displaySubVector(left, middle1);
    cout << endl << " ";
    displaySubVector(middle2, right);
    cout << endl;

    // intercala vetores ate alcancar o fim de um deles
    while(leftIndex <= middle1 && rightIndex <= right)
    {
        // coloca o menor dos dois elementos no resultado
        // e se move para o proximo espaco do vetor
        if( data[ leftIndex ] <= data[ rightIndex ] )
        {
            combined[ combinedIndex++ ] = data[ leftIndex++ ];
        }
        else
        {
            combined[ combinedIndex++ ] = data[ rightIndex++ ];
        }
    } // fim do while

    if(leftIndex == middle2) // se no fim do vetor esquerdo
    {
        while (rightIndex <= right) // copia o restante do vetor direto
        {
           combined[ combinedIndex++ ] = data[ rightIndex ++];
        } // fim do while
    } 
    else // no fim do vetor direto
    {
        while (leftIndex <= middle1) // copia o restante do vetor esquerdo
        {
            combined[ combinedIndex++ ] = data[ leftIndex++ ];
        }
    }

    // copia valores de volta par o vetor original
    for(int i = left; i<= right; i++ )
    {
        data[i] = combined[i];
    }

    // gera saida do vetor intercalado
    cout << " ";
    displaySubVector( left, right );
    cout << endl << endl;
} // fim da funcao merge

// exibe elementos no vetor
void MergeSort::displayElements() const
{
    displaySubVector(0, size - 1);
} // fim da funcao displayElements

// exibe certos valores no vetor
void MergeSort::displaySubVector(int low, int high) const
{
    // gera espacos para alinhamento
    for(int i = 0; i < low; i++)
    {
        cout << " ";
    }

    // gera saida dos elementos deixados no vetor
    for(int i = low; i <= high; i++)
    {
        cout << " " << data[i];
    }
} // fim da funcao displaySubVector



