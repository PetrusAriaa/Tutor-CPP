#include <iostream>
#define SIZE 3
using namespace std;

struct StudentType {
  string studentFName;
  string studentLName;
  int testScore;
  char grade;
};

// define array of StudentType with size of `SIZE`
StudentType students[SIZE];

// function definition to get data from user input
void getData() {
  for (int i = 0; i < SIZE; i++)
  {
    string scoreInput;

    cout << "Masukan data student " << i + 1 << endl;
    cout << "First name: ";
    getline(cin, students[i].studentFName);

    cout << "Last name: ";
    getline(cin, students[i].studentLName);

    cout << "Score: ";
    getline(cin, scoreInput);
    students[i].testScore = stoi(scoreInput);
    cout << "========" << endl;
  }
}

// function definition to set student's grade depending on score
void setGrade() {
  for (int i = 0; i < SIZE; i++){
    if (students[i].testScore > 90 && students[i].testScore <= 100)
    {
      students[i].grade = 'A';
    }
    else if (students[i].testScore > 80)
    {
      students[i].grade = 'B';
    }
    else if (students[i].testScore > 70)
    {
      students[i].grade = 'C';
    }
    else if (students[i].testScore > 60)
    {
      students[i].grade = 'D';
    }
    else if (students[i].testScore <= 60 && students[i].testScore >= 0)
    {
      students[i].grade = 'E';
    }
  }
}

// function definition to get highest student's score
int getMaxScore() {
  int currHighest = students[0].testScore;

  for (int i = 0; i < SIZE; i++) {
    int currValue = students[i].testScore;
    if (currValue > currHighest)
    {
      currHighest = currValue;
    }
  }

  return currHighest;
}

int main() {

  getData();

  setGrade();

  int highestStudentScore = getMaxScore();
  cout << "highest score: " << highestStudentScore << endl;

  // for (int i = 0; i < SIZE; i++) {
  //   cout << "Student " << i + 1 << " | First name: " << students[i].studentFName << endl;
  //   cout << "Student " << i + 1 << " | Last name: " << students[i].studentLName << endl;
  //   cout << "Student " << i + 1 << " | score: " << students[i].testScore << endl;
  //   cout << "Student " << i + 1 << " | grade: " << students[i].grade << endl;
  // }
  return 0;
}