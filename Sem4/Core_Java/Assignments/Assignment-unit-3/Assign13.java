class Rectangle {
  int length;
  int breath;

  Rectangle(int length, int breath) {
    this.breath = breath;
    this.length = length;
  }

  void printArea() {
    System.out.println("Area of rectangle is : " + (length * breath));
  }

  void printPerimeter() {
    System.out.println("Perimeter of rectangle is : " + (2 * (length + breath)));
  }
}

class Square extends Rectangle {

  Square(int length) {
    super(length, length);
  }

  void printArea() {
    System.out.println("Area of square is : " + (length * breath));
  }

  void printPerimeter() {
    System.out.println("Perimeter of sqaure is : " + (2 * (length + breath)));
  }
}

public class Assign13 {
  public static void main(String[] args) {
    Rectangle rectangle = new Rectangle(12, 13);

    rectangle.printArea();
    rectangle.printPerimeter();

    Square square = new Square(20);
    square.printArea();
    square.printPerimeter();

  }
}
