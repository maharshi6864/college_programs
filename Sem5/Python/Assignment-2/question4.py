print("Enter 10 numbers in tuple")

tupp=tuple()

for i in range(6):
  new_element=int(input("Enter number at index {0} : ".format(i)))
  tupp=tupp + (new_element,)

total=0
for i in range(len(tupp)):
  if tupp[i]%3==0 and tupp[i]%5!=0:
    print("Number {} is divisible by 3 but not by 5.".format(tupp[i]))
  total+=tupp[i]

print("Total of all the elements present in tuple is : ",total)