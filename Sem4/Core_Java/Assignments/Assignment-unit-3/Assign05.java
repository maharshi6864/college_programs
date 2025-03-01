interface Number {
  int process(int x, int y);
}

class Sum implements Number {
  public int process(int x, int y) {
    return x + y;
  }
}

class Avg implements Number {
  public int process(int x, int y) {

    return (x + y) / 2;
  }
}

public class Assign05 {
  public static void main(String[] args) {
    Sum summ = new Sum();
    Avg avgg = new Avg();
    System.out.println("Addition of two numbers : " + summ.process(12, 13));
    System.out.println("Average of two numbers : " + avgg.process(12, 13));
  }
}
