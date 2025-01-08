import java.util.ArrayList;
import java.util.Scanner;

public class ArrayListExample {

  // creating ArrayList Object.
  static ArrayList<Integer> arrayList = new ArrayList<>();

  static void display() {
    // Displaying all the added elements
    System.out.println("Diplaying all the added elements.");
    for (Integer i : arrayList) {
      System.out.println(i);
    }
  }

  static void deleteFromIndex(int index) {
    arrayList.remove(index);
  }

  static void updateTheIndex(int index, int number) {
    arrayList.set(index, number);
  }

  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    System.out.println("Enter integer elements in the arraylist : ");
    System.out.println("Enter -1 to stop entering elements : ");
    int number = 0;
    while (number != -1) {
      arrayList.add(number);
      number = sc.nextInt();
    }

    display();
    // Delete the index from the ArrayList
    System.out.println("Enter index to delete that index : ");
    deleteFromIndex(sc.nextInt());

    display();

    // Delete the index from the ArrayList
    System.out.println("Enter index you want to update : ");
    int index = sc.nextInt();
    System.out.println("Enter number you want to update with : ");
    number = sc.nextInt();
    updateTheIndex(index, number);

    display();

  }
}
