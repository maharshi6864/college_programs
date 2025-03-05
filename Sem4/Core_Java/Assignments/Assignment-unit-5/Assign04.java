class MyThread extends Thread {

  public void run() {
    for (int i = 1; i <= 10; i++) {
      try {
        Thread.sleep(500);
        System.out.println(Thread.currentThread().getName() + " " + i);
      } catch (Exception e) {
        System.out.println(e);
      }
    }
  }
}

public class Assign04 {
  public static void main(String[] args) {
    MyThread myThread1 = new MyThread();

    myThread1.start();
  }

}
