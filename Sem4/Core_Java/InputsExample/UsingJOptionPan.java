import javax.swing.JOptionPane;

class UsingJOptionPan {
  public static void main(String[] args) {
    JOptionPane.showMessageDialog(null, "Hello, World!");
    String a;
    a = JOptionPane.showInputDialog(null, "Enter your name !!", "Name", JOptionPane.WARNING_MESSAGE);
    System.out.println("Your name is : " + a);
  }
}