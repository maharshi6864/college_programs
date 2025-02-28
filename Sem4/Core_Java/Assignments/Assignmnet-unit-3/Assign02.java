import java.util.Scanner;

class Employee {
  String name;

  String designation;
}

class HR extends Employee {
  float salary;

  void display() {
    System.out.println("Employee Name : " + this.name);
    System.out.println("Employee Designation : " + this.designation);
    System.out.println("Employee Salary : " + this.salary);
  }
}

public class Assign02 {
  public static void main(String[] args) {
    HR hr = new HR();
    System.out.println("Enter Employee Name : ");
    Scanner scanner = new Scanner(System.in);
    hr.name = scanner.nextLine();
    System.out.println("Enter Employee Designation : ");
    hr.designation = scanner.nextLine();
    System.out.println("Enter Employee Salary : ");
    hr.salary = scanner.nextInt();

    hr.display();
  }

}
