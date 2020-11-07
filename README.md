# Chaves de Classificação

### Título do Seminário
- Clasificação de dados com base em chaves de classificação (SelectionSort, MergeSort). Demonstração da eficiência do algoritmo.

### Detalhes Técnicos
- Data de apresentação **17/11/2020**;
- Seminário de Técnicas de Programação [Período 2020.0] - UFCG;

### Membros envolvidos no seminário

1. **Alysson Machado**;
2. **Marcus Vinícios**;
3. **Nathan Ferreira**;
4. **Iago Miguel**;

### Objetivos

- Implementação dos algoritmos de classificação **SelectionSort** e **MergeSort**;
- A determinar a **eficiência dos algoritmos** de classificação;
- Implementar uma aplicação de classificação de contas bancárias pelo número da conta;

### Introdução

Classificar coloca os dados na ordem, em geral ascendente ou descendente, com base em uma ou mais chaves de classificação. Uma lista de nomes poderia ser classificada alfabeticamente, contas bancárias poderiam ser classificadas pelo número de conta, registros de folha de pagamento de funcionários poderiam ser classificados pelo CIC e assim por diante.  

### Classificação por seleção utilizando passagem por referência

A primeira iteração do algoritmo seleciona o menor elemento no array e o troca pelo primeiro elemento. A segunda iteração seleciona o segundo menor elemento (que é o menor dos elementos restantes) e o troca pelo segundo elemento. O algoritmo continua até que a última iteração selecione o segundo maior elemento e permute-o pelo penúltimo índice, deixando o maior elemento no último índice. Depois da i-ésima iteração, os i menores itens do array serão classificados pela ordem crescente nos primeiros i elementos do array.

### Exemplo do algoritmo de seleção

![exemplo-selectionsort](Imagens/exemplo-selectionsort.PNG)
> Exemplo da execução do algoritmo de seleção em um vetor

Observe que, depois da primeira iteração, o menor elemento estará na primeira posição. Depois da segunda iteração, os dois menores elementos estarão na ordem nas duas primeiras posições. Depois da terceira iteração, os três menores elementos estarão na ordem nas três primeiras posições.


