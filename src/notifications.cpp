#include <iostream>
#include <string>

struct NotificationSettings {
    bool emailEnabled;
bool portalEnabled;
bool smsEnabled;
};

void displayNotificationSettings(const NotificationSettings& settings) {
    std::cout << "SMS notifications: "
          << (settings.smsEnabled ? "Enabled" : "Disabled")
          << std::endl;
}
void setEmailNotifications(NotificationSettings& settings, bool enabled) {
    settings.emailEnabled = enabled;
}
void setPortalNotifications(NotificationSettings& settings, bool enabled) {
    settings.portalEnabled = enabled;
}

bool hasActiveNotifications(const NotificationSettings& settings) {
    return settings.emailEnabled ||
           settings.portalEnabled ||
           settings.smsEnabled;
}
std::string getNotificationSummary(const NotificationSettings& settings) {
    int enabledCount = 0;

    if (settings.emailEnabled) {
        enabledCount++;
    }

    if (settings.portalEnabled) {
        enabledCount++;
    }

    if (settings.smsEnabled) {
        enabledCount++;
    }

    if (enabledCount == 0) {
        return "All notifications are disabled.";
    }

    return std::to_string(enabledCount) +
           " notification channel(s) are enabled.";
}

bool validateNotificationSettings(const NotificationSettings& settings) {
    if (!settings.emailEnabled && !settings.portalEnabled) {
        std::cout << "Warning: all notifications are disabled."
                  << std::endl;
        return false;
    }

    std::cout << "Notification configuration is valid."
              << std::endl;
    return true;
}
void resetNotificationSettings(NotificationSettings& settings) {
    settings.emailEnabled = false;
    settings.portalEnabled = false;
    settings.smsEnabled = false;

    std::cout << "Notification settings have been reset." << std::endl;
}
void setSmsNotifications(NotificationSettings& settings, bool enabled) {
    settings.smsEnabled = enabled;
}