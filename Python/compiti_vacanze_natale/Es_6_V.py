#Giraudo Federico

# Il file annual.csv (allegato) contiene la anomalia della temperatura globale del pianeta
# Terra dal 1880 ad oggi, proveniente da varie fonti (colonna “Source”). Scrivere un
# programma che generi un dizionario che abbia come chiave l’anno (“Year”) e valore
# la media aritmetica delle anomalie registrate dalle varie fonti durante quell’anno.
# Inoltre scrivere una funzione che dati in input due anni diversi (anno_1 e anno_2)
# trovi la anomalia massima e minima nel periodo compreso tra anno_1 e anno_2.


def anomalia(diz,year1,year2): 
    
    max = diz[str(year1)]
    min = diz[str(year1)]

    for year in diz: 

        if(int(year) >= int(year1) and int(year)<=int(year2)):

            if(max<diz[year]):
                max = diz[year]

            elif(min>diz[year]):
                min = diz[year] 

    print("\nMassimo: "+str(max) +"\nMinimo: "+ str(min)) 



if __name__ == "__main__":

    file = open("annual.csv",'r')
    count = 0
    temp = 0

    year1 = 0
    year2 = 0

    year = {}

    for line in file:

        try:
            if (count%2 == 0):
                temp = float(line.split(',')[2])
            else:
                year[line.split(',')[1]] = (float(temp) + float(line.split(',')[2]) )/2
            count = (count+1)%2
        except:
            pass 
              
    anomalia(year,year1=input("Inserisci il primo anno: "),year2=input("Inserisci il secondo anno: ")) 

    file.close()