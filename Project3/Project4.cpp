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

//funksioni me fshi nje detyre
void deleteTask(vector<string>& tasks) {
    int index;
    cout << "Shkruaj numrin e detyres per fshirje: ";
    cin >> index;
    cin.ignore();

    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Detyra u fshi me sukses.\n";
    }
    else {
        cout << "Numri i detyres nuk eshte valid.\n";
    }
}

// Koment i shtuar per demonstrim te branch dhe pull request
int main() {
    vector<string> tasks;
    int choice;

    do {
        cout << "\n--- Menaxhimi i Detyrave ---\n";
        cout << "1. Shto detyre\n";
        cout << "2. Shfaq detyrat\n";
        cout << "3. Fshi detyre\n";
        cout << "0. Dil\n";
        cout << "Zgjedhja: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1)
            addTask(tasks);
        else if (choice == 2)
            showTasks(tasks);
        else if (choice == 3)
            deleteTask(tasks);

    } while (choice != 0);

    return 0;
}
