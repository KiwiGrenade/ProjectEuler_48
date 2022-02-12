#include <iostream>
using namespace std;



int main()
{
    //unsigned long long int series[1000]{0};
    unsigned long long sum = 0;
    for (signed long long a = 1; a <= 1000; a++)
    {
        unsigned long long i = 1;
        for (unsigned long long n = 1; n <= a; n++)
        {
            i *= a;
        }
        sum += i;
        cout << sum << endl;
    }

    return 0;
}
