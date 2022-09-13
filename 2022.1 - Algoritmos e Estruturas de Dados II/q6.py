#Questão 06 - Qual a altura máxima e mínima de uma árvore binária com 28 nós?

# A altura máxima de uma Arvore Binária ocorre quando ela é uma árvore em zig zag,
#ou seja, cada nó possui apenas um filho e apenas um pai.
# Ex:  A
#     /
#    B
#    \
#     C
#    /
#    .
#    .
#    .
#    \
#     N

# a altura nesse caso é dada pelo próprio numeros de nós

def altmax(num):
    return num
    
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
 
nos=(28)
print("a altura minima de uma arvore com ",nos," nós é de",altmin(nos)," niveis")
print("a altura máxima de uma arvore com ",nos," nós é de",altmax(nos)," niveis")