def add_on(a):
  if a > 0:
    return add_on(a-1) + a
  return 0

print("The Sum from 1 to 10 is : ",add_on(10))