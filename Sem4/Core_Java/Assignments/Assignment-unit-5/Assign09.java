class MyThread extends Thread {
  public void run() {
    try {
      Thread.sleep(1000);
      System.out.println(Thread.currentThread().getName() + " Executed ! ");
      System.out.println("Priority is : " + Thread.currentThread().getPriority());
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}

public class Assign09 {
  public static void main(String[] args) {
    MyThread t1 = new MyThread();
    MyThread t2 = new MyThread();
    MyThread t3 = new MyThread();

    t1.setPriority(Thread.MIN_PRIORITY); // Priority 1
    t2.setPriority(Thread.NORM_PRIORITY); // Priority 5
    t3.setPriority(Thread.MAX_PRIORITY); // Priority 10

    t1.start();
    t2.start();
    t3.start();
  }
}
