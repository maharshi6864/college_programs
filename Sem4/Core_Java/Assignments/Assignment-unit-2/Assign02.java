import java.util.Random;

public class Assign02 {

  public static void main(String[] args) {
    int[] arr = { 1, 2, 3, 2, 3, 4 };

    // Random numbers.
    // Random random = new Random();
    // for (int i = 0; i < 10; i++) {
    // arr[i] = random.nextInt(1, 10);
    // }

    // Displaying the array elements.
    System.out.println("Displaying the array elements.");
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();

    int duplicateCount = 0;
    for (int i = 0; i < arr.length - duplicateCount; i++) {
      for (int j = i + 1; j < arr.length - duplicateCount; j++) {
        if (arr[i] == arr[j]) {
          System.out.println(arr[i] + " Duplicate found !! " + arr[j]);
          for (int j2 = j; j2 < arr.length - 1; j2++) {
            System.out.println(arr[j2] + " " + arr[j2 + 1]);
            arr[j] = arr[j2];
          }
          duplicateCount++;
        }
      }
    }
    System.out.println("Number of duplicates : " + duplicateCount);
    System.out.println("Displaying the array elements.");
    for (int i = 0; i < arr.length - duplicateCount; i++) {
      System.out.print(arr[i] + " ");
    }

    System.out.println();
  }
}
