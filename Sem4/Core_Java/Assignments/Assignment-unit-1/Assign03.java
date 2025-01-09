import java.util.Scanner;

public class Assign03 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter hourly rate: ");
    double hourlyRate = sc.nextDouble();
    System.out.print("Enter total number of hours worked: ");
    double hoursWorked = sc.nextDouble();

    double grossSalary = hourlyRate * hoursWorked;
    double tax = grossSalary * 0.075;
    double netSalary = grossSalary - tax;

    System.out.println("Gross Salary: " + grossSalary);
    System.out.println("Net Salary: " + netSalary);
  }
}
