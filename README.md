# Chaves de Classificação

## Título do Seminário

Classificação de dados com base em chaves de ordenação, utilizando os algoritmos **SelectionSort** e **MergeSort**, com demonstração comparativa de eficiência.

## Detalhes Técnicos

* Seminário da disciplina **Técnicas de Programação** — UFCG
* Período: **2020.0**

## Slides da Apresentação

* [(Visualizar slides)](https://github.com/Alyssonmach/chaves-de-classificacao/blob/main/apresentacao.pdf)
* [(Baixar slides)](https://github.com/Alyssonmach/chaves-de-classificacao/raw/main/apresentacao.pdf)

## Códigos de Implementação

* [(Visualizar repositório)](https://github.com/Alyssonmach/chaves-de-classificacao)
* [(Baixar código-fonte)](https://github.com/Alyssonmach/chaves-de-classificacao/archive/main.zip)

## Objetivos

* Implementar os algoritmos de classificação **SelectionSort** e **MergeSort**;
* Avaliar e comparar a **eficiência computacional** dos algoritmos de ordenação;
* Aplicar os métodos de ordenação em exemplos práticos com listas e vetores;
  

## Introdução

Classificar dados consiste em organizá-los em uma determinada ordem — geralmente crescente ou decrescente — com base em uma ou mais chaves de classificação. Por exemplo, listas de nomes podem ser ordenadas alfabeticamente, contas bancárias pelo número da conta e registros de funcionários por identificadores específicos.

## Classificação por Seleção (SelectionSort)

O algoritmo **SelectionSort** seleciona iterativamente o menor elemento do vetor e o posiciona na primeira posição não ordenada. A cada iteração, o menor elemento restante é identificado e trocado com o elemento correspondente à posição atual. Após a i-ésima iteração, os i menores elementos do vetor encontram-se ordenados nas primeiras posições.

### Exemplo de Uso do SelectionSort

> Execução passo a passo do algoritmo SelectionSort em um vetor.

## Classificação por Intercalação (MergeSort)

O **MergeSort** é um algoritmo de ordenação eficiente baseado na estratégia de divisão e conquista. O vetor é dividido recursivamente em subvetores menores, que são ordenados individualmente e, em seguida, intercalados para formar um vetor final ordenado. Quando o número de elementos é ímpar, um dos subvetores contém um elemento a mais.

### Exemplo de Uso do MergeSort

A implementação apresentada utiliza recursão. O caso base ocorre quando o vetor possui apenas um elemento, que já se encontra ordenado. O passo recursivo divide o vetor em dois subvetores, ordena-os recursivamente e realiza a intercalação.

![Exemplo MergeSort](Imagens/exemplo-mergesort.PNG)

> Execução do algoritmo MergeSort em um vetor.

## Análise de Eficiência

### Eficiência do SelectionSort

O SelectionSort realiza **n − 1** iterações. Em cada uma delas, são feitas comparações para localizar o menor elemento restante. O número total de comparações é dado por:

( \frac{n(n - 1)}{2} )

Na notação assintótica, o algoritmo apresenta complexidade **O(n²)**.

<img src="Imagens/selectionsort-eficiencia.gif" alt="selectionsort" width="600"/>

> Visualização do funcionamento do SelectionSort.

### Eficiência do MergeSort

O MergeSort divide o problema em subproblemas menores, realizando a intercalação em cada nível da recursão com custo **O(n)**. Como o número de níveis cresce de forma logarítmica, o custo total resulta em uma complexidade de **O(n log n)**.

<img src="Imagens/mergesort-eficiencia.gif" alt="mergesort" width="600"/>

> Visualização do funcionamento do MergeSort.
