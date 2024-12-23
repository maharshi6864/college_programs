import javax.swing.JOptionPane;

public class CustomOptionDialog {
  public static void main(String[] args) {
    String menu[] = { "Orange", "Apple", "Banana" };
    int votes[] = { 0, 0, 0 };
    int numberOfStudents = 5;
    for (int i = 0; i < numberOfStudents; i++) {
      int choice = JOptionPane.showOptionDialog(
          null,
          "Enter your Choice !!",
          "Fruit Choice",
          JOptionPane.DEFAULT_OPTION,
          JOptionPane.QUESTION_MESSAGE,
          null,
          menu,
          menu[0]);
      votes[choice]++;
    }

    int max = votes[0];
    int maxIndex = 0;
    for (int i = 1; i < votes.length; i++) {
      if (max < votes[i]) {
        maxIndex = i;
        max = votes[i];
      }
    }
    System.out.println("Maximum votes to the fruit is : " + menu[maxIndex]);
  }
}
