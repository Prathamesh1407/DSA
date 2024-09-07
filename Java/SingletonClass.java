public class SingletonClass
{
    private static SingletonClass singleton_Instance=null;

    private SingletonClass()
    {

    }

    public static SingletonClass getInstance()
    {
        if(singleton_Instance==null)
        {
            singleton_Instance=new SingletonClass();
        }
        return singleton_Instance;
    } 
    public static void main(String[] args) {
        SingletonClass obj=SingletonClass.getInstance();
        SingletonClass obj2=SingletonClass.getInstance();
        System.out.println(obj.hashCode());
        System.out.println(obj2.hashCode());
    }
}