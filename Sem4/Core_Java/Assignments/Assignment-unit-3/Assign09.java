class Parent {
  void parentClassMethod() {
    System.out.println("This is a parent class !!");
  }
}

class Child extends Parent {

  void childClassMethod() {
    System.out.println("This is a child class !!");
  }
}

public class Assign09 {
  public static void main(String[] args) {
    Parent parent = new Parent();
    Child child = new Child();

    // Calling parent class method with parent class object.
    parent.parentClassMethod();

    // Calling child class method with child class object.
    child.childClassMethod();

    // Calling parent class method with child class object.
    child.parentClassMethod();

  }
}
