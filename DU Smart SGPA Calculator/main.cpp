#include<iostream>
#include<vector>
#include<iomanip> 
#include "calculator.h"
#include "GradeUtils.h"
using namespace std;

void display();
int input_course_detail();
double sgpaCalculator(int total_num_course);

int main(){

    display();

    int total_course = input_course_detail();

    double final_sgpa = sgpaCalculator(total_course);

    return 0;
}

void display(){
    cout<<"\n***********************************************************************\n";
    cout<<"\tWelcome To DU Academic Performance Calculator(SGPA/CGPA)";
    cout<<"\n***********************************************************************\n";
}

int  input_course_detail(){
    int num_course;
    cout<<"Enter the Number of Course Enrolled : ";
    cin>>num_course;
    return num_course;
}


double sgpaCalculator(int total_num_course){

}