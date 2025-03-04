import java.util.Scanner;

public class Assign19 {
  public static void main(String[] args) {
    String str = "Hello, How are you ?";

    StringBuffer stringBuffer = new StringBuffer(str);
    System.out.println("This is a String : " + str);
    System.out.println("This is a Reverse String : " + stringBuffer.reverse());

    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter another String to append it with the existing string : ");
    String anotherString = scanner.nextLine();
    stringBuffer.reverse();
    stringBuffer.append(anotherString);
    str = stringBuffer.toString();
    System.out.println("Appended string  : " + str);
    System.out.println("Capacity of the string is : " + stringBuffer.capacity());
  }
}
