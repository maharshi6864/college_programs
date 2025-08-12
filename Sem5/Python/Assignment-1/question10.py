print("Check if the \"secret\" string is matching !!")
string1=str(input("Enter the input string  : "))
# Why did this beacuse as you know "is" is an identity operator so its check the similar object is persent in the memory or not is not the content well its the address in the memory to check the similar content use the "===" operator !

if string1 is string1:
  print("Great you have cracked the secret string !!")
else:
  print("Try again later !!!")