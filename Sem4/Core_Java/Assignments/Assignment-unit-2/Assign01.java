import java.util.Random;

class Assign01 {
  public static void main(String[] args) {
    int[] arr = new int[10];

    // Random numbers.
    for (int i = 0; i < 10; i++) {
      Random random = new Random();
      arr[i] = random.nextInt( 100);
    }

    // Displaying the array elements.
    System.out.println("Displaying the array elements.");
    for (int i = 0; i < 10; i++) {
      System.out.println(arr[i]);
    }

    int min = arr[0];
    for (int i = 1; i < 10; i++) {
      if (min > arr[i]) {
        min = arr[i];
      }
    }
    System.out.println("\nMinimum Number from the the array : " + min);

  }

}