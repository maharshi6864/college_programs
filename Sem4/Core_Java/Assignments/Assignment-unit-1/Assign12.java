import java.util.Scanner;

public class Assign12 {

  public static void main(String[] args) {
    int a, b, c;
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter value of a : ");
    a = sc.nextInt();
    System.out.println("Enter value of a : ");
    b = sc.nextInt();
    System.out.println("Enter value of a : ");
    c = sc.nextInt();

    if (a > b) {
      if (a > c) {
        System.out.println("A is the Largest Number !");
      } else {
        System.out.println("C is the Largest Number !");
      }
    } else {
      if (b > c) {
        System.out.println("B is the Largest Number !");
      } else {
        System.out.println("C is the Largest Number !");
      }
    }

  }
}
