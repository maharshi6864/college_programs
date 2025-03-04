import java.util.Scanner;

public class Assign06 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter Divisor : ");
    int divisor = scanner.nextInt();
    System.out.println("Enter Dividend : ");
    int dividend = scanner.nextInt();

    try {
      int result = divisor / dividend;
      System.out.println("Answer is : " + result);
    } catch (Exception e) {
      System.out.println(e);
    }

  }
}
