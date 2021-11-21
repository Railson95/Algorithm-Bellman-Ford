# AlgoritmoBellmanFord

Foi Usado POO em C++ para o desenvolvimento
--

O Algoritmo de Bellman-Ford é um algoritmo de busca de caminho mínimo em um digrafo ponderado, ou seja, cujas arestas têm peso, inclusive negativo. O Algoritmo de Dijkstra resolve o mesmo problema, num tempo menor, porém exige que todas as arestas tenham pesos positivos.
--

O programa deverá ler os dados do grafo a partir de um arquivo texto, cujo nome será passado
exclusivamente pela linha de comandos.
• Todos os vértices são representados por números inteiros positivos, iniciando em 0.
• O formato do arquivo: na primeira linha, o número de vértices
do grafo; a segunda linha em diante será a especificação das ligações, no formato origem peso
destino. O peso poderá conter casas decimais. Ex.:

3

0 0 1

0 1.5 2

1 5.2 2

2 1 0

• As ligações devem ser colocadas uma por linha, separando os valores apenas por espaços.

• É vedada a alteração, de qualquer natureza, do formato de arquivo proposto.

• Se o problema exigir um grafo não direcionado, deve-se garantir que os dois sentidos das arestas
sejam inseridos corretamente na representação do grafo.

• Sempre que possível, utilizar estruturas de dados recomendadas no livro para a melhoria do
desempenho do algoritmo.

• É permitido o uso das classes STL (Standard Template Library) de C++ para as estruturas de
dados auxiliares (listas, filas, conjuntos, etc.).

• Se o problema tiver qualquer restrição em relação ao tipo de grafo aceito, esta restrição deverá
ser verificada ao término da leitura do arquivo e o programa finalizará com uma mensagem de
erro usando cerr em lugar do cout.

• Todos os parâmetros para o problema devem ser recebidos pela linha de comando. O programa
não deverá solicitar nenhuma informação do usuário durante sua execução. Ex.:

./dijkstra grafo.txt 5

executará o algoritmo de Dijkstra, lendo a informação do grafo a partir do arquivo grafo.txt
(conforme formato acima) e calculando os caminhos a partir do nó 5 (origem).

• Cada algoritmo tem um formato de saída padronizado, apresentado na Seção 2.1, que deve ser
rigorosamente respeitada, visando à correção automática parcial.

• Os programas serão compilados e executados em Linux, portanto, devem ser testados nessa
plataforma antes do envio. Caso não compile nesta plataforma, será atribuída a nota zero.


Para execução deste programa usar a seguinte lógica.
--
g++ -c tipo_aluno.cpp

g++ -std=c++11 main.cpp tipo_aluno.cpp -o meuPrograma


Esse programa funciona apenas em Linux, trabalho para aprovação na disciplina de Técnicas de Programação.
--
