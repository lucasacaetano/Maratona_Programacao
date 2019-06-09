# URI
![alt text][logo]

Pasta destinada ao repositódio de problemas [URI Online Judge](https://www.urionlinejudge.com.br)

[logo]: https://urionlinejudge.r.worldssl.net/judge/img/5.0/logo.130615.png?1452205133

Nas tabelas abaixo existem alguns problemas destacados, por categoria, indicando o pensamento utilizado para rezolve-los.

## Iniciante

Problemas básicos para quem está iniciando na progrmação...

Problema|Solução|Recurso
---|---|---
[1061]|[Tempo de um Evento][1061S]|Biblioteca de tempo [`<ctime>`][<ctime>]
[1179]|[Preenchimento de Vetor IV][1179S]|Estrutura de dados (Lista) [`<list>`][containers]
[1848]|[Corvo Contador][1848S]|[`<bitset>`][<bitset>]

[1061]: https://www.urionlinejudge.com.br/judge/pt/problems/view/1061
[1061S]: https://github.com/lucasacaetano/Maratona_Programacao/blob/master/URI/Iniciante/1061_Tempo_de_um_Evento.cpp
[1179]: https://www.urionlinejudge.com.br/judge/pt/problems/view/1179
[1179S]: https://github.com/lucasacaetano/Maratona_Programacao/blob/master/URI/Iniciante/1179_Preenchimento_de_Vetor_IV.cpp
[1848]: https://www.urionlinejudge.com.br/judge/pt/problems/view/1848
[1848S]: https://github.com/lucasacaetano/Maratona_Programacao/blob/master/URI/Iniciante/1848_Corvo_Contador.cpp

## Estruturas e Bibliotecas

Fila, Pilhas, Ordenação, Mapas...

Problema|Solução|Recurso
---|---|---
[1022]|[TDA Racional][1022S]|Classe, Sobrecarga de operadores e Maior divisor comum [`Algoritmo de Euclides`][gcd]
[1023]|[Estiagem][1023S]|[`<map>`][containers]
[1025]|[Onde está o Mármore?][1025S]|Ordenação e Busca Binária [`<algoritm> {sort(), binary_search(), equal_range()}`][<algorithm>]

[1022]: https://www.urionlinejudge.com.br/judge/pt/problems/view/1022
[1022S]: https://github.com/lucasacaetano/Maratona_Programacao/blob/master/URI/Estruturas/1022_TDA_Racional.cpp
[1023]: https://www.urionlinejudge.com.br/judge/pt/problems/view/1023
[1023S]: https://github.com/lucasacaetano/Maratona_Programacao/blob/master/URI/Estruturas/1023_Estiagem.cpp
[1025]: https://www.urionlinejudge.com.br/judge/pt/problems/view/1025
[1025S]: https://github.com/lucasacaetano/Maratona_Programacao/blob/master/URI/Estruturas/1025_Onde_Esta_o_Marmore.cpp

## Grafos

Flood Fill, MST, SSSP, DAG, Fluxo Máximo, Árvores...

Problema|Solução|Recurso
---|---|---
[1610]|[Recuperação da Árvore][1191S]|`Árvoes Binárias`[`<map>`][containers]
[1191]|[Dudu Faz Servico][1610S]|`DFS` [Ciclos em grafo ][cycle_in_graph]

[1191]: https://www.urionlinejudge.com.br/judge/pt/problems/view/1191
[1610]: https://www.urionlinejudge.com.br/judge/pt/problems/view/1610
[1191S]: https://github.com/lucasacaetano/Maratona_Programacao/blob/master/URI/Grafos/1191_Recuperacao_da_Arvore.cpp
[1610S]: https://github.com/lucasacaetano/Maratona_Programacao/blob/master/URI/Grafos/1610_Dudu_Faz_Servico.cpp


[<algorithm>]: http://www.cplusplus.com/reference/algorithm/
[<ctime>]: http://www.cplusplus.com/reference/ctime/
[<bitset>]: http://www.cplusplus.com/reference/bitset/bitset/
[containers]: http://www.cplusplus.com/reference/stl/
[gcd]: https://en.wikipedia.org/wiki/Euclidean_algorithm#Procedure
[cycle_in_graph]: https://www.geeksforgeeks.org/detect-cycle-undirected-graph/