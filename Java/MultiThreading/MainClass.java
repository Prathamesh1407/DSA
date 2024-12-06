public class MainClass {
    public static void main(String[] args) {
        Thread t1 = new Thread1("thread1");
        t1.start();

        Thread t2 = new Thread(new Thread2(), "thread2");

        /*
         * Or we can do it using Lambda Function
         * Thread t2=new Thread(()->{
         * for (int i = 0; i < 5; i++)
         * {
         * System.out.println(Thread.currentThread()+" "+i);
         * // currentThread() ==> Thread[threadName,priority,parentThread]
         * }
         * },"thread2")
         * 
         * 
         * Here no need to create class for Thread2 compiler will handle all the
         * operations of creating class
         */
        t2.start();
    }
}
