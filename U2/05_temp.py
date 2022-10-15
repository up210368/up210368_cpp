contador = 0
mayor = 0
menor = 0
i = 1
datos = int (input ("cuantos datos quieres\n"))
for i in range (datos):
    temp = int(input("Ingresa la temperatura\n"))
    contador = contador + temp
    if (temp <= menor or menor == 0):
        menor = temp
    if (temp >= mayor):
        mayor = temp
prom = contador / datos

print ("\n\nEl promedio de las temperaturas es: ", prom, "\nLa temperatura mas baja es: ", menor, "\nLa temperatura mas alta es: ", mayor)