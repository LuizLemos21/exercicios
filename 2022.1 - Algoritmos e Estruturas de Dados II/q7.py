#Questão 07 - Em uma Arvore Binária, qual o numero maximo de nos que pode ser achado nos niveis 3, 4 e 12?

# Considerando-se que cada nó pode possuir no máximo 2 filhos e que, portanto o numero
#de nos dobra a cada nível, o numero máximo de nós em um nivel é dado pela formula n = 2^n-1


import math

def nosnivel(num):
    n = pow(2,(num-1))
    print("o numero maximo de nos que pode ser encontrado no nivel",num, "é igual a",n)
    
    
nosnivel(3)
nosnivel(4)
nosnivel(12)