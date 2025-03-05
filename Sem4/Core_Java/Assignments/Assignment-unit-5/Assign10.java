class MyThread extends Thread {
  int start = 0;
  int end = 0;
  int total = 0;

  public MyThread(int start, int end) {
    this.end = end;
    this.start = start;
  }

  public void run() {
    try {
      Thread.sleep(1000);
      for (int i = start; i <= end; i++) {
        this.total += i;
      }
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}

public class Assign10 {
  static int total;

  public static void main(String[] args) {
    MyThread t1 = new MyThread(1, 5);
    MyThread t2 = new MyThread(6, 10);
    MyThread t3 = new MyThread(11, 15);

    t1.start();
    t2.start();
    t3.start();

    try {
      t1.join();
      t2.join();
      t3.join();
    } catch (Exception e) {
      System.out.println(e);
    }

    int total = t1.total + t2.total + t3.total;
    int average = total / 3;
    System.out.println("total : " + total);
    System.out.println("average : " + average);
  }
}
