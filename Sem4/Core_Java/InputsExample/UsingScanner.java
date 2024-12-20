import java.util.Scanner;

class UsingScanner {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int a, b, c;
    System.out.println("Enter 1st number : ");
    a = in.nextInt();
    System.out.println("Enter 2nd number : ");
    b = in.nextInt();
    c = a + b;
    System.out.println("Sum of " + a + " and " + b + " is " + c);
  }
}