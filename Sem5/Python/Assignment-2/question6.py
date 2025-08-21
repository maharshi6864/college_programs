print("Enter 10 number !!")

numbers=[]
for i in range(10):
  numbers.append(int(input("Enter number at index {} : ".format(i))))


for i in range(len(numbers)):
  divCount=0
  for j in range(1,numbers[i]+1):
    if numbers[i] % j == 0 :
      divCount+=1
  if divCount == 2:
    continue
  if numbers[i] % 10 == 0:
    choice=input("Found a number divisible by 10 Enter \"0\" to break the loop else enter \"1\" to continue ")
    if choice == "0":
      break
    else:
      print("Current number is : {}".format(numbers[i])) 