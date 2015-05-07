#include<iostream>
#include<math.h>
using namespace std;

int max(int* arr, int size, int index)
{
    if(( (size-1)-index ) >=2 )
    {
        return arr[index]+max(arr, size, index+2);
    }
    else
        return arr[index];
}
int maxValue(int* arr, int size)
{
    if(size==0)
        return 0;
    else if(size==1)
        return arr[0];
    else
        return max(arr, size, 0)>max(arr, size, 1)?max(arr, size, 0):max(arr, size, 1);
}

int main(int argc, char** argv)
{
    int size = 10;
    int* arr = new int[size];
    for(int i=0; i<size;i++)
        arr[i] = pow(i, 2);
    for(int i=0; i<size;i++)
        cout<< arr[i] << "    ";
    cout<<endl;
    cout << maxValue(arr, size)<<endl;
    return 0;
}
