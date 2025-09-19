from fila import Queue
ROOT = "root"

class Arvore:
    def __init__(self, node):
        self.raiz = node
        
    def mostra_profundidade(self):
        visitados = set()
        visitados.add(self.raiz)
        falta_visitar = [self.raiz]
        result = ""
        while falta_visitar:
            vertice = falta_visitar.pop()
            result += str(vertice) + " >> "
            for filho in vertice.prox:
                if filho not in visitados:
                    visitados.add(filho)
                    falta_visitar.append(filho)
        print( result.rstrip(' >> '))    

    def mostra_Largura(self, node=ROOT):
            if node == ROOT:
                node = self.raiz
            fila = Queue()
            fila.push(node)
            while len(fila):
                node = fila.pop()
                if node.prox:
                    fila.push(node.prox)
                print(node, end=" ")
         
class Node:
    def __init__(self, val):
        self.conteudo = val
        self.prox = []
        
    def adiciona(self, node):
        self.prox.insert(0,node)
    
    def __str__(self):
        return str(self.conteudo)

if __name__ == "__main__":
    tree = Arvore(Node(7))
    tree.raiz.adiciona(Node(14))
    tree.raiz.adiciona(Node(4))
    tree.raiz.adiciona(Node(6))
    tree.raiz.adiciona(Node(50))


    tree.mostra_Largura()

