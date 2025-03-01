interface ThisInteraface {
  void ThisInterafaceMethod();
}

interface ThatInteraface {
  void ThatInterafaceMethod();
}

class OnThisClass implements ThisInteraface, ThatInteraface {

  @Override
  public void ThatInterafaceMethod() {
    System.out.println("This is a method from ThatInterface !!");
  }

  @Override
  public void ThisInterafaceMethod() {
    System.out.println("This is a method from ThisInterface !!");
  }

}

public class Assign08 {
  public static void main(String[] args) {
    OnThisClass onThisClass = new OnThisClass();

    onThisClass.ThatInterafaceMethod();
    onThisClass.ThisInterafaceMethod();
  }
}
