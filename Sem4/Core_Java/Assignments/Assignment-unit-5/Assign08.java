class ThreadUsingInterface implements Runnable {

  public void run() {
    for (int i = 1; i <= 50; i++) {
      try {
        if (i % 2 == 1) {
          Thread.sleep(500);
          System.out.println(Thread.currentThread().getName() + " " + i);
        }
      } catch (Exception e) {
        System.out.println(e);
      }
    }
  }
}

class ThreadUsingClass extends Thread {

  public void run() {
    for (int i = 1; i <= 50; i++) {
      try {
        if (i % 2 == 0) {
          Thread.sleep(500);
          System.out.println(Thread.currentThread().getName() + " " + i);
        }
      } catch (Exception e) {
        System.out.println(e);
      }
    }
  }
}

public class Assign08 {
  public static void main(String[] args) {
    ThreadUsingInterface threadUsingInterface = new ThreadUsingInterface();
    Thread thread = new Thread(threadUsingInterface);
    thread.start();

    ThreadUsingClass threadUsingClass = new ThreadUsingClass();
    threadUsingClass.start();
  }

}
