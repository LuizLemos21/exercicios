#Questão 08 - Qual é o menor numero de niveis que uma arvore binária com 42 nós pode apresentar?

# A altura mínima de uma Arvore Binária ocorre quando ela é uma árvore simétrica, ou seja, os elementos 
# estão distribuiídos de forma igual na estrutura, com cada nível possuindo a quantidade máxima de nós possivel

# Ex:
#           A
#          / \
#         B   C
#        / \ / \
#       D  E F  G

# A Altura nesse caso é dada por 1 + log2 n (com n sendo o numero de nós)
import math

def altmin(num):
    alt = 1 + int(math.log(num,2))
    return alt
 
nos=(42)
print("a altura minima de uma arvore com ",nos," nós é de",altmin(nos)," niveis")
