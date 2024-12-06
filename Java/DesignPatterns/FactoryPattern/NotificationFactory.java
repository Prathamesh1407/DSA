package FactoryPattern;

public class NotificationFactory {

    public Notification createNotification(String type) {
        if (type == null)
            return null;

        switch (type) {
            case "SMS":
                return new SMSNotification();
            case "Email":
                return new EmailNotification();
            case "Push":
                return new PushNotification();
            default:
                return null;
        }
    }
}
