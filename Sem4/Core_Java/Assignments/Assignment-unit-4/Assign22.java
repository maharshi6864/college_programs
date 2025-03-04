import java.util.Scanner;

public class Assign22 {

  static void reverseString() {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter a string to reverse it : ");
    String str = scanner.nextLine();
    String reverseString = "";
    for (int i = str.length(); i > 0; i--) {
      reverseString = reverseString.concat(str.substring(i - 1, i));
    }
    System.out.println("Reversed String  : " + reverseString);
  }

  static void replaceString() {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter a string : ");
    String str1 = scanner.nextLine();
    System.out.println("String you have entered : " + str1);
    System.out.println("Enter String you want to replace it with : ");
    str1 = scanner.nextLine();
  }

  static void convertToUpperCase() {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter string to convert it into upper case : ");
    String str1 = scanner.nextLine();
    System.out.println("String you have entered : " + str1);
    str1 = str1.toUpperCase();
    System.out.println("String converted into upper case: " + str1);
  }

  static void convertUpperCaseToLowerCase() {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter upper case string to convert it into lower case : ");
    String str1 = scanner.nextLine();
    System.out.println("String you have entered : " + str1);
    str1 = str1.toLowerCase();
    System.out.println("String converted into lower case: " + str1);
  }

  public static void main(String[] args) {
    reverseString();
    replaceString();
    convertToUpperCase();
    convertUpperCaseToLowerCase();
  }
}
