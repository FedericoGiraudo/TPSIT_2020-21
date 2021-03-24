#data una qualunque stringa controllare se le parentesi sono giuste o sbagliate

def push_ (stack, element):
    stack.append(element)

#wrapper per pop
def pop_ (stack):
    return stack.pop()

def main():
    pila=[]
    stringa = input("Inserisci la stringa: ")
    ris = True

    parentesi={")":"(", "]":"[", "}":"{"}

    for carattere in stringa:
        if carattere=="(" or carattere=="[" or carattere=="{":
            push_(pila, carattere)
        if carattere==")" or carattere=="]" or carattere=="}":
            if pop_(pila)!=parentesi[carattere] :
                ris = False
                
    if len(pila)>0:
        ris = False

    if ris == True:
        print("espressione corretta")
    else:
        print("espressione errata")


if __name__ == "__main__":
    main()