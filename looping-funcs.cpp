#include <iostream>
#define SIZE 20
using namespace std;

struct Student
{
  string studentFName;
  string studentLName;
  int testScore;
  char grade;
};


int main() {
  Student studentList[SIZE];
  int scores[SIZE];

  for (int i = 0; i < SIZE; i++) {
    Student currStud;
    string score;

    cout << "Insert data for Student " << i+1 << endl;
    cout << "First name: ";
    getline(cin, currStud.studentFName);

    cout << "Last name: ";
    getline(cin, currStud.studentLName);

    cout << "score: ";
    getline(cin, score);  
    currStud.testScore = stoi(score);
    scores[i] = stoi(score);

    cout << "===========" << endl;

    studentList[i] = currStud;
  }

  for (int i = 0; i < SIZE; i++)
  {
    cout << studentList[i].testScore << endl;
  }

  int currHighest = studentList[0].testScore;

  for (int i = 0; i < SIZE; i++) {
    int curr = studentList[i].testScore;
    if (curr > currHighest)
    {
      currHighest = curr;
      cout << currHighest << endl;
    }
  }

  cout << "Highest score: " << currHighest;
  return 0;
}
