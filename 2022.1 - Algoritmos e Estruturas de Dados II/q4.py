#Questao 4 - Escreva uma função que cria uma imagem espelho de uma arvore binaria, isto é, 
# todos os filhos a esquerda se tornam filhos a direita e vice-versa

class Node:
	def __init__(self, data, esquerda=None, right=None):
		self.data = data
		self.esquerda = esquerda
		self.direita = right


# funcao para percorre a arvore em pre ordem
def preordem(raiz):

	if raiz is None:
		return

	print(raiz.data, end=' ')
	preordem(raiz.esquerda)
	preordem(raiz.direita)


# funcao para trocar a subarvore esquerda pela subarvore direita
def troca(raiz):

	if raiz is None:
		return

	temp = raiz.esquerda
	raiz.esquerda = raiz.direita
	raiz.direita = temp

# funcao para inverter uma arvore binaria usando pre ordem transversal
def inverteArvore(raiz):

	# caso base: se a arvore esta vazia
	if raiz is None:
		return

	# troca a subarvore esquerda pela subarvore direita
	troca(raiz)

	# inverte a subarvore esquerda
	inverteArvore(raiz.esquerda)

	# inverte a subarvore direita
	inverteArvore(raiz.direita)


if __name__ == '__main__':

	''' Construindo a seguinte arvore
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
	
# invertendo a Arvore

	inverteArvore(raiz)
	preordem(raiz)