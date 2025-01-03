import java.util.Scanner;

class Employee {
  int id;
  String name;

  Employee(int id, String name) {
    this.id = id;
    this.name = name;
  }

  void display() {
    System.out.println("Employee id : " + this.id);
    System.out.println("Employee name : " + this.name);
  }
}

class ArrayOfObjectsHomeWork3Jan {
  public static void main(String[] args) {
    int numberOfEmployee;
    Scanner sc = new Scanner(System.in);
    // Getting number of Employees from user.
    System.out.println("Enter number of Employee : ");
    numberOfEmployee = sc.nextInt();
    // Creating the array for number employees user entered.
    Employee[] employees = new Employee[numberOfEmployee];
    // Getting Employee data from the user.
    for (int i = 0; i < numberOfEmployee; i++) {
      System.out.println("Enter Employee " + (i + 1) + " id : ");
      int id = sc.nextInt();
      sc.nextLine();
      System.out.println("Enter Employee " + (i + 1) + " name : ");
      String name = sc.nextLine();
      Employee employee = new Employee(id, name);
      employees[i] = employee;
    }

    // Displaying the Employees Details using foreach loop
    for (Employee employee : employees) {
      employee.display();
    }
  }
}
