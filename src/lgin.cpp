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