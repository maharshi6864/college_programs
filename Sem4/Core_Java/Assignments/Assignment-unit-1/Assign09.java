import java.util.Scanner;

public class Assign09 {
  public static void main(String[] args) {
    Triangle tr1 = new Triangle();
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter Height of the triangle : ");
    tr1.height = sc.nextFloat();
    System.out.println("Enter Base of the triangle : ");
    tr1.base = sc.nextFloat();
    tr1.findArea();

    Triangle tr2 = new Triangle();
    System.out.println("Enter Height of the triangle : ");
    float height = sc.nextFloat();
    System.out.println("Enter Base of the triangle : ");
    float base = sc.nextFloat();
    tr2.findArea(height, base);

  }
}

class Triangle {
  float height;
  float base;

  void findArea(float height, float base) {
    float area = (height * base) / 2;
    System.out.println("Area of Triangle : " + area);
  }

  void findArea() {
    float area = (height * base) / 2;
    System.out.println("Area of Triangle : " + area);
  }
}
