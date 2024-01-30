#include <iostream>
using namespace std;
int main() {
   int n, i;
   float sum = 0.0, avg;
   float num[] = {24, 56, 39, 3, 9};
   n = sizeof(num) / sizeof(num[0]);
   for(i = 0; i < n; i++)
     sum += num[i];
   avg = sum / n;
   cout<<"Average of all array elements is "<<avg;
   return 0;
}

/*
#include<iostream>
using namespace std;

int main(){
    int x, int y;
    float num[100], sum=0.0, average;

    cout << "Enter the Numbers of Data: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! Number range should be 1 to 100" << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}

*/


