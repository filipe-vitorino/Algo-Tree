 # TP2 - Testes
 
 A biblioteca utilizada foi Algo-Tree, ela é uma coleção de implementação de estruturas de dados e de algoritmos para C++. Para mais informações sobre a biblioteca leia o readme original <https://github.com/filipe-vitorino/Algo-Tree/blob/main/README.md>.

 Para a criação dos testes foi utilizado o framework Doctest <https://github.com/onqtam/doctest>, uma ferramenta para o auxílio de testes em C++.

 Os testes foram realizados primeiro em 3 algoritmos matemáticos, Fatorial, Fibonacci e checagem de primalidade de um número. Nestes testes foram verificadas se as saídas foram 
 corretamente calculadas.
	
  Mais 3 testes foram criados, desta vez os testes foram realizados em cima de 3 algoritmos de ordenação: QuickSort, MergeSort, HeapSort. Estes algoritmos foram escolhidos por 
realizarem a ordenação em tempo O(n log n). Os testes foram para verificar se os algoritmos cumprem seu papel de ordenação. Curiosamente o algoritmo de HeapSort só funciona se o 
valor de -1 for adicionado ao início do vetor.
	
 Os últimos 2 testes foram realizados em 2 estruturas de dados: Pilha e Heap. Os testes foram realizados para verificar o correto comportamento das estruturas. Foram testadas as 
funções de adicionar e remover elementos, verificar o primeiro elemento e verificar se a estrutura está vazia.   

 Para rodar os teste basta entrar no diretório, compilar o código e depois executá-lo.
```
 g++ -o main_test testCase.cpp
 ./main_test
```
