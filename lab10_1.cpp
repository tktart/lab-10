#include <iostream>
using namespace std;

int main() {
    int count[5] = {};  // Declare array count for counting A, B, C, D, F and initialize all elements = 0
    char grade;  // Declare grade variable to store input
    
    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
    
    int studentNumber = 1;  // Counter for student number
    
    do {
        cout << "Student [" << studentNumber << "]: ";
        cin >> grade;
        
        // Check if the grade is '0' to terminate the loop
        if (grade == '0') {
            break;
        }

        // Check the grade input and increment the corresponding counter
        if (grade == 'A') {
            count[0]++;  // A
        } else if (grade == 'B') {
            count[1]++;  // B
        } else if (grade == 'C') {
            count[2]++;  // C
        } else if (grade == 'D') {
            count[3]++;  // D
        } else if (grade == 'F') {
            count[4]++;  // F
        } else {  // Wrong input
            cout << "Wrong input. Please input again." << endl;
            continue;  // Skip the current iteration and prompt for the grade again
        }

        studentNumber++;  // Move to the next student number
    } while (true);

    // Output the results
    int totalStudents = studentNumber - 1;  // Total number of students (subtract 1 to account for the '0' input)
    cout << "In total " << totalStudents << " students." << endl;
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << endl;

    return 0;
}