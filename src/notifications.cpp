#include <iostream>
#include <string>

struct NotificationSettings {
    bool emailEnabled;
    bool portalEnabled;
};

void displayNotificationSettings(const NotificationSettings& settings) {
    std::cout << "\n--- Notification Settings ---" << std::endl;
    std::cout << "Email notifications: "
              << (settings.emailEnabled ? "Enabled" : "Disabled")
              << std::endl;
    std::cout << "Portal notifications: "
              << (settings.portalEnabled ? "Enabled" : "Disabled")
              << std::endl;
}
void setEmailNotifications(NotificationSettings& settings, bool enabled) {
    settings.emailEnabled = enabled;
}
void setPortalNotifications(NotificationSettings& settings, bool enabled) {
    settings.portalEnabled = enabled;
}