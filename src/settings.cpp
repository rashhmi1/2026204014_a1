#include <iostream>
#include <string>

void displaySettings() {
    std::cout << "\n--- Student Portal Settings ---" << std::endl;
    std::cout << "1. Notifications" << std::endl;
    std::cout << "2. Privacy" << std::endl;
    std::cout << "3. Account" << std::endl;
}
void setNotifications(bool enabled) {
    if (enabled) {
        std::cout << "Notifications are enabled." << std::endl;
    } else {
        std::cout << "Notifications are disabled." << std::endl;
    }
}
void setPrivacyMode(bool privateMode) {
    if (privateMode) {
        std::cout << "Privacy mode is enabled." << std::endl;
    } else {
        std::cout << "Privacy mode is disabled." << std::endl;
    }
}
void displayAccountSettings(const std::string& username) {
    std::cout << "\n--- Account Settings ---" << std::endl;
    std::cout << "Username: " << username << std::endl;
    std::cout << "Account status: Active" << std::endl;
}