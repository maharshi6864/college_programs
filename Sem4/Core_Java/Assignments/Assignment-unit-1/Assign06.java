import java.util.Scanner;

import javax.swing.JOptionPane;

public class Assign06 {
  public static void main(String[] args) {

    int year = 0;
    Scanner sc = new Scanner(System.in);
    year = Integer.parseInt(JOptionPane.showInputDialog("Enter year to check either leap year or not : "));
    if (year % 4 == 0) {
      System.out.println(year + " is a Leap Year.");
    } else {
      System.out.println(year + " is not a Leap Year.");
    }

  }
}
