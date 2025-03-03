interface Area {
  double PI = Math.PI;

  double compute(double radius);

}

class Circle implements Area {

  public double compute(double radius) {
    return PI * radius * radius;
  }
}

public class Assign11 {
  public static void main(String[] args) {
    Circle circle = new Circle();
    System.out.println(circle.compute(12));
  }
}