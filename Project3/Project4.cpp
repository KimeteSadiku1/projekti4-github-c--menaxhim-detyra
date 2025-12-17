#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Funksioni per me shtu detyre
void addTask(vector<string>& tasks) {
    string task;
    cout << "Shkruaj detyren: ";
    getline(cin, task);
    tasks.push_back(task);
    cout << "Detyra u shtua me sukses.\n";
}

// Funksioni per me i shfaq detyrat
void showTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "Nuk ka detyra.\n";
        return;
    }

    cout << "\nLista e detyrave:\n";
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

int main() {
    vector<string> tasks;
    int choice;

    do {
        cout << "\n--- Menaxhimi i Detyrave ---\n";
        cout << "1. Shto detyre\n";
        cout << "2. Shfaq detyrat\n";
        cout << "0. Dil\n";
        cout << "Zgjedhja: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1)
            addTask(tasks);
        else if (choice == 2)
            showTasks(tasks);

    } while (choice != 0);

    return 0;
}
