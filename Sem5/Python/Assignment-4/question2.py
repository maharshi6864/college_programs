class TravelAgency:
    def __init__(self):
        self.trip_list=[]
        
    def create_new_trip(self,destination,cost,duration):
        trip_obj=Trip(destination,cost,duration)
        self.trip_list.append(trip_obj)
        print("="*5,"Trip Created Successfully","="*5)

    def list_all_trips(self):
        if len(self.trip_list) == 0:
            print("="*5,"List is Empty","="*5) 
            return
        print("="*5,"Trip List","="*5)
        for index,trip in enumerate(self.trip_list):
            print("="*5,f"No {index+1}.","="*5)
            trip.display_info()

    def display_expensive_trip(self):
        if len(self.trip_list) == 0:
            print("="*5,"List is Empty","="*5) 
            return
        trip_obj=self.trip_list[0]
        for trip in self.trip_list:
            if trip_obj.cost < trip.cost:
                trip_obj=trip
        print("="*5,"Most Expensive Trip","="*5)
        trip_obj.display_info()


class Trip:
    def __init__(self,destination,cost:int,duration):
        self.destination=destination 
        self.cost:int=cost
        self.duration=duration  

    def display_info(self):
        print(f"Trip Destination : {self.destination} \nCost : {self.cost} \nDuration : {self.duration}")

def main():   
    travel_agency=TravelAgency()
    print("="*5,"Trip Management For Travel Agency","="*5)
    while True:
        print("="*5,"Choice","="*5)
        print("Press \"1\" To Create Trip.")
        print("Press \"2\" To List Trip.")
        print("Press \"3\" To Print Expensive Trip.")
        print("Press \"q\" To Quit Menu.")
        choice=input("Enter Choice : ")

        if choice=="1":
            destination=input("Enter Destination : ")
            cost=int(input("Enter Cost Of Trip : "))
            duration=input("Enter Duration : ")
            travel_agency.create_new_trip(destination,cost,duration)
        elif choice=="2":
            travel_agency.list_all_trips()
        elif choice == "3":
            travel_agency.display_expensive_trip()
        elif choice == "q" or choice == "Q":
            exit()
        else:
            print("!"*5,"Invalid Choice","!"*5)
            
main()