# Student Management System (C++)

![C++](https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![GCC](https://img.shields.io/badge/Compiler-GCC%20(g++)-orange?style=for-the-badge&logo=gnu&logoColor=white)
![VS Code](https://img.shields.io/badge/Editor-Visual%20Studio%20Code-007ACC?style=for-the-badge&logo=visualstudiocode&logoColor=white)
![Type](https://img.shields.io/badge/Type-Console%20Application-black?style=for-the-badge)
![Level](https://img.shields.io/badge/Level-Beginner-brightgreen?style=for-the-badge)
![Course](https://img.shields.io/badge/Course-Programming%20Fundamentals-blue?style=for-the-badge)
![Assignment](https://img.shields.io/badge/Assignment-2-purple?style=for-the-badge)
![University](https://img.shields.io/badge/University-Iqra%20University-darkred?style=for-the-badge)
![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)

A simple, menu-driven Student Management System developed in C++ for the Programming Fundamentals – Assignment 2 at Iqra University.

This project demonstrates the basic concepts of C++ programming, including variables, data types, input/output, switch statements, loops, if-else conditions, logical operators, and relational operators.

The system allows users to enter student information, display student records, calculate marks and grades, check pass or fail status, and search for a student using a student ID.

---

## Project Information

| Detail | Information |
|---|---|
| Project Name | Student Management System |
| Language | C++ |
| Course | Programming Fundamentals |
| Assignment | Assignment 2 |
| Programming Level | Beginner |
| Application Type | Console-Based Application |
| Development Tool | Visual Studio Code |
| Compiler | GCC (g++) |
| University | Iqra University |
| Storage | Variables (Single Student Record) |

---

## Project Objectives

The main objectives of this project are:

- Understand the basic syntax of C++.
- Learn how to declare and use variables.
- Understand different data types.
- Take input from users.
- Display information using output statements.
- Use switch statements for menu selection.
- Use do-while loops to repeat the menu.
- Apply if-else and else-if conditions.
- Perform calculations using arithmetic operators.
- Use logical and relational operators.
- Develop basic problem-solving skills.

---

## Features

The program provides the following six menu options:

### 1. Add Student
- Enter student ID.
- Enter student name.
- Enter marks of three subjects.
- Validate marks between 0 and 100.
- Calculate total and average marks.

### 2. Display Student Information
Displays:
- Student ID.
- Student name.
- Marks of all three subjects.
- Total marks.
- Average marks.

### 3. Calculate Marks and Grade

The system calculates the student's average and assigns a grade.

| Average Marks | Grade |
|---|---|
| 90–100 | A |
| 80–89.99 | B |
| 70–79.99 | C |
| 60–69.99 | D |
| Below 60 | F |

### 4. Check Pass or Fail

The program checks the student's average marks.

- Average marks of 50 or above: PASS
- Average marks below 50: FAIL

### 5. Search Student

- Enter a student ID.
- The program compares it with the stored student ID.
- If the IDs match, student information is displayed.
- Otherwise, a Student Not Found message appears.

### 6. Exit

Terminates the program when the user selects option 6.

---

## Technologies Used

- C++ Programming Language
- GCC C++ Compiler
- Visual Studio Code
- Standard C++ Input/Output Library (`iostream`)
- Standard C++ String Library (`string`)

---

## C++ Concepts Used

| Concept | Purpose |
|---|---|
| Variables | Store student information |
| int | Store student ID and menu choice |
| string | Store student name |
| float | Store marks, total, and average |
| bool | Track whether a student record exists |
| cin | Take input from the user |
| cout | Display information |
| switch | Select menu options |
| do-while | Repeat the main menu |
| if | Check conditions |
| else if | Check multiple grade conditions |
| else | Handle alternative conditions |
| break | Exit a switch case |
| Logical Operators | Combine multiple conditions |
| Relational Operators | Compare values |
| Arithmetic Operators | Calculate total and average |
| getline() | Read a complete student name |

---

## How the Program Works

1. The program starts by declaring student-related variables.
2. The main menu is displayed.
3. The user selects an option from 1 to 6.
4. The switch statement executes the selected operation.
5. The program uses conditions to validate information and calculate results.
6. The do-while loop displays the menu again.
7. The program terminates when the user selects option 6.

---

## Grade Calculation

The total marks are calculated using:

```cpp
totalMarks = subject1 + subject2 + subject3;
```

The average is calculated using:

```cpp
averageMarks = totalMarks / 3;
```

The grade is determined using if-else-if conditions.

---

## Pass or Fail Calculation

The program uses this condition:

```cpp
if (averageMarks >= 50)
{
    cout << "PASS";
}
else
{
    cout << "FAIL";
}
```

---

## Requirements

To run this project, you need:

- A computer with Windows, Linux, or macOS.
- Visual Studio Code or another C++ editor.
- GCC C++ compiler (g++).
- A terminal or command prompt.

---

## How to Download the Project

Clone this repository:

```bash
git clone https://github.com/salikhussain71-code/cpp-student-management-system.git
cd cpp-student-management-system
```

Or download the repository as a ZIP file from GitHub.

Open the downloaded project folder in Visual Studio Code.

---

## How to Compile and Run

### Step 1: Open the Project

Open the project folder in Visual Studio Code.

### Step 2: Open the Terminal

Select:

Terminal → New Terminal

### Step 3: Compile the Program

```bash
g++ main.cpp -o StudentManagementSystem
```

### Step 4: Run the Program

For Windows:

```bash
.\StudentManagementSystem.exe
```

For Linux or macOS:

```bash
./StudentManagementSystem
```

---

## Example Output

```text
============================================
       STUDENT MANAGEMENT SYSTEM
============================================
1. Add Student
2. Display Student Information
3. Calculate Marks and Grade
4. Check Pass or Fail
5. Search Student
6. Exit
============================================
Enter your choice: 1

========== ADD STUDENT ==========
Enter Student ID: 101
Enter Student Name: Salik Hussain
Enter Marks of Subject 1: 95
Enter Marks of Subject 2: 90
Enter Marks of Subject 3: 85

Student Added Successfully!
```

Example result:

```text
========== MARKS AND GRADE ==========

Total Marks: 270 / 300
Average Marks: 90%
Grade: A
```

---

## Important Project Limitations

This project follows the restrictions of the Programming Fundamentals assignment.

- It stores one student record at a time.
- Student information is stored in program variables.
- Adding another student replaces the previous student record.
- Information is not permanently saved after the program closes.
- It does not use arrays, functions, classes, structures, databases, or file handling.

These limitations are intentional because the assignment requires basic C++ programming concepts only.

---

## Learning Outcomes

After completing this project, I learned how to:

- Create a menu-driven C++ program.
- Work with variables and basic data types.
- Take and display user input.
- Use switch statements.
- Apply do-while loops.
- Use nested if-else conditions.
- Perform mathematical calculations.
- Compare student IDs.
- Validate user input.
- Solve a basic real-world programming problem.

---

## Future Improvements

Possible improvements for future versions include:

- Support for multiple student records.
- Permanent student data storage.
- Student record updating and deletion.
- Subject-wise result reports.
- A graphical user interface.

These features are not included in the current assignment version.

---

## Author

**Salik Hussain**

BS Computer Science Student  
Iqra University, Islamabad, Pakistan

---

## Academic Purpose

This project was developed as part of the Programming Fundamentals – Assignment 2.

The purpose is to demonstrate practical understanding of basic C++ programming concepts through a simple Student Management System.

---

**Thank you for visiting this repository!**
