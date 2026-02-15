#include<iostream>
#include<vector>
using namespace std;

void display();

int main(){

    display();

    return 0;
}

void display(){
    cout<<"\n***********************************************************************\n";
    cout<<"\tWelcome To DU Academic Performance Calculator(SGPA/CGPA)";
    cout<<"\n***********************************************************************\n";

    int num_Course;
    cout<<"\nEnter a Number of Courses You Enrolled : ";
    cin>>num_Course;

    //Checking invalid Negative Input Course
    if(num_Course <= 0){
        cout<<"ERROR : Invalid Number of courses. Existing the program..."<<endl;
        return;
    }

    vector<string> course_Name = {};

    for(int i = 1; i <= num_Course; i++){
        string temp_course_Name;
        cout<<"Enter a Course Name "<< i <<":";
        cin>>temp_course_Name;
        course_Name.push_back(temp_course_Name);
    }


}