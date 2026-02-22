#include "calculator.h"
#include "GradeUtils.h"
// #include "Student.h"
#include<vector>
using namespace std;

double calculateSGPA(const vector<Subject>& subjects){
    double totalPoints = 0;
    int totalCredits = 0;

    for (const auto& subject : subjects){
        int gradePoint = getGradePoint(subject.grade);

        if(gradePoint == -1){
            continue; //Skip Invalid Grade
        }

        totalPoints += subject.credit * gradePoint;
        totalCredits += subject.credit;
    }

    if (totalCredits == 0){
        return 0.0;
    }

    return totalPoints/totalCredits;
}