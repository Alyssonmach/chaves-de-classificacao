#ifndef MERGESORT_H
#define MERGESORT_H

// classe que cria um vetor preenchido com inteiros aleatorios.
// fornece uma funcao para classificar o vetor com classificacao por intercalacao.

#include <vector>

using std::vector;

// definicao da classe MergeSort
class MergeSort
{
    public:
        MergeSort(int); // construtor inicializa vetor
        void sort(); // classifica o vetor utilizando classificacao por intercalacao
        void displayElements() const; // exibe elementos do vetor
    private:
        int size; // tamanho do vetor
        vector< int > data; // vector de ints
        void sortSubVector(int, int); // classifica o subvetor
        void merge(int, int, int, int); // mescla os dois vetores classificados
        void displaySubVector(int, int) const; // exibe o subvetor
}; // fim da classe MergeSort

#endif