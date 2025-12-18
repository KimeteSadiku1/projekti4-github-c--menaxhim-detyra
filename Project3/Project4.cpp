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
//funksioni me perditesu nje detyre
void editTask(vector<string>& tasks) {
    int index;
    string newTask;

    if (tasks.empty()) {
        cout << "Nuk ka detyra per perditesim.\n";
        return;
    }

    cout << "Shkruaj numrin e detyres per perditesim: ";
    cin >> index;
    cin.ignore();

    if (index > 0 && index <= tasks.size()) {
        cout << "Shkruaj detyren e re: ";
        getline(cin, newTask);
        tasks[index - 1] = newTask;
        cout << "Detyra u perditesua me sukses.\n";
    } else {
        cout << "Numri i detyres nuk eshte valid.\n";
    }
}

//funskioni me i fshi krejt detyrat 
void clearTasks(vector<string>& tasks) {
    tasks.clear();
    cout << "Te gjitha detyrat u fshine.\n";
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
        cout << "4. Perditeso detyre\n"; 
        cout << "5. Fshi te gjitha detyrat\n";
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
        else if (choice == 4)
            editTask(tasks);        
        else if (choice == 5)
            clearTasks(tasks); 

    } while (choice != 0);

    return 0;
}
