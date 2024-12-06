package FactoryPattern;

public class EmailNotification implements Notification {
    public void notifyUser()
    {
        System.out.println("sending an Email notfication");
    }
}
