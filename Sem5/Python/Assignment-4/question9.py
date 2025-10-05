class InvalidSeatSelected(Exception):
  def __init__(self, *args):
    super().__init__(*args)

class MovieTicketBooking:

  def __init__(self):
    print("*"*10,"Movie Ticket Booking System","*"*10)
    self.booked_seats=[]
    self.total_seats=25

  def book_a_seat(self,seat_number):
    if seat_number > self.total_seats or seat_number <= 0:
      print()
      str1="!"*5,"Seat Out of Range","!"*5
      raise InvalidSeatSelected(str1)
    elif seat_number in self.booked_seats:
      print()
      str2="!"*5+"Seat Already Booked"+"!"*5
      raise InvalidSeatSelected(str2)
    else:
      self.booked_seats.append(seat_number)
      print()
      print("*"*5,"Seat No ",seat_number," Booked ","*"*5)
      print()

  def list_available_seats(self):
    count=1
    print("*"*5,"Available Seats","*"*5)
    for i in range(5):
      for j in range(5):
        count=count+1
        if j in self.booked_seats :
          print("^",count," ",end="")
        else :
          print("*",count," ",end="")
      print("\n")
  
def main():
  booking_system=MovieTicketBooking()

  booking_system.list_available_seats()
  while True:
    print("="*5,"Choice","="*5)
    print("Press \"1\" To List The Available Seats")
    print("Press \"2\" To Book A Seat")
    print("Press \"q\" To Quit Menu.")
    choice=input("Enter Choice : ")

    if choice=="1":
       booking_system.list_available_seats()
    elif choice=="2":
        try:
          seat_number=int(input("Enter a Seat number : "))
          booking_system.book_a_seat(seat_number)
        except InvalidSeatSelected as e:
          print(e)
          print()
        except Exception as e:
          print("!"*5,"Invalid Input","!"*5)
          print()

    elif choice == "q" or choice == "Q":
        exit()
    else:
        print("!"*5,"Invalid Choice","!"*5)

main( )

