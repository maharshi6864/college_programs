import java.util.Scanner;

class LengthMatchException extends Exception {
  public LengthMatchException() {
    super();
  }

  public LengthMatchException(String message) {
    super(message);
  }

  public LengthMatchException(String message, Throwable cause) {
    super(message, cause);
  }

  public LengthMatchException(Throwable cause) {
    super(cause);
  }
}

public class Assign02 {
  static void checkLength(String str, int lengt) throws LengthMatchException {
    if (str.length() != lengt) {
      throw new LengthMatchException("Length of string and the number passed is not same !!");
    } else {
      System.out.println("Length of string and the number passed is same.");
    }
  }

  public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter length : ");
    int length = scanner.nextInt();
    scanner.nextLine();
    System.out.println("Enter string : ");
    String str = scanner.nextLine();

    try {
      checkLength(str, length);
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}
