import random
import pygame
from random import randint
NERO = (255, 255, 255)
BIANCO = (0, 0, 0)
screen =(500,500)
dimQ=40

def disegnaQBianco(dimQ):
    quadretto = pygame.Rect(dimQ,dimQ,dimQ,dimQ)
    pygame.draw.rect(screen, BIANCO, quadretto)

def disegnaQNero(dimQ):
    quadretto = pygame.Rect(dimQ,dimQ,dimQ,dimQ)
    pygame.draw.rect(screen, NERO, quadretto)

def drawgrid():   
    for x in lista:
        if x == 0:
            disegnaQBianco()
        else:
            disegnaQNero()
            
def codifica(dizionario,dixQ):
    for car in dizionario:
        dec=" ".join(f"{ord(i):08b}" for i in car
        dixQ=[car,(dec)]





    
def main():
    screen = pygame.display.set_mode(DIMENSIONI)
    screen.fill(BIANCO)
    stringa = input("inserisci una stringa(max 12 caratteri)")
    dicQ ={}
    dizionario=['a','b','c','d','e','f','g','h','i','m','n','l','o','p','q','r','s','t','u','v','z','0','1','2','3','4','5','6','7','8','9',' ']

            

if __name__ == "__main__":
    main()