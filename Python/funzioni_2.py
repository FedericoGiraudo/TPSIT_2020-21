#parametri di default in input alle funzioni

def fun(lista_numeri=[10,12],stampa=False):
    lista_quadrati = [x*x for x in lista_numeri]
    if stampa:
        print(lista_quadrati)
    return lista_quadrati

fun (stampa=True)