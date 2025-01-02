import java.util.Scanner;

class ArrayHomeWork2Jan {

  static int[] createAnArray() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter size of an array : ");
    int size = sc.nextInt();
    int[] array = new int[size];
    for (int i = 0; i < size; i++) {
      System.out.println("Enter value for index " + i + " : ");
      array[i] = sc.nextInt();
    }
    return array;
  }

  static int[] add(int array[]) {
    for (int i = 0; i < array.length; i++) {
      array[i] = array[i] + 5;
    }
    return array;
  }

  static void viewArray(int array[]) {
    for (int i = 0; i < array.length; i++) {
      System.out.println("value at index " + i + " " + array[i]);
    }
  }

  public static void main(String[] args) {
    int array[] = createAnArray();
    viewArray(array);
    array = add(array);
    viewArray(array);
  }
}