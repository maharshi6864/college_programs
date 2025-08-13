string1="   Welcome to Python !!"

print("Printing the whole string : ",string1)
print("Printing only the first character of the string  : ",string1[0:1])

print("Printing the String from the 3rd character to the start : ",string1[2:-1])
print("Printing string from 4thcharacter to the end of string using slicing operator : ",string1[3:-1])

print("Print whole string 5 times using appropriate operator : ",string1 * 5)
print("Number of \"to\" present in string is : ",string1.count("to"))
print("Length of the string : ",len(string1))

print("Stirng in Lower case : ",string1.lower())

print("Finding the substring \"Python\" : ",string1.index("Python"))

print("Removing Space from the String : ",string1.strip())

print("Checking if the String is ending with \"is\" or not : ",string1.endswith("is"))