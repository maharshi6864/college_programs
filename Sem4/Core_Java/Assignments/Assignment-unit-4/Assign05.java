import java.util.Scanner;

import javax.swing.JOptionPane;

class NoMatchException extends Exception {
  NoMatchException() {
    super();
  }

  NoMatchException(String message) {
    super(message);
  }

  NoMatchException(String message, Throwable cause) {
    super(message, cause);
  }

  NoMatchException(Throwable cause) {
    super(cause);
  }
}

public class Assign05 {

  public static void main(String[] args) throws NoMatchException {
    System.out.println("Enter a String : ");
    Scanner scanner = new Scanner(System.in);

    String str = JOptionPane.showInputDialog("Enter a word");

    if (!str.equals("internet")) {
      throw new NoMatchException("the word is not \"internet\"");
    }
    System.out.println("The word is \"internet\"");
  }
}