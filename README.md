# CASH FLOW MINIMIZING SYSTEM
Our project enables the user to get minimize multiple transactions,track monthly expenditure records,and borrow along with monthly emi notification .
This project helps the user to manage their finance efficiently in order to  get rid of unecessory financial missmanagement .
Our project is mainly divided into three respective modules:-

# CASH FLOW MINIMIZER (MODULE-1) :
## Description
This is a C++ program to minimize financial transactions among a group of people by computing optimal settlements from a transaction matrix.

## Features
- Supports multiple users
- Takes transaction matrix as input
- Calculates net balance
- Minimizes number of transactions
- Displays optimized result

## Concepts Used
- Vectors (STL)
- Priority Queue
- Greedy Algorithm

## How to Run
```bash
g++ cash_flow.cpp -o cashflow
./cashflow
```
For Windows: `cashflow.exe`

## Sample Output
```
Person 1 pays 4000 to Person 2
Person 0 pays 3000 to Person 2
```



# EXPENSE TRACKER (MODULE-2) :
Description:-
This module records and manages user expenses. It allows adding expenses, categorizing them, and showing total spending.
Features:-
* Add expense (type + amount)
* View all expenses
* Show total summary
* Save data to `expenses.txt`
 Concepts Used:-
* Structures
* Vectors (STL)
* File Handling
* Classes
Run Instructions:-
```bash
g++ expense_tracker.cpp -o expense
.\expense.exe
```
Output File -- expenses.txt (stores all expenses)

## BORROW TRACKER :
