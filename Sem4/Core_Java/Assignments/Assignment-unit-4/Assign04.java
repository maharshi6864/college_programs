import java.util.ArrayList;
import java.util.List;

import javax.swing.JOptionPane;

class OddException extends Exception {
  public OddException() {
    super();
  }

  public OddException(String message) {
    super(message);
  }

  public OddException(Throwable cause, String message) {
    super(message, cause);
  }

  public OddException(Throwable cause) {
    super(cause);
  }
}

public class Assign04 {

  static void takeAndCheckEvenNumber() throws OddException {
    List<Integer> arr = new ArrayList<>();

    for (int i = 0; i < 5; i++) {
      int number = Integer.parseInt(JOptionPane.showInputDialog("Enter Even Number "));
      if (number % 2 == 0) {
        arr.add(number);
        continue;
      }
      throw new OddException("Only Even Number is expected.");
    }
    System.out.println(arr);
  }

  public static void main(String[] args) {
    try {
      takeAndCheckEvenNumber();
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}
