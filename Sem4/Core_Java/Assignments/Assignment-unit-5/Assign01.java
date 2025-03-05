class MyThread extends Thread {

  int time = 0;

  public MyThread(int time) {
    this.time = time;
  }

  public void run() {
    for (int i = 0; i < 10; i++) {
      try {
        Thread.sleep(time);
        System.out.println(Thread.currentThread().getName());
      } catch (Exception e) {
        System.out.println(e);
      }
    }
  }
}

public class Assign01 {
  public static void main(String[] args) {
    MyThread myThread1 = new MyThread(2000);
    MyThread myThread2 = new MyThread(4000);

    myThread1.start();
    myThread2.start();
  }

}
