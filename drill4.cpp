#include "std_lib_facilities.h"

int main()
{
	double a, b;
	while(cin >> a >> b){
		cout << a << " " << b << "\n";
		if(0.01 > (a - b)){
			if (-0.01 < (a - b)){
				cout << "the numbers are almost equal\n";
			}
		}else if(0.01 > (b - a)){
			if (-0.01 < (b - a)){
				cout << "the numbers are almost equal\n";
			}
		}if(a < b){
			cout << "the smaller value is: " << a << " the larger value is: " << b << "\n";
		}else if (a > b){
			cout << "the smaller value is: " << b << " the larger value is: " << a << "\n";
		}else if(a == b){
			cout << "the numbers are equal\n";
		}
	}
	return 0;
}