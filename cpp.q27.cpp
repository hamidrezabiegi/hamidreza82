#include <iostream>
using namespace std;
int main()

{
long i, j = 0;
cin >> i;

for (j = 0; i > 0; i /= 10)
j = j * 10 + i % 10;
cout << j;

}
