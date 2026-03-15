#include<iostream>
#include<vector>
#include<iomanip> 

#include "Student.h"
#include "calculator.h"
#include "GradeUtils.h"
using namespace std;

void Headerdisplay();
int input_total_course();
void inputSubjects(vector<Subject> subjects, int totalCourse);
void sgpaCalculator(vector<Subject> subjects);

int main(){

    Headerdisplay();

    int total_course = input_total_course(); //Total courses enrolled student
    if(total_course <= 0){
        cout<<"ERROR : Invalid Number of Courses. Existing the program.\n";
        return 0;
    }

    vector<Subject> subjects;
    inputSubjects(subjects, total_course);
    
    
    sgpaCalculator(subjects); // Final SGPA Calculation
    

    return 0;
}

void Headerdisplay(){
    cout<<"\n***********************************************************************\n";
    cout<<"\tWelcome To DU Academic Performance Calculator(SGPA/CGPA)";
    cout<<"\n***********************************************************************\n";
}

int  input_total_course(){
    int num_course;
    cout<<"Enter the Number of Subject Enrolled : ";
    cin>>num_course;
    return num_course;
}

void inputSubjects(vector<Subject> subjects, int totalCourse){
    for(int i = 0; i < totalCourse; i++){
        Subject temp;

        cout<<"\n-------------------Course "<< i + 1 <<" ----------------\n";

        cout<<"Enter Course Name : ";
        cin>>temp.name;

        cout<<"Enter Course Credits : ";
        cin>>temp.credit;

        if(temp.credit <= 0){
            cout<<"Invalid Credits! Try Again.\n";
            i--;
            continue;
        }

        cout<<"Enter Grade (O, A+, A, B+, B, C, D, F) : ";
        cin>>temp.grade;
        if(getGradePoint(temp.grade) == -1){
            cout<<"Invalid Grade! Please Enter again.\n";
            i--;
            continue;
        }
        subjects.push_back(temp);
    }
}


void sgpaCalculator(vector<Subject> subjects){
    double sgpa = calculateSGPA(subjects);

    cout << fixed << setprecision(2);

    cout << "\n====================================";
    cout << "\nYour Calculated SGPA is : " << sgpa;
    cout << "\n====================================\n";

    cout << "\nThank you for using DU Academic Performance Calculator\n";
}