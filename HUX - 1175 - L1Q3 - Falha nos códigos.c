x = input()[6]
pokemon = {
    "b":"Bulbassauro",
    "c":"Charmander",
    "s":"Squirtle"}
if x not in "bcsBCS":
    print("Codigo Invalido")
else:
    print(pokemon[x])
