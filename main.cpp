#include <iostream>
using namespace std;
int main()
{
    const int arrSize = 5;
    
    int numbers[arrSize] = {1, 5, 10, 15, 94};
    
    int number = 0;
    cout<<"Enter the number-> "<<endl;
    cin >> number;
    
    for(int i=0; i<arrSize; i++)
    {
        if(numbers[i] == number)
        {
            cout<<"Found! Position: "<<i<<endl;
        }
    }
}
