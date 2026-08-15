#include <iostream>

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