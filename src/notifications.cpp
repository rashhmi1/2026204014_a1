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

bool hasActiveNotifications(const NotificationSettings& settings) {
    return settings.emailEnabled || settings.portalEnabled;
}

std::string getNotificationSummary(const NotificationSettings& settings) {
    if (settings.emailEnabled && settings.portalEnabled) {
        return "Email and portal notifications are enabled.";
    }

    if (settings.emailEnabled) {
        return "Only email notifications are enabled.";
    }

    if (settings.portalEnabled) {
        return "Only portal notifications are enabled.";
    }

    return "All notifications are disabled.";
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

    std::cout << "Notification settings have been reset." << std::endl;
}