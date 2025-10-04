def out_fun(a,b):
  def in_fun(a,b):
    return a+b
  return 5+in_fun(a,b)


print("And the Asnwer is : ",out_fun(12,23))