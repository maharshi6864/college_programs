import java.util.Scanner;

public class Assign25 {
  public static void main(String[] args) {
    try {
      Scanner scanner = new Scanner(System.in);

      System.out.println("Enter any integer  : ");
      int integerNumber = Integer.parseInt(scanner.nextLine());

      System.out.println("Enter any float  : ");
      float floatNumber = Float.parseFloat(scanner.nextLine());

      System.out.println("Enter any double  : ");
      double doubleNumber = Double.parseDouble(scanner.nextLine());

      System.out.println("Enter true or false  : ");
      boolean booleanValue = Boolean.parseBoolean(scanner.nextLine());

      System.out.println("Integer number is : " + integerNumber);
      System.out.println("Float number is : " + floatNumber);
      System.out.println("Double number is : " + doubleNumber);
      System.out.println("Boolean value is : " + booleanValue);
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}
