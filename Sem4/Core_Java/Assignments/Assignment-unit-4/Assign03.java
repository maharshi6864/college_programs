import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class Assign03 {
  public static void main(String[] args) {
    System.out.println("Enter numbers and enter -1 to exit entering numbers : ");
    Scanner scanner = new Scanner(System.in);
    List<Integer> listOfNumber = new ArrayList<>();

    while (true) {
      int number = scanner.nextInt();
      if (number == -1) {
        break;
      }
      listOfNumber.add(number);
    }

    listOfNumber.sort(Comparator.naturalOrder());

    System.out.println(listOfNumber);
    int lowestNumber = listOfNumber.get(0);
    int secondLowestNumber = listOfNumber.get(0);

    if (lowestNumber == secondLowestNumber) {
      throw new RuntimeException("Lowest Number and second lowest number are same");
    }
  }
}
