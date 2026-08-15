#include <iostream>
#include <string>

bool validateUsername(const std::string& username) {
    return !username.empty();
}

bool validatePassword(const std::string& password) {
    return password.length() >= 6;
}

bool authenticateUser(const std::string& username,
                      const std::string& password) {
    return validateUsername(username) && validatePassword(password);
}

void displayLoginResult(const std::string& username,
                        const std::string& password) {
    if (authenticateUser(username, password)) {
        std::cout << "Login validation successful." << std::endl;
    } else {
        std::cout << "Invalid username or password." << std::endl;
    }
}