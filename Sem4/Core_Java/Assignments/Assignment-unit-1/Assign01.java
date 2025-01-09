import java.util.Scanner;

public class Assign01 {
  // Add function
  public static int add(int a, int b) {
    return a + b;
  }

  // Subtract function
  public static int subtract(int a, int b) {
    return a - b;
  }

  // Multiply function
  public static int multiply(int a, int b) {
    return a * b;
  }

  // Divide function
  public static double divide(int a, int b) {
    if (b != 0) {
      return (double) a / b;
    } else {
      System.out.println("Division by zero is not allowed.");
      return 0;
    }
  }

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter two numbers: ");
    int num1 = scanner.nextInt();
    int num2 = scanner.nextInt();

    System.out.println("Addition: " + add(num1, num2));
    System.out.println("Subtraction: " + subtract(num1, num2));
    System.out.println("Multiplication: " + multiply(num1, num2));
    System.out.println("Division: " + divide(num1, num2));
  }
}
