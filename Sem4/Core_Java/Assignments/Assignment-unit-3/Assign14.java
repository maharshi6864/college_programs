class Shape {
  void thisIsAShape() {
    System.out.println("This is a shape.");
  }
}

class Rectangle extends Shape {
  void thisIsARectangle() {
    System.out.println("This is a rectangle.");
  }
}

class Circle extends Shape {
  void thisIsACircle() {
    System.out.println("This is a circle.");
  }
}

class Square extends Rectangle {
  void thisIsASqaure() {
    System.out.println("Square is a rectangle.");
  }
}

public class Assign14 {
  public static void main(String[] args) {
    Square square = new Square();
    square.thisIsAShape();
    square.thisIsARectangle();
  }
}
