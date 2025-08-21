no=int(input("Enter a number to print the pattern : "))

count=1
for i in range(no+1):
  for j in range(i):
    print(count,end=" ")
    count+=1
  print()