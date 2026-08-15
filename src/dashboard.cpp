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
void displayAttendance(double attendance) {
    std::cout << "Attendance: " << attendance << "%" << std::endl;

    if (attendance >= 75.0) {
        std::cout << "Attendance requirement satisfied." << std::endl;
    } else {
        std::cout << "Attendance requirement not satisfied." << std::endl;
    }
}
void displayAttendanceSummary(double attendance) {
    std::cout << "\n--- Attendance Summary ---" << std::endl;
    std::cout << "Attendance: " << attendance << "%" << std::endl;
}