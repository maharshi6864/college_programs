class VariableArgumentExample {
  static void printSumOfNumber(int... number) {
    int total = 0;
    for (int i : number) {
      total += i;
    }
    System.out.println("Total of all number is : " + total);
  }

  public static void main(String[] args) {
    printSumOfNumber(1, 2, 3, 4, 5, 56);
    printSumOfNumber(90, 23, 12);
    printSumOfNumber(90, 32, 35, 88);
  }
}