#include "GradeUtils.h"
#include<unordered_map>
#include<algorithm>
using namespace std;

int getGradePoint(const string& inputGrade) {
    string grade = inputGrade;

    transform(grade.begin(), grade.end(), grade.begin(), ::toupper);

    static const unordered_map<string, int> gradeMap = {
        {"O",10},
        {"A+",9},
        {"A",8},
        {"B+",7},
        {"B",6},
        {"C",5},
        {"D",4},
        {"F",0}
    };

    auto it = gradeMap.find(grade);
    if(it != gradeMap.end()){
        return it -> second;
    }

    return -1;  //Invalid Grade;
}