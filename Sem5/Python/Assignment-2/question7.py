print("Two list into dictonary !!")

no=int(input("Enter number of elements : "))

keyss=[]
valuess=[]
dicc={}

for i in range(no):
  keyss.append(input("Enter Key at index {} : ".format(i)))
  valuess.append(input("Enter Value for key {} : ".format(i)))
  
print("Inserting values in dictonary !!")
for i in range(no):
  dicc[keyss[i]]=valuess[i]

print(dicc)