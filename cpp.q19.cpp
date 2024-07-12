#include <iostream>
using namespace std;
int main() { int a1, a2, a3; int positive_count = 0, negative_count = 0; double sum = 0, average = 0;
cout << "Enter a1: ";
cin >> a1;

cout << "Enter a2: ";
cin >> a2;

cout << "Enter a3: ";
cin >> a3;

if (a1 > 0) {
    positive_count++;
    sum += a1;
} else {
    negative_count++;
    sum += a1;
}

if (a2 > 0) {
    positive_count++;
    sum += a2;
} else {
    negative_count++;
    sum += a2;
}

if (a3 > 0) {
    positive_count++;
    sum += a3;
} else {
    negative_count++;
    sum += a3;
}

average = sum / 3;

cout << "Number of positive numbers: " << positive_count << std::endl;
cout << "Number of negative numbers: " << negative_count << std::endl;
cout << "Average: " << average << std::endl;

return 0;
}











	
	
	
	
	
	
	
	
	
	
	






















