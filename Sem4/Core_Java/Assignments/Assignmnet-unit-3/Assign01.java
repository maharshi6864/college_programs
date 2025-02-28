import java.util.Scanner;

class MotorVehicle {
  String modelName;

  int modelNumber;

  float modelPrice;

  void display() {
    System.out.println("Model Name : " + this.modelName);
    System.out.println("Model Number : " + this.modelNumber);
    System.out.println("Model Price : " + this.modelPrice);
  }
}

class Car extends MotorVehicle {
  float discountRates;

  Car() {
    super();
  }

  Car(String modelName, int modelNumber, float modelPrice, float discountRates) {
    this.modelName = modelName;
    this.modelNumber = modelNumber;
    this.modelPrice = modelPrice;
    this.discountRates = discountRates;
  }

  void display() {
    System.out.println();
    System.out.println("Model Name : " + this.modelName);
    System.out.println("Model Number : " + this.modelNumber);
    System.out.println("Model Price : " + this.modelPrice);
    System.out.println("Discount rate : " + this.discountRates);
    System.out.println();
  }
}

public class Assign01 {
  public static void main(String[] args) {

    Car car = new Car();
    System.out.println("Enter Model Details : ");
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter Model name : ");
    car.modelName = scanner.nextLine();
    System.out.println("Enter Model number : ");
    car.modelNumber = scanner.nextInt();
    System.out.println("Enter Model price : ");
    car.modelPrice = scanner.nextFloat();
    System.out.println("Enter Discount rate : ");
    car.discountRates = scanner.nextFloat();

    car.display();
  }
}