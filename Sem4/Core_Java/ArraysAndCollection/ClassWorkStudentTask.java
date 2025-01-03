class Student {
  static int counter;

  int id;

  String name;

  Student(int id, String name) {
    this.id = id;
    this.name = name;
    counter++;
  }

  void display() {
    System.out.println("student id : " + id);
    System.out.println("student name : " + name);
    System.out.println("student count : " + counter);
  }
}

public class ClassWorkStudentTask {
  public static void main(String[] args) {
    Student s1 = new Student(10101, "Maharshi Patel");
    s1.display();
    Student s2 = new Student(10102, "Aarsh Nananvati");
    s2.display();
    Student s3 = new Student(10103, "Kashish  Soni");
    s3.display();
    Student s4 = new Student(10104, "Aangi Shah");
    s4.display();
  }
}
