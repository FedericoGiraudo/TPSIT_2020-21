lista = [3,2,-1,6,5]


#python style
for elemento in lista:
    print(elemento)

#C style
for i in range (0, len(lista)):
    print(lista[i])

#python style con enumeratore
for i, elemnto in enumerate(lista):
    print(f"{i}-{elemento}")    

#while
contatore = 0
while(contatore<len(lista)):
    print(lista[contatore])
    contatore++  

#dizionario
# un dizionario e una collezione(non ordinata) di elemanti,
# ciascuno dei quali e costituito da una chiave e un valore
#ogni elemento di un dizionario e coppia chiave:valore
dizionario = {1: "Antonelli", 2: "Becchis", 3: "Bianco", 4: "Bongiovanni"}

#per accedere al valore di un elemento del dizionario si utilizzza la notazione 
#nome_dizzonario[chiave]
#aggiungere elementi al dizionario
dizionario[19]="Orlando"

print(dizionario[1])

canzone = {"numero":1,"titolo":"Francesco","autore":"bello figo"}
print(canzone["titolo"])


#lettura file
file = open("instagram.csv","r")
for riga in file:
    print(riga, end="")

file.close()