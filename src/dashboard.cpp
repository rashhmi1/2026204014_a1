#include <iostream>

void displayDashboard() {
    std::cout << "\n--- Student Dashboard ---" << std::endl;
    std::cout << "Welcome to the student dashboard." << std::endl;
}
void displayCourseCount(int courseCount) {
    std::cout << "Enrolled courses: " << courseCount << std::endl;
}
void displayPendingAssignments(int count) {
    std::cout << "Pending assignments: " << count << std::endl;
}