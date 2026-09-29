#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    13-Projects / 13_01_Beginner / 03_ToDo_List_CLI.cpp

    Concepts: vector<string> + File Handling (ios::app) + CRUD

    This is REAL: Your tasks will stay even after you close program!
    Uses Chapter 12 File Handling

    Features:
    1. Add Task
    2. View All Tasks
    3. Delete Task
    4. Mark as Done
    5. Data saved in todo.txt permanently
*/

vector<string> tasks;
const string FILE_NAME = "13-Projects/13_01_Beginner/todo.txt";

// Load tasks from file to vector when program starts
void loadTasks(){
    tasks.clear();
    ifstream in(FILE_NAME);
    string line;
    while(getline(in, line)){
        if(!line.empty()) tasks.push_back(line);
    }
    in.close();
}

// Save all tasks from vector to file (overwrite)
void saveTasks(){
    ofstream out(FILE_NAME, ios::out | ios::trunc);
    for(string &t : tasks){
        out << t << endl;
    }
    out.close();
}

void addTask(){
    cin.ignore(); // Clear buffer
    string task;
    cout << "Enter new task: ";
    getline(cin, task);
    tasks.push_back(task);
    saveTasks();
    cout << "Task Added! Total tasks: " << tasks.size() << endl;
}

void viewTasks(){
    if(tasks.empty()){
        cout << "No tasks! Your list is empty. Add some tasks!" << endl;
        return;
    }
    cout << "\n--- Your ToDo List (" << tasks.size() << " tasks) ---" << endl;
    for(int i=0; i<tasks.size(); i++){
        cout << i+1 << ". " << tasks[i] << endl;
    }
}

void deleteTask(){
    viewTasks();
    if(tasks.empty()) return;
    int index;
    cout << "Enter task number to delete: ";
    cin >> index;
    if(index < 1 || index > tasks.size()){
        cout << "Invalid number!" << endl;
        return;
    }
    tasks.erase(tasks.begin() + index - 1);
    saveTasks();
    cout << "Task Deleted!" << endl;
}

void markDone(){
    viewTasks();
    if(tasks.empty()) return;
    int index;
    cout << "Enter task number to mark as DONE: ";
    cin >> index;
    if(index < 1 || index > tasks.size()){
        cout << "Invalid number!" << endl;
        return;
    }
    // Add [DONE] prefix if not already done
    if(tasks[index-1].find("[DONE]") == string::npos){
        tasks[index-1] = "[DONE] " + tasks[index-1];
        saveTasks();
        cout << "Task marked as DONE! ✓" << endl;
    } else {
        cout << "Already marked as DONE!" << endl;
    }
}

int main() {
    loadTasks(); // Load previous tasks from file

    cout << "====== TODO LIST - Permanent Storage ======" << endl;
    cout << "File: " << FILE_NAME << " | Loaded " << tasks.size() << " tasks" << endl;

    int choice;
    while(true){
        cout << "\n1. Add Task\n2. View Tasks\n3. Delete Task\n4. Mark as Done\n5. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if(choice==1) addTask();
        else if(choice==2) viewTasks();
        else if(choice==3) deleteTask();
        else if(choice==4) markDone();
        else if(choice==5){
            cout << "Saving and Exiting... Your tasks are safe in todo.txt!" << endl;
            break;
        }
        else cout << "Invalid Choice!" << endl;
    }
    return 0;
}