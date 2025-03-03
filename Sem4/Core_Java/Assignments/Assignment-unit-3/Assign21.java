import java.util.Scanner;

public class Assign21 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter 1st string : ");
    String str1 = scanner.nextLine();
    System.out.println("Enter 2nd string : ");
    String str2 = scanner.nextLine();

    if (str1.equals(str2)) {
      System.out.println("Strings are equal !!");
    } else {
      System.out.println("Strings are not equal !!");
    }

    System.out.println("Ignoring Case");
    if (str1.equalsIgnoreCase(str2)) {
      System.out.println("Strings are equal !!");
    } else {
      System.out.println("Strings are not equal !!");
    }

    System.out.println("Comparing strings : " + str1.compareTo(str2));

  }
}
