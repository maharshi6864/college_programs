print("Enter your choice to pick the subject !! ")
print("Enter \"1\" to pick Joomla")
print("Enter \"2\" to pick Ruby onRails")
print("Enter \"3\" to pick Drupal")
print("Enter \"4\" to pick Android")
print("Enter \"5\" to pick iOS")

choice = str(input("Enter your choice : "))

if choice == "1" :
  print("You have Picked Joomla as your subject !!")
elif choice == "2":
  print("You have Picked RubyOn Rails as your subject !!")
elif choice == "3":
  print("You have Picked Drupal as your subject !!")
elif choice == "4":
  print("You have Picked Andriod as your subject !!")
elif choice == "5":
  print("You have Picked iOS as your subject !!")
else:
  print("You have entered the wrong choice!!")
