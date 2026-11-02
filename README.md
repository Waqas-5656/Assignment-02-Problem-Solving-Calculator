# C++ Programming Assignment 1
## Basic C++ Programming — Arithmetic Operators

**Student:** Qudrat Khan  
**Roll No.:** 31  
**Subject:** Programming Fundamentals  
**Teacher:** Dr. Waseem  
**College:** Government Graduate College Mianwali

## Overview
This repository contains 10 separate beginner-level C++ programs based on the assignment PDF. Each program accepts input from the user and displays the calculated result.

## Assignment rules followed
- Each problem is in its own `.cpp` source file.
- User input is taken using `cin`.
- Arithmetic operators are used as required.
- No `if-else`, `switch`, loops, or user-defined functions are used.
- Each file has its own `main()` function and can be compiled separately.

## Programs
1. `01_shopping_bill.cpp` — calculates the combined cost of notebooks and pens.
2. `02_electricity_bill.cpp` — calculates electricity charges from units and rate.
3. `03_student_marks.cpp` — calculates total, average, and percentage for five subjects.
4. `04_salary_calculator.cpp` — calculates gross salary from basic salary and allowances.
5. `05_petrol_expense.cpp` — calculates fuel consumed and its cost.
6. `06_restaurant_bill_sharing.cpp` — divides a bill equally among friends.
7. `07_age_calculator.cpp` — converts age in years to approximate months, weeks, and days.
8. `08_water_tank_capacity.cpp` — calculates tank volume and capacity in litres.
9. `09_simple_profit.cpp` — calculates total purchase cost, sales revenue, and profit/loss.
10. `10_time_conversion.cpp` — converts seconds into hours, minutes, and remaining seconds.

## How to compile and run
Using a C++ compiler such as g++:

```bash
g++ 01_shopping_bill.cpp -o shopping_bill
./shopping_bill
```

On Windows, run the generated program as:

```bash
shopping_bill.exe
```

Repeat with the desired source filename and a matching output name. In Dev-C++, open one `.cpp` file, then choose **Execute > Compile & Run**.

## Notes
- Enter valid numeric values.
- For the restaurant bill program, enter a non-zero number of friends.
- For the petrol program, enter a non-zero average fuel efficiency (km/litre).
- The age conversions are approximate and use the assignment's assumptions: 12 months, 52 weeks, and 365 days per year.
- The profit/loss result is sales revenue minus purchase cost: positive means profit, negative means loss.
