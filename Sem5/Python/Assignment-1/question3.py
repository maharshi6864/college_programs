print("Get a fruit name !")

choice = int(input("Enter a number from 1 to 5 : "))

fruit = {
  1:"Apple",
  2:"Mango",
  3:"Pinapple",
  4:"Orange",
  5:"Nosambi"
}

if choice <= 5 and choice >= 1:
  print("Your Fruit is : ",fruit[choice])
else:
  print("You have entered a wrong number !")