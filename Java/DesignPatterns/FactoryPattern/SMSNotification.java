package FactoryPattern;

public class SMSNotification implements Notification {
    public void notifyUser()
    {
        System.out.println("Sending an SMS notification");
    }
}
