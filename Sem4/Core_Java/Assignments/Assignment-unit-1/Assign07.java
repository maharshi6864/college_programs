import java.util.Scanner;

import javax.swing.JOptionPane;

public class Assign07 {

  public static void main(String[] args) {
    int number = 0;
    Scanner sc = new Scanner(System.in);
    number = Integer.parseInt(JOptionPane.showInputDialog("Enter number : "));
    Num nu = new Num(number);
  }
}

class Num {
  int number;

  Num(int i) {
    System.out.println(i);
    if (i % 2 == 0) {
      System.out.println("The Number is Even Number");
    } else {
      System.out.println("The Number is Odd Number");
    }
  }
}
