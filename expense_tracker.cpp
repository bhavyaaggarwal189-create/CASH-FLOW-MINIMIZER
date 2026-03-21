#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;


struct Expense {
    string type;
    float amount;
};

class ExpenseTracker {
private:
    vector<Expense> expenses;

public:

   
    void addExpense() {
        Expense e;

        cout << "Enter expense type (Food/Travel/Rent): ";
        cin >> e.type;

        cout << "Enter amount: ";
        cin >> e.amount;

        expenses.push_back(e);

        cout << "Expense added successfully!\n";
    }

   
    void showExpenses() {
        if (expenses.empty()) {
            cout << "No expenses added yet.\n";
            return;
        }

        cout << "\n--- All Expenses ---\n";
        for (int i = 0; i < expenses.size(); i++) {
            cout << i + 1 << ". " << expenses[i].type 
                 << " : Rs " << expenses[i].amount << endl;
        }
    }

  
    void showSummary() {
        float total = 0;

        for (int i = 0; i < expenses.size(); i++) {
            total += expenses[i].amount;
        }

        cout << "\nTotal Expenses: Rs " << total << endl;
    }

    
    void saveToFile() {
        ofstream file("expenses.txt");

        if (!file) {
            cout << "Error opening file!\n";
            return;
        }

        for (int i = 0; i < expenses.size(); i++) {
            file << expenses[i].type << " " 
                 << expenses[i].amount << endl;
        }

        file.close();
        cout << "Data saved to expenses.txt\n";
    }
};

int main() {
    ExpenseTracker tracker;
    int choice;

    while (true) {
        cout << "\n===== Expense Tracker =====\n";
        cout << "1. Add Expense\n";
        cout << "2. Show Expenses\n";
        cout << "3. Show Summary\n";
        cout << "4. Save to File\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                tracker.addExpense();
                break;

            case 2:
                tracker.showExpenses();
                break;

            case 3:
                tracker.showSummary();
                break;

            case 4:
                tracker.saveToFile();
                break;

            case 5:
                cout << "Exiting program...\n";
                return 0;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}