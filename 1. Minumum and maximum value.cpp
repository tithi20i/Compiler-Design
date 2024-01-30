/*#include <iostream>
using namespace std;

int main()
{
    int a, max_, min_, _size;
    int array[_size];
    cout << "Enter the size of the array :" ;   //input size
    cin >> _size;

    cout<< "Enter " << _size << "th elements of the array is :" ;   //input array
    for(a = 0; a< _size; a++)
        cin >>array [a];

    max_ = array[0];
    min_ = array [0];

    for (a=1 ; a<_size ; a++)
    {
        if(array[a] > max_)
            max_ = array[a];

        if(array[a] < min_)
            min_ = array[a];
    }
    cout << "Maximum element is :" << max_  ;
    cout << "Minimum element is :" << min_;

return 0 ;
}
*/

#include<iostream>
using namespace std;

int main()
{
  int arr[5], max, min, i;

  cout<<"Enter the elements of array: ";
    for(i=0;i<5;i++)
  cin>>arr[i];

  cout<<"The array element is: ";
    for(i=0;i<5;i++)

  cout<<arr[i]<<"  ";

  max=arr[0];
  min=arr[0];

    for(i=0;i<5;i++) {
     if(max<arr[i])
      max=arr[i];
     else if(min>arr[i])
      min=arr[i]; }

  cout<<"\nMaximum element of the Array is : "<<max;
  cout<<"\nMinimum element of the Array is : "<<min;

  return 0;
}
