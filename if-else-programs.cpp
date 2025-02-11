//Q # 01: Write a program to check if a number entered by the user is positive, negative, or zero using if-else:
//Answer
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive.";
    }
    else if (num < 0) {
        cout << "The number is negative.";
    }
    else {
        cout << "The number is zero.";
    }

    return 0;
}
//Q #02: Write a program in C++ that takes a number as input and checks whether it is even or odd using if else.
//Answer
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is an even number.";
    }
    else {
        cout << num << " is an odd number.";
    }

    return 0;
}

//Q #03: Write a program to find the largest of three numbers using if-else:
//Answer
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << num1 << " is the largest number.";
    }
    else if (num2 >= num1 && num2 >= num3) {
        cout << num2 << " is the largest number.";
    }
    else {
        cout << num3 << " is the largest number.";
    }

    return 0;
}
//Q #04: Write a program that asks the user to enter marks and determines the grade using multiple ifelse: 
//• Marks ≥ 90: Grade A                                                        • Marks ≥ 80: Grade B 
//• Marks ≥ 70: Grade C                                                        • Marks ≥ 60: Grade D 
  //                                                • Otherwise: Fail
//Answer
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks (out of 100): ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A";
    }
    else if (marks >= 80) {
        cout << "Grade: B";
    }
    else if (marks >= 70) {
        cout << "Grade: C";
    }
    else if (marks >= 60) {
        cout << "Grade: D";
    }
    else {
        cout << "Grade: Fail";
    }

    return 0;
}
//Q #05: Write a program that checks whether a year entered by the user is a leap year or not using ifelse:
//Answer
#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year.";
    }
    else {
        cout << year << " is not a leap year.";
    }

    return 0;
}
//Q #06: Write a program to check whether a character entered by the user is a vowel or consonant using if-else.
//Answer
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
{
        cout << ch << " is a vowel.";
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is a consonant.";
    }
    else {
        cout << "Invalid input. Please enter a letter.";
    }

    return 0;
}
//Q #07:  Write a program to calculate the electricity bill based on the following conditions: 
//• Up to 100 units: ₹5 per unit                             • 101 to 300 units: ₹7 per unit • Above 300 units: ₹10 per unit                          • Display the total bill
//Answer
#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 5.0;
    }
    else if (units <= 300) {
        bill = 100 * 5.0 + (units - 100) * 7.0;
    }
    else {
        bill = 100 * 5.0 + 200 * 7.0 + (units - 300) * 10.0;
    }

    cout << "Total bill: ₹" << bill;

    return 0;
}
//Q #08: Write a program that takes an integer from the user and determines whether it is a multiple of both 3 and 5 using if.
//Answer
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0) {
        cout << num << " is a multiple of both 3 and 5.";
    }

    return 0;
}
//Q #09: Write a program to check whether an entered character is uppercase, lowercase, digit, or special symbol using multiple if-else.
//Answer
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is an uppercase letter.";
    }
    else if ((ch >= 'a' && ch <= 'z')) {
        cout << ch << " is a lowercase letter.";
    }
    else if ((ch >= '0' && ch <= '9')) {
        cout << ch << " is a digit.";
    }
    else {
        cout << ch << " is a special symbol.";
    }

    return 0;
}
//Q #10:  Write a program to determine the eligibility of a person to vote based on their age (age ≥ 18 is eligible).
//Answer
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote.";
    }
    else {
        cout << "You are not eligible to vote.";
    }

    return 0;
}
