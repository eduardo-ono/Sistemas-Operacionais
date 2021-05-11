> ### Sistemas Operacionais > Conteúdo > Gerenciamento de Memória > Memória Virtual

# Algoritmos de Substituição de Páginas

Prof. Eduardo Ono

<br>

## Resumo

| Algoritmo | Características |
| --- | --- |
| Ótimo | Não implementável, mas útil como um padrão de desempenho
| NRU (não usadas recentemente) | Aproximação muito rudimentar do LRU
| FIFO (primeiro a entrar, primeiro a sair) | Pode descartar páginas importantes
| Segunda Chance | Algoritmo FIFO bastante melhorado
| Relógio | Realista
| LRU (usadas menos recentemente) | Excelente algoritmo, porém difícil de ser implementado de maneira exata
| NFU (não frequentemente usadas) | Aproximação bastante rudimentar do LRU
| Envelhecimento (_Aging_) | Algoritmo eficiente que aproxima bem o LRU
| Conjunto de Trabalho | Implementação um tanto cara
| WSClock | Algoritmo bom e eficiente

<br>
