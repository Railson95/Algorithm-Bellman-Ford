# BellmanFord Algorithm -The class with the algorithm is Array.cpp-

OOP in C++ was used for development
--

The Bellman-Ford Algorithm is a shortest path search algorithm in a weighted digraph, whose edges have weight, including negative weight. Dijkstra's Algorithm solves the same problem, in less time, but requires that all edges have positive weights.
--

The program should read the graph data from a text file, whose name will be passed
exclusively from the command line.
• All vertices are represented by positive integers, starting at 0.

• The file format: on the first line, the number of vertices
of the graph; the second line onwards will be the specification of the connections, in the weight source format
destiny. The weight may contain decimal places. Ex.:

3

0 0 1

0 1.5 2

1 5.2 2

2 1 0

• Links must be placed one per line, separating values ​​only by spaces.

• Changing, of any nature, the proposed file format is prohibited.

• If the problem requires an undirected graph, you must ensure that the two directions of the edges
are inserted correctly in the graph representation.

• Whenever possible, use data structures recommended in the book for the improvement of the
algorithm performance.

• The use of STL classes (Standard Template Library) from C++ is allowed for the structures of
auxiliary data (lists, queues, sets, etc.).

• If the problem has any restriction regarding the type of graph accepted, this restriction must be
checked at the end of reading the file and the program will end with a message
error using cerr instead of cout.

• All parameters for the problem must be received via the command line. The program
should not request any information from the user during its execution. Ex.:

./dijkstra grafo.txt 5

will run Dijkstra's algorithm, reading the graph information from the grafo.txt file
(according to the format above) and calculating the paths from node 5 (origin).

• Each algorithm has a standardized output format, presented in Section 2.1, which must be
rigorously respected, aiming at partial automatic correction.

• Programs will be compiled and run on Linux, so they must be tested on that
platform before shipping. If it does not compile on this platform, a score of zero will be assigned.


To run this program use the following logic.
--
g++ -c student_type.cpp

g++ -std=c++11 main.cpp type_student.cpp -o myProgram


This program works only on Linux, work for approval in the subject of Programming Techniques.
--
