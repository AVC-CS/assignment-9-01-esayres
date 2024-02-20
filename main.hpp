#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int N = 5;
struct Student
{
    int id;
    string name;
    string major;
};

void makeStudent(Student *student);
void printStudent(Student *head);

void makeStudent(Student *student){
    ifstream file;
    file.open("students.txt");
    if(!file){
        cerr << "FAILED TO OPEN FILE" << endl;
        exit(0);
    }

    // pointer notation for Struct
    for(int i = 0; i < N; i++){
        file >> (student + i)->id >> (student + i)->name >> (student + i)->major;
    }
}
void printStudent(Student *student)
{
    cout << endl;
    for(int i = 0; i < N; i++){
        cout << (student + i)->id << ' ' <<
        (student + i)->name << ' ' << (student + i)->major << endl;;
    }
}