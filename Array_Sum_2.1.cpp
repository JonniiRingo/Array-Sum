#include <iostream> 
using namespace std;

int main(){

int sum = 0;
int size;
int numbers[size];

cout << "Enter a size of array: ";
cin >> size;
cout << "" << endl;
for (int i = 0; i < size; i++)
{
    cout << "Enter a number: ";
    cin >> numbers[i];
    sum += numbers[i];
}

cout << "" << endl;
cout << "The finite sum of the sereies is " << sum << endl; 
cout << "" << endl; 

    return 0;
}