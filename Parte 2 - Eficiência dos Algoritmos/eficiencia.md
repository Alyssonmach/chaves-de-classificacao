# Eficiência de classificação por seleção (SelectionSort)

O algoritmo de classificação por seleção itera n – 1 vezes, colocando a cada passagem o menor elemento restante em sua posição classificada. Localizar o menor elemento restante requer n – 1 comparações durante a primeira iteração, n – 2 durante a segunda iteração e, então, n – 3, … , 3, 2, 1. Isso resulta em um total de n(n – 1) / 2 ou (n² – n)/2 comparações. Na notação O, os menores termos são eliminados e as constantes são ignoradas, deixando um O final de O(n²).

<img src="../Imagens/selectionsort-eficiencia.gif" alt="selectionsort" width="600"/>

> Visualizando o funcionamento do SelectionSort

#  Eficiência de classificação por intercalação (MergeSort)

A classificação por intercalação é um algoritmo muito mais eficiente que a classificação por seleção. Considere a primeira chamada (não recursiva) à função sortSubVector. Isso resulta em duas chamadas recursivas à função sortSubVector em que cada subvetor apresenta aproximadamente a metade do tamanho do vetor original e uma única chamada à função merge. Essa chamada à função merge exige, no pior dos casos, n – 1 comparações para preencher o vetor original, que é O(n). (Lembre-se de que cada elemento no vetor é escolhido comparando um elemento a partir de cada um dos subvetores.) As duas chamadas à função sortSubVector resultam em mais quatro chamadas recursivas à função sortSubVector, cada uma com um subvetor de aproximadamente um quarto do tamanho do vetor original, junto com duas chamadas à função merge. Cada uma dessas duas chamadas à função merge exige, no pior dos casos, n/2 – 1 comparações, para um número total de comparações de O(n). Esse processo continua, e cada chamada a sortSubVector gera duas chamadas adicionais a sortSubVector e uma chamada a merge, até que o algoritmo tenha dividido o vetor em subvetores de um elemento. Em cada nível, O(n) comparações são exigidas para intercalar os subvetores. Cada nível divide o tamanho dos vetores pela metade, portanto dobrar o tamanho do vetor exige mais um nível. Quadruplicar o tamanho do vetor exige mais dois níveis. Esse padrão é logarítmico e resulta em log2 n níveis. Isso resulta em uma eficiência total de O(n log n). 

<img src="../Imagens/mergesort-eficiencia.gif" alt="mergesort" width="600"/>

> Visualizando o funcionamento do MergeSort