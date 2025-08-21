print("Enter 10 name and register")

names=[]

for i in range(10):
  names.append(input("Enter name : "))

duplicateflag=True
duplicateIndex=[]
for i in range(10):
  for j in range(i):
    if j not in duplicateIndex:
      if names[i] == names[j]:
        duplicateflag=False
        print("There is are duplicate names for registration at index ",i," and ",j," as : ",names[i])
        duplicateIndex.append(j)

if duplicateflag:
  print("There are no duplicate names in the list !!")


