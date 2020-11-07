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
- A determinar a **eficiência dos algoritmos** de pesquisa e de classificação.

### Introdução

Classificar coloca os dados na ordem, em geral ascendente ou descendente, com base em uma ou mais chaves de classificação. Uma lista de nomes poderia ser classificada alfabeticamente, contas bancárias poderiam ser classificadas pelo número de conta, registros de folha de pagamento de funcionários poderiam ser classificados pelo CIC e assim por diante.  

### Classificação por seleção utilizando passagem por referência

A primeira iteração do algoritmo seleciona o menor elemento no array e o troca pelo primeiro elemento. A segunda iteração seleciona o segundo menor elemento (que é o menor dos elementos restantes) e o troca pelo segundo elemento. O algoritmo continua até que a última iteração selecione o segundo maior elemento e permute-o pelo penúltimo índice, deixando o maior elemento no último índice. Depois da i-ésima iteração, os i menores itens do array serão classificados pela ordem crescente nos primeiros i elementos do array.

### Exemplo do algoritmo de seleção

![exemplo-selectionsort](Imagens/exemplo-selectionsort.PNG)
> Exemplo da execução do algoritmo de seleção em um vetor

Observe que, depois da primeira iteração, o menor elemento estará na primeira posição. Depois da segunda iteração, os dois menores elementos estarão na ordem nas duas primeiras posições. Depois da terceira iteração, os três menores elementos estarão na ordem nas três primeiras posições.

### Observações (SelectionSort)

- Vários recursos da função selectionSort devem ser observados. O cabeçalho de função (linha 36) declara array como int * const array, em vez de int array[], para indicar que a função selectionSort recebe um array unidimensional como um argumento. Tanto o ponteiro do parâmetro array como o parâmetro size são declarados como const para impor o princípio do menor privilégio. Embora o parâmetro size receba uma cópia de um valor em main e modificar a cópia não possa alterar o valor em main, selectionSort não precisa alterar size para realizar sua tarefa — o tamanho de array permanece fixo durante a execução de selectionSort. Portanto, size é declarado como const para assegurar que ele não seja modificado. Se o tamanho do array fosse modificado durante o processo de classificação, o algoritmo de classificação não teria executado corretamente.

- Observe que a função selectionSort recebe o tamanho do array como um parâmetro, porque a função deve ter essas informações para classificar o array. Quando um array baseado em ponteiro é passado para uma função, somente o endereço de memória do primeiro elemento do array é recebido pela função; o tamanho do array deve ser passado separadamente para a função.

- Definindo a função selectionSort para receber o tamanho de array como um parâmetro, permitimos que a função seja utilizada por qualquer programa que classifique arrays int unidimensionais de tamanho arbitrário. 

