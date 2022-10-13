pizza = input ("Que tipo de pizza quieres. Vegetariana o no vegetariana? (usa minusculas)\n")
if pizza == "vegetariana":
    ingrediente = input ("Que ingrediente quieres que lleve tu pizza\nLos ingredientes son: pimiento y tofu\n")
    match ingrediente:
        case "pimiento":
            print ("Ordenaste una pizza vegetariana y sus ingredientes son: mozzarella, tomate y pimiento.\n")
        case "tofu":
            print ("Ordenaste una pizza vegetariana y sus ingredientes son: mozzarella, tomate y tofu.\n")
        case _:
            print ("No contamos con ese ingrediente. Intente de nuevo")
elif pizza == "no vegetariana":
    ingrediente = input ("Que ingrediente quieres que lleve tu pizza\nLos ingredientes son: peperoni, jamon y salmon\n")
    match ingrediente:
        case "peperoni":
            print ("Ordenaste una pizza no vegetariana y sus ingredientes son: mozzarella, tomate y peperoni.\n")
        case "jamon":
            print ("Ordenaste una pizza vegetariana y sus ingredientes son: mozzarella, tomate y jamon.\n")
        case "salmon":
            print ("Ordenaste una pizza vegetariana y sus ingredientes son: mozzarella, tomate y salmon.\n")
        case _:
            print ("No contamos con ese ingrediente. Intente de nuevo")