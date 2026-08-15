#include <iostream>
#include <string>

void displayProfile(const std::string& name,
                    const std::string& course) {
    std::cout << "\n--- Student Profile ---" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Course: " << course << std::endl;
}
std::string getStudentId() {
    return "2026204014";
}