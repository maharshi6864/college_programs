interface Sport {
  int sportsMarks = 30;
}

class Result implements Sport {
  int total;
  float percentage;

  public Result(int sub1, int sub2, int sub3) {
    this.total = sub1 + sub2 + sub3;
    this.percentage = (total + sportsMarks) / 4.0f;
  }

  // Method to determine grade based on percentage
  public char getGrade() {
    if (percentage >= 90)
      return 'A';
    else if (percentage >= 75)
      return 'B';
    else if (percentage >= 60)
      return 'C';
    else if (percentage >= 40)
      return 'D';
    else
      return 'F';
  }

  // Method to display the result
  public void displayResult() {
    System.out.println("Total Marks: " + total);
    System.out.println("Percentage: " + percentage + "%");
    System.out.println("Grade: " + getGrade());
  }
}

public class Assign12 {
  public static void main(String[] args) {
    Result result1 = new Result(40, 50, 88);
    result1.displayResult();
  }
}
