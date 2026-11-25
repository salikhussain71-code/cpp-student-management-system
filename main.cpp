
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Student Variables
    int studentID = 0;
    string studentName = "";

    // Subject Marks
    float subject1 = 0;
    float subject2 = 0;
    float subject3 = 0;

    // Result Variables
    float totalMarks = 0;
    float averageMarks = 0;

    int choice;
    int searchID;

    bool studentAdded = false;

    // Main Menu Loop
    do
    {
        cout << "\n";
        cout << "============================================\n";
        cout << "       STUDENT MANAGEMENT SYSTEM\n";
        cout << "============================================\n";

        cout << "1. Add Student\n";
        cout << "2. Display Student Information\n";
        cout << "3. Calculate Marks and Grade\n";
        cout << "4. Check Pass or Fail\n";
        cout << "5. Search Student\n";
        cout << "6. Exit\n";

        cout << "============================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            // OPTION 1: ADD STUDENT
            case 1:
            {
                cout << "\n========== ADD STUDENT ==========\n";

                cout << "Enter Student ID: ";
                cin >> studentID;

                cin.ignore();

                cout << "Enter Student Name: ";
                getline(cin, studentName);

                cout << "Enter Marks of Subject 1: ";
                cin >> subject1;

                cout << "Enter Marks of Subject 2: ";
                cin >> subject2;

                cout << "Enter Marks of Subject 3: ";
                cin >> subject3;

                // Validate Marks
                if (subject1 < 0 || subject1 > 100 ||
                    subject2 < 0 || subject2 > 100 ||
                    subject3 < 0 || subject3 > 100)
                {
                    cout << "\nInvalid Marks! Marks must be between 0 and 100.\n";
                    studentAdded = false;
                }
                else if (studentID <= 0 || studentName.empty())
                {
                    cout << "\nInvalid Student Information!\n";
                    studentAdded = false;
                }
                else
                {
                    totalMarks = subject1 + subject2 + subject3;
                    averageMarks = totalMarks / 3;

                    studentAdded = true;

                    cout << "\nStudent Added Successfully!\n";
                }

                break;
            }

            // OPTION 2: DISPLAY STUDENT
            case 2:
            {
                cout << "\n========== STUDENT INFORMATION ==========\n";

                if (studentAdded == true)
                {
                    cout << "Student ID: " << studentID << endl;
                    cout << "Student Name: " << studentName << endl;

                    cout << "Subject 1 Marks: " << subject1 << endl;
                    cout << "Subject 2 Marks: " << subject2 << endl;
                    cout << "Subject 3 Marks: " << subject3 << endl;

                    cout << "Total Marks: " << totalMarks << " / 300" << endl;
                    cout << "Average Marks: " << averageMarks << endl;
                }
                else
                {
                    cout << "No Student Record Found! Please Add Student First.\n";
                }

                break;
            }

            // OPTION 3: CALCULATE MARKS AND GRADE
            case 3:
            {
                cout << "\n========== MARKS AND GRADE ==========\n";

                if (studentAdded == true)
                {
                    cout << "Total Marks: " << totalMarks << " / 300" << endl;
                    cout << "Average Marks: " << averageMarks << "%" << endl;

                    if (averageMarks >= 90 && averageMarks <= 100)
                    {
                        cout << "Grade: A\n";
                    }
                    else if (averageMarks >= 80)
                    {
                        cout << "Grade: B\n";
                    }
                    else if (averageMarks >= 70)
                    {
                        cout << "Grade: C\n";
                    }
                    else if (averageMarks >= 60)
                    {
                        cout << "Grade: D\n";
                    }
                    else
                    {
                        cout << "Grade: F\n";
                    }
                }
                else
                {
                    cout << "Please Add Student First!\n";
                }

                break;
            }

            // OPTION 4: CHECK PASS OR FAIL
            case 4:
            {
                cout << "\n========== PASS OR FAIL ==========\n";

                if (studentAdded == true)
                {
                    cout << "Student Name: " << studentName << endl;
                    cout << "Average Marks: " << averageMarks << "%" << endl;

                    if (averageMarks >= 50)
                    {
                        cout << "Result: PASS\n";
                        cout << "Congratulations! Student Passed.\n";
                    }
                    else
                    {
                        cout << "Result: FAIL\n";
                        cout << "Student Failed.\n";
                    }
                }
                else
                {
                    cout << "Please Add Student First!\n";
                }

                break;
            }

            // OPTION 5: SEARCH STUDENT
            case 5:
            {
                cout << "\n========== SEARCH STUDENT ==========\n";

                if (studentAdded == true)
                {
                    cout << "Enter Student ID to Search: ";
                    cin >> searchID;

                    if (searchID == studentID)
                    {
                        cout << "\nStudent Record Found!\n";

                        cout << "Student ID: " << studentID << endl;
                        cout << "Student Name: " << studentName << endl;

                        cout << "Subject 1: " << subject1 << endl;
                        cout << "Subject 2: " << subject2 << endl;
                        cout << "Subject 3: " << subject3 << endl;

                        cout << "Total Marks: " << totalMarks << " / 300" << endl;
                        cout << "Average Marks: " << averageMarks << "%" << endl;
                    }
                    else
                    {
                        cout << "\nStudent Not Found!\n";
                    }
                }
                else
                {
                    cout << "Please Add Student First!\n";
                }

                break;
            }

            // OPTION 6: EXIT
            case 6:
            {
                cout << "\n============================================\n";
                cout << "Thank You for Using Student Management System!\n";
                cout << "Program Terminated Successfully.\n";
                cout << "============================================\n";

                break;
            }

            // INVALID MENU CHOICE
            default:
            {
                cout << "\nInvalid Choice! Please Select Between 1 and 6.\n";

                break;
            }
        }

    } while (choice != 6);

    return 0;
}
