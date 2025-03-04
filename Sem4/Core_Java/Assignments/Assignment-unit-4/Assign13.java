import java.util.Scanner;

class NotSufficientFund extends Exception {
  public NotSufficientFund() {
    super();
  }

  public NotSufficientFund(String message) {
    super(message);
  }

  public NotSufficientFund(String message, Throwable cause) {
    super(message, cause);
  }

  public NotSufficientFund(Throwable cause) {
    super(cause);
  }

}

public class Assign13 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter bank balance : ");
    float balance = scanner.nextFloat();
    scanner.nextLine();
    System.out.println("Your Balance is : " + balance);

    while (true) {
      System.out.println("Enter amount to withdraw(press \"Q\" to exit ) : ");
      String input = scanner.nextLine();
      if (input.equals("Q") || input.equals("q")) {
        return;
      }
      try {
        float withdraw = Float.parseFloat(input);
        if (withdraw > balance) {
          throw new NotSufficientFund("Insufficient Balance try again !!");
        }
        balance -= withdraw;
        System.out.println("Withdrawal complete, avilable balance : " + balance);

      } catch (NumberFormatException e) {
        System.out.println("Invalid input !!");
      } catch (NotSufficientFund e) {
        System.out.println(e);
      }
    }

  }
}
