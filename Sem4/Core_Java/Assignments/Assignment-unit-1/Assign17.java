class Assign17 {

  public static void main(String[] args) {
    System.out.println("Displaying all the odd prime numbers from 50 to 100.\n");
    for (int i = 50; i < 100; i++) {
      int count = 0;
      for (int j = 1; j <= i; j++) {
        if (i % j == 0) {
          count++;
        }
      }
      if (count == 2) {
        if (i % 2 != 0) {
          System.out.println(i + " is a prime number and also and also an odd number.");
        }
      }
    }
  }

}
