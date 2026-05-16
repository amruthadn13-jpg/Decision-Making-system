# C++ Decision Maker Console

## Overview

This project is a C++ console application that demonstrates the use of decision-making statements such as `if`, `else if`, and `switch`.

The program performs three practical tasks:

* Checks voting eligibility based on age
* Assigns a grade based on marks
* Performs basic arithmetic operations using a menu-driven calculator

---

## Concepts Covered

* Conditional statements (`if`, `else if`, `else`)
* Switch-case statements
* Relational operators
* User input and output
* Basic arithmetic operations

---

## Project Description

The application is divided into three sections.

### 1. Voting Eligibility Checker

The user enters their age. The program determines whether the user is eligible to vote.

* Age 18 or above → Eligible to vote
* Age below 18 → Not eligible

### 2. Grade Classification

The user enters marks, and the program assigns a grade based on predefined ranges.

* 90 and above → Grade A
* 75 to 89 → Grade B
* 50 to 74 → Grade C
* Below 50 → Fail

### 3. Menu-Driven Calculator

The user enters two numbers and selects an operation from a menu.

Available operations:

* Addition
* Subtraction
* Multiplication
* Division

The program uses a `switch` statement to execute the selected operation. Division by zero is handled safely.

---

## Sample Output

```text
========== Decision Maker Console ==========

Enter your age: 21
You are eligible to vote.

Enter your marks: 88
Grade: B

Enter two numbers: 10 5

Calculator Menu
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice: 1
Result: 15
```

---

## Learning Outcomes

* Writing conditional logic in C++
* Using nested decision structures
* Implementing switch-case menus
* Handling invalid input conditions
* Building small real-world console applications

---

## Real-World Applications

* Eligibility verification systems
* Academic grading software
* Calculator applications
* Menu-driven command-line tools

---

## Author

Amrutha D N
