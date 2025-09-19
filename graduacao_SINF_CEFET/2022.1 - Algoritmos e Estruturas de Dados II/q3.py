#Questao 3 - Escreva uma função determine se uma arvore binária é cheia ou nao

import queue


class Node:
	def __init__(self, data, esquerda=None, right=None):
		self.data = data
		self.esquerda = esquerda
		self.direita = right


#Função para calcular a altura de uma árvore binária

def altura(raiz):
    if raiz is None:
        return 0
    
    else:
        esqe = altura(raiz.esquerda)
        dire = altura(raiz.direita)
        if(esqe > dire):
            return esqe + 1
        else:
            return dire + 1
    


# Função que conta e retorna a quantidade de nós em uma árvore binária

def quantidade_nos(raiz):
    if raiz is None:
        return 0
    else:
        return 1 + quantidade_nos(raiz.esquerda) + quantidade_nos(raiz.direita)

#Funcao para definir se uma arvore é cheia ou nao: (Uma árvore é cheia se possui a maior quantidade possível de nós em todos os seus níveis)
# Logo: N = 2^n-1 + 2^n-2 + 2^n-3 + ..... 2^n-x, em que: N = numero de nós, e n = numero de niveis

def isCheia(raiz):
    n = altura(raiz)
    cheia = 0
    if raiz is None:
        print("a arvore é vazia")
    else:
        while(n>0):
            cheia+= (pow(2,(n-1)))
            n= n-1
        if cheia == quantidade_nos(raiz):
            print("a arvore é cheia")
        else:
            print("a arvore não é cheia")

''' Construindo a seguinte arvore cheia
			  1
			/   \
		   /     \
		  2       3
		 / \     / \
		4   5   6   7
'''

raiz = Node(1)
raiz.esquerda = Node(2)
raiz.direita = Node(3)
raiz.esquerda.esquerda = Node(4)
raiz.esquerda.direita = Node(5)
raiz.direita.esquerda = Node(6)
raiz.direita.direita = Node(7)

isCheia(raiz)


''' Construindo a seguinte arvore não cheia
			  1
			/   \
		   /     \
		  2       3
		 / \     / \
		4   5   6   7
	   /
	  8
'''

raiz2 = Node(1)
raiz2.esquerda = Node(2)
raiz2.direita = Node(3)
raiz2.esquerda.esquerda = Node(4)
raiz2.esquerda.direita = Node(5)
raiz2.direita.esquerda = Node(6)
raiz2.direita.direita = Node(7)
raiz2.esquerda.esquerda.esquerda = Node(8)

isCheia(raiz2)