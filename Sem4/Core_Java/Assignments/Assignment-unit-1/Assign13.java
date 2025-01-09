import java.util.Scanner;

public class Assign13 {
  public static void main(String[] args) {
    int marks1;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter marks : ");
    marks1 = sc.nextInt();

    if (marks1 > 90 && marks1 <= 100) {
      System.out.println("A grade");
    } else if (marks1 > 70 && marks1 <= 90) {
      System.out.println("B grade");
    } else if (marks1 > 60 && marks1 <= 70) {
      System.out.println("C grade");
    } else if (marks1 > 40 && marks1 <= 60) {
      System.out.println("D grade");
    } else if (marks1 > 0 && marks1 <= 40) {
      System.out.println("E grade");
    } else {
      System.out.println("Invalid Marks !!");
    }
  }
}
