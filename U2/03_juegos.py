
edad = int (input("Cual es tu edad?\n"))

if edad >0 and edad < 4: 
    print ("Entrada gratis\n")
elif edad >=4 and edad <= 18:
    print ("pagas $5\n")
elif edad > 18 and edad < 90:
    print ("pagas $10\n")
else:
    print ("Valor invalido\n")