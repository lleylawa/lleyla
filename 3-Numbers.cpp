#include <iostream>
using namespace std;

int main() {
int n, even, odd;
cin >> n;
even=0;
odd=0;
for(int i=0; i<n; i++) {
	int num;
	cin >> num;
if(num%2 == 0) {
	even ++;
} else {
	odd ++;
}
}
cout << "Odds: " << odd << endl;
cout << "Evens: " << even << endl;
return 0;
}