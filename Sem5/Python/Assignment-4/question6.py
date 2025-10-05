class Customer:
  def __init__(self,name,address,phone_number):
    self.name=name
    self.address=address
    self.phone_number=phone_number
    self.discount=10

  def display_info(self):
    print("="*5,"REGULAR CUSTOMER","="*5)
    print(f"Customer Name : {self.name} \nAddress : {self.address} \nPhone Number : {self.phone_number}")

class PremiumCustomer(Customer):
  def __init__(self,name,address,phone_number):
    super().__init__(name,address,phone_number)
    self.loyaltyPoints=0
    self.discount=20

  def display_info(self):
    print("*"*5,"PREMIUM CUSTOMER","*"*5)
    print(f"Customer Name : {self.name} \nAddress : {self.address} \nPhone Number : {self.phone_number} \nLoyalty Points : {self.loyaltyPoints}")

def main():
    while True:
        print("="*5,"Choice","="*5)
        print("Press \"1\" To Add Regular Customer")
        print("Press \"2\" To Add Premimum Customer")
        print("Press \"q\" To Quit Menu.")
        choice=input("Enter Choice : ")

        if choice=="1":
            print("="*5,"REGULAR CUSTOMER","="*5)  
            name=input("Enter Customer Name : ")
            address=input("Enter Customer Address : ")
            phone_number=input("Enter Customer PhoneNumber : ")
            customer_obj=Customer(name,address,phone_number)
            customer_obj.display_info()
        elif choice=="2":
            print("*"*5,"PREMIUM CUSTOMER","*"*5)
            name=input("Enter Customer Name : ")
            address=input("Enter Customer Address : ")
            phone_number=input("Enter Customer PhoneNumber : ")
            pre_customer=PremiumCustomer(name,address,phone_number)
            pre_customer.display_info()
        elif choice == "q" or choice == "Q":
            exit()
        else:
            print("!"*5,"Invalid Choice","!"*5)


main()