public class Assign15 {
  public static void main(String[] args) {
    int number = 12345;
    int newNumber = 0;
    while (number != 0) {
      int re = number % 10;
      newNumber *= 10;
      newNumber += re;
      number /= 10;
    }
    System.out.println("Reverse of number : " + newNumber);
  }
}
