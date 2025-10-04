class Doctor:
    def __init__(self, name, specility, age):
        self.name = name  
        self.specility = specility  
        self.age = age  

    def display_info(self):
        print(f"Doctor name : {self.name} \nSpecility : {self.specility} \nAge : {self.age}")


class Patient:
    def __init__(self, name, age, gender):
        self.name = name  
        self.age = age  
        self.gender = gender  

    def display_info(self):
        print(f"Patient name : {self.name} \nAge : {self.age} \nGender : {self.gender}")


class Appointment:
    def __init__(self, appointment_no:int,date, time, doctor:Doctor , patient:Patient):
        self.appointment_no = appointment_no  
        self.date = date  
        self.time = time  
        self.doctor = doctor 
        self.paitent = patient

    def display_info(self):
        print(f"Appointment NO : {self.appointment_no} \nDate : {self.date} \nTime : {self.time}")
        self.paitent.display_info()
        self.doctor.display_info()

doctor_list = [
    Doctor("Dr. Smith", "Cardiology", 45),
    Doctor("Dr. Johnson", "Neurology", 38),
    Doctor("Dr. Lee", "Orthopedics", 50),
    Doctor("Dr. Patel", "Pediatrics", 40),
    Doctor("Dr. Davis", "Dermatology", 35)
    ]
    
appointement_list=[]

def main():   
    global appointement_list
    global doctor_list
    print("="*5,"Hospital Appointment Booking System","="*5)
    while True:
        print("="*5,"Choice","="*5)
        print("Press \"1\" To Book Appointment.")
        print("Press \"2\" To Print Doctor List.")
        print("Press \"3\" To Book Appointment.")
        print("Press \"q\" To Quit Menu.")
        choice=input("Enter Choice : ")

        if choice=="1":
            book_appointment()
        elif choice=="2":
            print("="*5,f" Doctor List ","="*5)
            for index, doc in enumerate(doctor_list, start=1): 
              print("="*5,f"No {index}.","="*5)
              doc.display_info()

        elif choice == "3":
            print("="*5,"Current Appointments are","="*5)
            for appointments in appointement_list:
                appointments.display_info()
        elif choice == "q" or choice == "Q":
            exit()
        else:
            print("!"*5,"Invalid Choice","!"*5)

def book_appointment():
    global appointement_list
    global doctor_list
    
    patient_name=input("Enter Patient Name : ")
    patient_age=input("Enter Patient Age : ")
    patient_gender=input("Enter Patient Gender : ")
    appointment_date=input("Enter Appointment Date : ")
    appointment_time=input("Enter Appointment Time : ")
    for index, doc in enumerate(doctor_list, start=1):  # start=1 to start counting from 1
      print("="*5,f"No {index}.","="*5)
      doc.display_info()
    doctor_no=int(input("Select Doctor No : "))
    patient_obj=Patient(patient_name,patient_age,patient_gender)
    doc_obj=doctor_list[doctor_no-1]
    appointment_obj=Appointment(len(appointement_list)+1,appointment_date,appointment_time,doc_obj,patient_obj)
    appointement_list.append(appointment_obj)
    print("="*5,"Your Appointment With Doctor ",doc_obj.name," Has Been Successfully Booked.","="*5)

main()