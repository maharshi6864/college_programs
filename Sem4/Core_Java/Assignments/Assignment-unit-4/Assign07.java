import java.util.Scanner;

public class Assign07 {

  static void displayArray(int[] arr) {
    for (int i : arr) {
      System.out.print(i + " ");
    }
    System.out.println();
  }

  public static void main(String[] args) {
    int[] arr = { 23, 345, 57, 78, 23 };
    displayArray(arr);
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter index to get the element : ");
    int index = scanner.nextInt();
    try {
      int element = arr[index];
      System.out.println("Answer is : " + element);
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}
