import java.util.Scanner;

class NotANaturalNumber extends Exception {
  public NotANaturalNumber() {
    super();
  }

  public NotANaturalNumber(String message) {
    super(message);
  }

  public NotANaturalNumber(String message, Throwable cause) {
    super(message, cause);
  }

  public NotANaturalNumber(Throwable cause) {
    super(cause);
  }
}

public class Assign09 {

  public static void main(String[] args) throws NotANaturalNumber {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter a natural number to get its square :  ");
    int number = scanner.nextInt();
    try {
      if (number <= 0) {
        throw new NotANaturalNumber("Entered number is not a natural number !!");
      }
      int result = (int) Math.pow(number, 2);
      System.out.println("Answer is : " + result);
    } catch (Exception e) {
      System.out.println(e);
    }

  }
}
