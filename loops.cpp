//Q #11: Write a program to print numbers from 1 to 10 using a for loop.
//Answer
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    return 0;
}
//Q #12: Write a program to find the sum of the first n natural numbers using a for loop.
//Answer
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "The sum of the first " << n << " natural numbers is: " << sum;

    return 0;
}
//Q #13: Write a program to print the multiplication table of a number entered by the user using a for loop.
//Answer
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Multiplication table of " << num << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}
//Q #14: Write a program to print the factorial of a number using a while loop.
//Answer
#include <iostream>
using namespace std;

int main() {
    int num, i = 1, factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    while (i <= num) {
        factorial *= i;
        i++;
    }

    cout << "The factorial of " << num << " is: " << factorial;

    return 0;
}
//Q #15: Write a program to reverse a given number using a while loop.
//Answer
#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    cout << "The reverse of the number is: " << reverse;

    return 0;
}
//Q #16: Write a program to check whether a number is prime or not using a for loop.
//Answer
#include <iostream>
using namespace std;

int main() {
    int num, flag = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not a prime number.";
    }
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 1) {
            cout << num << " is not a prime number.";
        }
        else {
            cout << num << " is a prime number.";
        }
    }
return 0;
}
//Q #17: Write a program to calculate the sum of digits of a number using a while loop.
//Answer
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    cout << "The sum of the digits is: " << sum;

    return 0;
}
//Q #18: Write a program to print the Fibonacci series up to n terms using a for loop.
//Answer
#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << t1 << ", ";
        }
        else if (i == 2) {
            cout << t2 << ", ";
        }
        else {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            cout << nextTerm << ", ";
        }
    }

    return 0;
}
//Q #19: Write a program to display the sum of even numbers between 1 and 50 using a for loop.
//Answer
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "The sum of even numbers between 1 and 50 is: " << sum;

    return 0;
}
//Q #20: Write a program to generate the following pattern using a nested for loop: 
//* 
//* * 
//* * * 
//* * * * 
//* * * * *
//Answer
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
