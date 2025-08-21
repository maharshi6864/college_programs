print("Enter City name with thir tempurature !!")

cities={}
no = int(input("Enter number of cities : "))

for i in range(no):
  city = input("Enter City name at index {} : ".format(i))
  temp = float(input("Enter temperature for city {} : ".format(city)))
  cities[city]=temp

temps=list(cities.values())
cityName=list(cities.keys())

for i in range(len(temps)):
  if temps[i] < 40.0 and temps[i] > 15.0:
    continue
  cities.pop(cityName[i]) 

print("Cities with temperature more than 15 and less than 40 are :")
print(cities)
