package FactoryPattern;
public class FactoryPatternDemo {
    public static void main(String[] args) {
        NotificationFactory factory = new NotificationFactory();

        // Get an SMS notification
        Notification smsNotification = factory.createNotification("SMS");
        smsNotification.notifyUser();

        // Get an Email notification
        Notification emailNotification = factory.createNotification("Email");
        emailNotification.notifyUser();

        // Get a Push notification
        Notification pushNotification = factory.createNotification("Push");
        pushNotification.notifyUser();
    }
}
