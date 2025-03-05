class MyThread extends Thread {

  boolean isEven = false;

  public MyThread(boolean isEven) {
    this.isEven = isEven;
  }

  public void run() {
    for (int i = 1; i <= 50; i++) {
      try {
        Thread.sleep(500);
        if (isEven) {
          if (i % 2 == 0) {
            System.out.println(Thread.currentThread().getName() + " " + i);
          }
        } else {
          if (i % 2 != 0) {
            System.out.println(Thread.currentThread().getName() + " " + i);
          }
        }
      } catch (Exception e) {
        System.out.println(e);
      }
    }
  }
}

public class Assign02 {
  public static void main(String[] args) {
    MyThread myThread1 = new MyThread(false);
    MyThread myThread2 = new MyThread(true);

    myThread1.start();
    myThread2.start();
  }

}
