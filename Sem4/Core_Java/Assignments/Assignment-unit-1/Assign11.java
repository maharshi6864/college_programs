import java.util.Scanner;

public class Assign11 {

  public static void main(String[] args) {
    int a, b;
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter value of a : ");
    a = sc.nextInt();
    System.out.println("Enter value of a : ");
    b = sc.nextInt();

    String result = (a > b) ? "A is greater" : "B is greater";
    System.out.println(result);

  }
}
