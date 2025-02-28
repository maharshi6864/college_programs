import java.util.Scanner;

interface InnerAssign04 {
  void areaOfCricle(int radius);

  void areaOfRect(int length, int breath);

  void areaOfSquare(int side);
}

class AreaOfShapes implements InnerAssign04 {

  @Override
  public void areaOfCricle(int radius) {
    System.out.println("Area of Circle is : " + (Math.PI * radius * radius));
  }

  @Override
  public void areaOfRect(int length, int breath) {
    System.out.println("Area of Rectangle is : " + (length * breath));
  }

  @Override
  public void areaOfSquare(int side) {
    System.out.println("Area of Square is : " + (side * side));
  }

}

public class Assign04 {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter radius of circle  : ");
    int radius = scanner.nextInt();
    AreaOfShapes areaOfShapes = new AreaOfShapes();
    areaOfShapes.areaOfCricle(radius);
  }
}
