class Vehicle {
  int numberOfWheels;

  Vehicle(int numberOfWheels) {
    this.numberOfWheels = numberOfWheels;
  }
}

class Car extends Vehicle {
  String companyName;

  Car(String companyName, int numberOfWheels) {
    super(numberOfWheels);
    this.companyName = companyName;
  }
}

public class Assign07 {
  public static void main(String[] args) {
    Car car = new Car("Maruti Suzuki", 4);
    System.out.println("Car company : " + car.companyName);
    System.out.println("Number of Wheels : " + car.numberOfWheels);
  }

}
