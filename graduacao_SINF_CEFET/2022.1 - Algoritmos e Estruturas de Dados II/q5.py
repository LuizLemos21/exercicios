# Questão 5 - Ache a raiz de cada uma das seguintes arvores binarias

# a) Arvore com percurso pós-ordem: FCBDG
# em um percurso pós ordem, a raiz é o ultimo nó a ser visitado no percurso, logo:
def PrintaRaiz_posOrdem(vet):
    print("Arvore (pos ordem):",vet)
    print("a raiz é: ", vet[len(vet)-1])

# b) Arvore com percurso pré-ordem(profundidade): IBCDFEN
# # em um percurso pré ordem, a raiz é o primeiro nó a ser visitado no percurso, logo:
def PrintaRaiz_preOrdem(vet):
    print("Arvore (pre ordem):",vet)
    print("a raiz é:",vet[0])

# c) Arvore com percurso em ordem simétrica (assuma que é uma arvore binaria cheia): CBIDFGE
# Assumindo que a arvore é cheia, temos uma igual quantidade de nós a esquerda e a direita  
# da raiz, logo:
def PrintaRaiz_ordemSimetrica(vet):
    print("Arvore Cheia (Ordem simétrica):",vet)
    print("a raiz é: ",vet[int((len(vet)-1)/2)])


#testando...
a1 = ['F','C','B','D','G']
a2 = ['I','B','C','D','F','E','N']
a3 = ['C','B','I','D','F','G','E']

PrintaRaiz_posOrdem(a1)
PrintaRaiz_preOrdem(a2)
PrintaRaiz_ordemSimetrica(a3)