import java.util.Scanner;

public class EmployeeManagementApplication {

  public static void main(String[] args) {
    int numberOfEmployees = 0;
    Scanner scan = new Scanner(System.in);
    System.out.println("How many employees to create ? ");
    try {
      scan.nextInt(numberOfEmployees);
    } catch (Exception e) {
      System.out.println("You have entered invalid number of employees.");
    }
    Employee[] employeeArray = new Employee[numberOfEmployees];
    for (int i = 0; i < employeeArray.length; i++) {
      System.out.println("Enter data for employee " + i + " of " + numberOfEmployees);
      System.out.println("Choose type of employee to add.");
      System.out.println("1.Salaried");
      System.out.println("2.Hourly");
      System.out.println("3.Commission : ");
      int choice = 0;
      try {
        scan.nextInt(choice);
      } catch (Exception e) {
        System.out.println("You have entered an invalid choice.");
      }
      boolean validId = true;
      while (validId) {
        
        try {
          scan.nextInt(choice);
        } catch (Exception e) {
          System.out.println("You have entered an invalid choice.");
        }
      }
    }

  }

  void takeUserInput() {

  }
}

abstract class Employee {
  int id;
  String firstName;
  String lastName;

  Employee() {

  }

  Employee(int id, String firstName, String lastName) {
    if (id <= 0) {
      throw new IllegalArgumentException("Id must be greater than 0");
    } else {
      this.id = id;
    }
    if (firstName.length() >= 3) {
      throw new IllegalArgumentException("First Name cannot be empty");
    } else {
      this.firstName = firstName;
    }
    if (lastName.length() >= 3) {
      throw new IllegalArgumentException("Last Name cannot be empty");
    } else {
      this.lastName = lastName;
    }
  }

  void setId(int id) {
    if (id <= 0) {
      throw new IllegalArgumentException("Id must be greater than 0");
    } else {
      this.id = id;
    }
  }

  void setFirstName(String firstName) {
    if (firstName.length() >= 3) {
      throw new IllegalArgumentException("First Name cannot be empty");
    } else {
      this.firstName = firstName;
    }
  }

  void setLastName(String lastName) {
    if (lastName.length() >= 3) {
      throw new IllegalArgumentException("First Name cannot be empty");
    } else {
      this.lastName = lastName;
    }
  }

  int getId() {
    return this.id;
  }

  String getFirstName() {
    return this.firstName;
  }

  String getLastName() {
    return this.lastName;
  }

  @Override
  public String toString() {
    return "Employee Id = " + this.id + " Employee Name : " + this.firstName + " " + this.lastName;
  }

  abstract double calculatePay();
}

class CommissionEmployee extends Employee {

  private double rate = 10.00;

  private double sales = 5000;

  void setRate(double rate) {
    if (rate >= 0.5 && rate <= 20.0) {
      this.rate = rate;
    } else {
      throw new IllegalArgumentException("Rates can only between 0.5% to 20%. ");
    }
  }

  void setSales(double sales) {
    if (sales > 0) {
      this.sales = sales;
    } else {
      throw new IllegalArgumentException("Sales cannot be negative.");
    }
  }

  double getRate() {
    return rate;
  }

  double getSales() {
    return sales;
  }

  CommissionEmployee() {
    super();
  }

  @Override
  double calculatePay() {
    return this.sales * this.rate / 100.00;
  }

}

class HourlyEmployee extends Employee {

  private double numHours;

  private double hourlyRate;

  void setNumHours(double numHours) {
    if (numHours > 0) {
      this.numHours = numHours;
    } else {
      throw new IllegalArgumentException("Number of hours cannot be negative.");
    }
  }

  void setHourlyRate(double hourlyRate) {
    if (hourlyRate > 0) {
      this.hourlyRate = hourlyRate;
    } else {
      throw new IllegalArgumentException("Hourly Rates cannot be negative.");
    }
  }

  double getNumHours() {
    return numHours;
  }

  double hourlyRate() {
    return hourlyRate;
  }

  HourlyEmployee() {
    super();
  }

  @Override
  double calculatePay() {
    return this.numHours * this.hourlyRate;
  }
}

class SalaryEmployee extends Employee {

  private double salary;

  void setSalary(double salary) {
    if (salary > 0) {
      this.salary = salary;
    } else {
      throw new IllegalArgumentException("Salary cannot be negative.");
    }
  }

  double getSalary() {
    return this.salary;
  }

  SalaryEmployee() {
    super();
  }

  @Override
  double calculatePay() {

    return this.salary / 52.00;
  }
}