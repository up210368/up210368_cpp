# Preguntar cantidad de productos y su precio hasta que la cantidad de productos sea 0.
subtotal = 0
total = 0
cantidad = int (input ("Cuantos productos compraste?\n"))
while cantidad != 0:
    suma = 0
    for i  in range (cantidad):
        print ("Precio del producto ", i + 1)
        precio = int (input ())
        suma = suma + precio
    subtotal = suma
    print ("El subtotal de esos productos es $",subtotal)
    total = total + subtotal
    cantidad = int (input ("Cuantos productos compraste?\n"))
print ("El total de lo que compraste es $",total)