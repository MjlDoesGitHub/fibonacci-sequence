#include <iostream>

void fibCount(int x)
{
    unsigned long long fibOne{ 1 };
    unsigned long long fibTwo{ 1 };

    for (int i = 0; i < x; i++)
    {
        std::cout << fibOne << '\n';
        unsigned long long sum{ fibOne + fibTwo };
        fibOne = fibTwo;
        fibTwo = sum;
    }
}

int main()
{
    int x{ };
    std::cout << "How many integers would you like to display?" << '\n';
    std::cin >> x;
    fibCount(x);
    return 0;
}

// fibonacci sequence: 1 1 2 3 5 8 13 21 34...

/*
* fibOne fibTwo sum
* 1      1      2
* 1      2      3    
* 2      3      5
* 3      5      8
* 5      8      13
* 8      13     21
*/