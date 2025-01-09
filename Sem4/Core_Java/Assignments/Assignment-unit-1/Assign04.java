import java.util.Scanner;

public class Assign04 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter a number: ");
    int number = sc.nextInt();

    int square = number * number;
    int cube = number * number * number;

    System.out.println("Square: " + square);
    System.out.println("Cube: " + cube);
  }
}
