public class Thread2 implements Runnable {
    public void run() {
        for (int i = 0; i < 5; i++) 
        {
            System.out.println(Thread.currentThread()+" "+i);
            // currentThread() ==> Thread[threadName,priority,parentThread]
        }
    }
}
