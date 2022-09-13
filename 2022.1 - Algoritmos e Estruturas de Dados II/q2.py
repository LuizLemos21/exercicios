from fila import Queue

ROOT = "root"
class Node:
    def __init__(self, data):
        self.data = data
        self.esquerda = None
        self.direita = None

    def __str__(self):
        return str(self.data)

class ArvoreBinaria:
    def __init__(self, data=None, node=None):
        if node:
            self.raiz = node
        elif data:
            node = Node(data)
            self.raiz = node
        else:
            self.raiz = None

    # Percurso em largura em Árvore Binária: 
    def mostra_Largura(self, node=ROOT):
        if node == ROOT:
            node = self.raiz

        fila = Queue()
        fila.push(node)
        while len(fila):
            node = fila.pop()
            if node.esquerda:
                fila.push(node.esquerda)
            if node.direita:
                fila.push(node.direita)
            print(node, end=" ")

if __name__ == "__main__":
    tree = ArvoreBinaria(7)
    tree.raiz.esquerda = Node(18)
    tree.raiz.direita = Node(14)
    tree.raiz.esquerda.esquerda = Node(44)
    tree.raiz.esquerda.direita = Node(11)
    tree.raiz.direita.esquerda = Node(77)

    tree.mostra_Largura()
