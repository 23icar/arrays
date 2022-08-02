#include <iostream>
using namespace std;
int main()
{
    int marksInSubjects[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks in "<<i+1<<" subject " <<endl;
        cin >> marksInSubjects[i];
    }
    for (int j = 0; j < 5; j++)
    {
        cout << "This is the increment in your marks for good handwriting " << endl;
        marksInSubjects[j] = marksInSubjects[j] + 10;
        cout << marksInSubjects[j]<<endl;
    }
}