// Write a C++ program to calculate the sum of 6 subject and find the percentage.

#include <iostream>

using namespace std;

int main()
{
  double marks[6];

  for (int i = 1; i <= 6; i++)
  {
    cout << "Enter marks for subject " << i << " : ";
    cin >> marks[i];
  }

  double total = 0.00;
  for (int i = 1; i <= 6; i++)
  {
    total += marks[i];
  }

  double percentage = (total * 100) / 600;
  cout << "Total of 6 subjects is  : " << total << "/600." << endl;
  cout << "Percetage of 6 subjects is  : " << percentage << "%." << endl;
}