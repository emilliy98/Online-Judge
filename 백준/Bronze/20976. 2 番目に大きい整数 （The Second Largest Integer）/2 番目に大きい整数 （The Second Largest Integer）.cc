#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::sort;

int main()
{
    int input[3];
    cin >> input[0] >> input[1] >> input[2];
    sort(input, input + 3);
    cout << input[1];
    return 0;
}