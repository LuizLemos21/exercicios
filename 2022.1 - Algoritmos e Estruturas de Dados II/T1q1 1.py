class Fila:
    fila = []
    def _init_(self):
        self.fila=[]
    def inserir(self,n):
        self.fila.append(n)
    def tamanho(self):
        return len(self.fila)
    def vazia(self):
        return self.tamanho()==0
    def excluir(self):
        if not self.vazia():
            del self.fila[0]
    def imprimir(self):
        for i in range(len(self.fila)):
            y = self.fila[i]
            print(y)
    def isEmpty(self):
        if (self.tamanho() ==0):
            print("a lista está vazia")
        else:
            print("a lista não está vazia")
    def primEl(self):
        return self.fila[0]
    def destruirFila(self):
        for i in range(len(self.fila)):
            self.excluir()
        print(i," elementos deletados")   
        
       

fila = Fila()
fila.isEmpty()
fila.inserir(1)
fila.inserir(2)
fila.inserir(3)
fila.inserir(4)
fila.inserir(5)
fila.isEmpty()
print("tamanho: ", fila.tamanho())
fila.excluir()
print("tamanho: ", fila.tamanho())
fila.imprimir()
print("primeiro elemento: ", fila.primEl())
fila.destruirFila()
print("tamanho: ", fila.tamanho())
fila.imprimir()
fila.inserir(75)
print("tamanho: ", fila.tamanho())
fila.imprimir()
