import java.util.Scanner;

public class Assign08 {
  public static void main(String[] args) {
    int number = 0;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter number : ");
    number = sc.nextInt();
    Num nu = new Num(number);
  }
}

class Num {
  int number;

  Num(int i) {
    int count = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        count++;
      }
    }
    if (count == 2) {
      System.out.println("The Number is Prime Number");
    } else {
      System.out.println("The Number is not a Prime Number");
    }
  }
}