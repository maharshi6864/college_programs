class Vehicle:
  def __init__(self,vehicle_number):
    self.vehcile_number=vehicle_number

  def calculate_trip_cost(self,distance):
    print("This method is supposed to be overridden...")

class Car(Vehicle):

  def __init__(self, vehicle_number):
    super().__init__(vehicle_number)

  def calculate_trip_cost(self,distance):
    print("The Cost for this trip using Car will be : ",distance*50)


class Bike(Vehicle):

  def __init__(self, vehicle_number):
    super().__init__(vehicle_number)

  def calculate_trip_cost(self,distance):
    print("The Cost for this trip using Bike will be : ",distance*10)

class Truck(Vehicle):

  def __init__(self, vehicle_number):
    super().__init__(vehicle_number)

  def calculate_trip_cost(self,distance):
    print("The Cost for this trip using Truck will be : ",distance*100)

def main():
  car=Car(7871)
  bike=Bike(1212)
  truck=Truck(9091)

  car.calculate_trip_cost(10)
  truck.calculate_trip_cost(10)
  bike.calculate_trip_cost(10)
    

main()