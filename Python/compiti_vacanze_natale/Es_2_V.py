#Giraudo Federico
# Un indirizzo MAC (Media Access Control address) è un indirizzo univoco associato
# dal produttore, a una NIC, composto da 6 coppie di cifre esadecimali separate da due punti.
# Un esempio di MAC è 02:FF:A5:F2:55:12.
# Scrivi una funzione genera_mac che generi degli indirizzi MAC pseudo casuali.

import random

def genera_mac():
    char_set = "ABCDEF0123456789"
    mac_addr = ""
    due_punti = 0

    for _ in range(6):
        for _ in range(2):
            mac_addr += random.choice(char_set)
        if due_punti < 5:
          mac_addr += ":"
          due_punti += 1

    print(mac_addr)
    return mac_addr

def main():
    genera_mac()
    
if __name__ == "__main__":
   main()