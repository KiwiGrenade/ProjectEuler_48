#include <iostream>
using namespace std;
#define D_NUMBER 10000000000;

int main()
{
    long long int sum = 0, result = 0;
    for (int i = 1; i < 1000; i++)
    {
        if (i%10 != 0)
        {
            sum = i;
            for (int j = 1; j < i; j++)
            {
                sum = (sum * i) % D_NUMBER;
            }
            result = (result + sum) % D_NUMBER;
            sum = 0;
        }
    }
    cout << result;
    return 0;
}
