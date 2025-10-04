sentence=input("Enter sentence : ")

vowels=set()
for i in range(len(sentence)):
  if sentence[i] == 'a' or sentence[i]=="e" or sentence[i]=="i" or sentence[i]=="o" or sentence[i]=="u" or sentence[i]=="A" or sentence[i]=="E" or sentence[i]=="I" or sentence[i]=="O" or sentence[i]=="U":
    vowels.add(sentence[i])

print(vowels)

frovowels=frozenset(vowels)

try:
    frovowels.remove('a')  # frozenset is immutable, this will fail
except Exception as e:
    print("Error:", e)
    print("Error:", e)