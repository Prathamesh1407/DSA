public class SingletonClass {
    private static SingletonClass singleton_Instance = null;

    private SingletonClass() {

    }

    //If we didn't use syncronization at the time of multithreading multiple threads can access same condition if(instance==NULL) and will enter and end up crerating multiple threads which will violate the singletone purpose

    //Here we could have used syncronized method to gurantee the singletone purpose but it will unnecessarily put the lock on method even if the object is created so use the syncronized block so in method multiple threads can enter and while creating instance only one method can access the operation
    public static SingletonClass getInstance() {
        if (singleton_Instance == null) {

            synchronized (SingletonClass.class) {
                if (singleton_Instance == null) {
                    singleton_Instance = new SingletonClass();
                }
            }
        }
        return singleton_Instance;
    }

    public static void main(String[] args) {
        SingletonClass obj = SingletonClass.getInstance();
        SingletonClass obj2 = SingletonClass.getInstance();
        System.out.println(obj.hashCode());
        System.out.println(obj2.hashCode());
    }
}