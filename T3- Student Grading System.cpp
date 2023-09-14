#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() 
{
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    vector<string> studentNames;
    vector<double> studentGrades;
    for (int i=0;i<numStudents;i++) 
    {
        string name;
        double grade;
        cout << "Enter the name of student " << i + 1 << ": ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter the grade for " << name << ": ";
        cin >> grade;
        studentNames.push_back(name);
        studentGrades.push_back(grade);
    }

    double sum = 0;
    double highestGrade = studentGrades[0];
    double lowestGrade = studentGrades[0];
    for (int i = 0; i < numStudents; i++) {
        sum += studentGrades[i];
        if (studentGrades[i] > highestGrade) {
            highestGrade = studentGrades[i];
        }
        if (studentGrades[i] < lowestGrade) {
            lowestGrade = studentGrades[i];
        }
    }
    double average = sum / numStudents;
    cout << "\nGrade Summary:" << endl;
    cout << "Average Grade: " << average << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;
    return 0;
}