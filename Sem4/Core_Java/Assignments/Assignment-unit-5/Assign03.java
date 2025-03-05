class MyThread implements Runnable {

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

public class Assign03 {
  public static void main(String[] args) {
    MyThread myThread1 = new MyThread();
    Thread thread = new Thread(myThread1);
    thread.start();
  }

}
