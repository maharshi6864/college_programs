import java.util.Scanner;

public class Assign10 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter feet to convert into centimeter : ");
    Converter cn1 = new Converter();
    cn1.feet = sc.nextFloat();
    cn1.convertFeetToCentimeter();
    System.out.println(cn1.feet + " in centimeter is : " + cn1.centimeter);
    Converter cn2 = new Converter(cn1);
    cn2.centimeter = sc.nextFloat();
    cn2.convertCentimeterToFeet();
    System.out.println(cn2.centimeter + " in centimeter is : " + cn2.feet);
  }
}

class Converter {
  float feet;
  float centimeter;

  Converter(Converter converter) {
    this.feet = converter.feet;
    this.centimeter = converter.centimeter;
  }

  Converter() {
    super();
  }

  void convertFeetToCentimeter() {
    centimeter = feet * 30.48f;
  }

  void convertCentimeterToFeet() {
    feet = centimeter / 30.48f;
  }
}