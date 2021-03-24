import pygame #installata
import sys#nativa  = preinstallata
from pygame import draw 

DIMENSIONI = (600,600)
NERO = (0,0,0)
BIANCO = (255,255,255)
ROSSO = (255,0,0)

def drawrid():
    dimensione = 50
    for x in range(0, DIMENSIONI[0],dimensione):
        for y in range(0, DIMENSIONI[1],dimensione):
            piastrella = pygame.Rect(x,y,dimensione,dimensione)
            pygame.draw.rect(finestra, BIANCO, piastrella,1)
    ostacolo = pygame.Rect(50,100,dimensione, dimensione)
    pygame.draw.rect(finestra, ROSSO, ostacolo)

def main():
    pygame.init()
    global finestra
    finestra = pygame.display.set_mode(DIMENSIONI)
    finestra.fill(NERO)
    while True:
        drawrid()
        #ciclo for gestione eventi
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()

        pygame.display.update()

if __name__=="__main__":
    main()
    
