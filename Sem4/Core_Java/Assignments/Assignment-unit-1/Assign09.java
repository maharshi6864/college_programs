import java.util.Scanner;

public class Assign09 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter height of the traingle : ");
    float height = sc.nextFloat();
    System.out.println("Enter height of the traingle : ");
    float base = sc.nextFloat();

    Area area1 = new Area(height, base);


    System.out.println("Enter height of the traingle : ");
    int l = sc.nextInt();
    System.out.println("Enter height of the traingle : ");
    int b = sc.nextInt();
    
    Area area2 = new Area(l, b);
  }
}

class Area {
  float height;
  float base;

  Area(float height, float base) {
    float area = (height * base) / 2;
    System.out.println("Area of Triangle : " + area);
  }

  Area(int length, int breath) {
    int area = length * breath;
    System.out.println("Area of Rectangle : " + area);
  }
}
