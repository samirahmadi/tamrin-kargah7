#include <iostream>

using namespace std;

long fibo(long number);

int main()
{
	int n = 1000;
	for (int i = 0; i < n; i++) {
		cout << fibo(i) << " ";
	}

	return 0;
}

long fibo(long number) {
	if ((number == 0) || (number == 1)) {
		return number;
	}
	else {
		return fibo(number - 1) + fibo(number - 2);
	}
}