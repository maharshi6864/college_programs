class Book {
  private String title;
  private int numberOfPages;

  public int getNumberOfPages() {
    return numberOfPages;
  }

  public String getTitle() {
    return title;
  }

  public void setNumberOfPages(int numberOfPages) {
    this.numberOfPages = numberOfPages;
  }

  public void setTitle(String title) {
    this.title = title;
  }
}

class TextBook extends Book {
  private int gradeLevel;

  public int getGradeLevel() {
    return gradeLevel;
  }

  public void setGradeLevel(int gradeLevel) {
    this.gradeLevel = gradeLevel;
  }

}

public class Assign06 {
  public static void main(String[] args) {
    Book book1 = new Book();
    TextBook textBook = new TextBook();

    book1.setTitle("Harry Potter");
    book1.setNumberOfPages(122);

    textBook.setTitle("Art of living");
    textBook.setNumberOfPages(200);
    textBook.setGradeLevel(3);

    System.out.println("Book Detials ");
    System.out.println("Book title  : " + book1.getTitle());
    System.out.println("Number of pages : " + book1.getNumberOfPages());

    System.out.println("Textbook Details ");
    System.out.println("Textbook Title : " + textBook.getTitle());
    System.out.println("Number of pages : " + textBook.getNumberOfPages());
    System.out.println("Textbook for grade : " + textBook.getGradeLevel());

  }
}
