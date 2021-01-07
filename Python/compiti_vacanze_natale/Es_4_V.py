#Giraudo Federico

# Il ROT-15 è un semplice cifrario monoalfabetico, in cui ogni lettera del messaggio da
# cifrare viene sostituita con quella posta 15 posizioni più avanti nell'alfabeto.
# Scrivi una semplice funzione in grado di criptare una stringa passata, o decriptarla se
# la stringa è già stata precedentemente codificata.

sc = input("selezionare d : Decode | e : Encode  ")
abc = "abcdefghijklmnopqrstuvwxyz"

if(sc == 'e'):
    txt = input("Inserisci testo da codificare: ")
    secret = "".join([abc[(abc.find(c)+15)%26] for c in txt])
    print(secret)
else:
    txt = input("Inserisci testo da decodificare: ")
    secret = "".join([abc[(abc.find(c)-15)%26] for c in txt])
    print(secret)