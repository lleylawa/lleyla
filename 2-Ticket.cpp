
#include <iostream>
using namespace std;

int main() {
int num, firstThreeDig, lastThreeDig, sumFirst, sumLast;
cin >> num;
firstThreeDig = num / 1000;
lastThreeDig = num % 1000;
sumFirst = (firstThreeDig/100) + (firstThreeDig%100/10) + (firstThreeDig % 10);
sumLast = (lastThreeDig/100) + (lastThreeDig%100/10) + (lastThreeDig % 10);

if(sumFirst == sumLast) {
	cout << "YES" << endl;
}
else {
	cout << "NO" << endl;
}
return 0;
}