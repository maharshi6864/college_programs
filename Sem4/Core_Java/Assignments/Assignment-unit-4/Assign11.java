import java.util.Scanner;

public class Assign11 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String str = scanner.nextLine();

    try {
      int number = Integer.parseInt(str);
      System.out.println("Number is  : " + number);
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}
