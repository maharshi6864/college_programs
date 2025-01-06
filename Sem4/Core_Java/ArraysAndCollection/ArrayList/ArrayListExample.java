import java.util.ArrayList;
import java.util.Scanner;

class ArrayListExample {

  public static void main(String[] args) {
    // creating ArrayList Object.
    ArrayList<Integer> arrayList = new ArrayList<>();
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter integer elements in the arraylist : ");
    System.out.println("Enter -1 to stop entering elements : ");
    int number = sc.nextInt();
    while (number != -1) {
      arrayList.add(number);
      number = sc.nextInt();
    }

    // Displaying all the added elements
    System.out.println("Diplaying all the added elements.");
    for (Integer i : arrayList) {
      System.out.println(i);
    }
  }
}
