#include "std_lib_facilities.h"

int main() {
	
	//1.
	int* p1 = new int(7);		// p1 pointer = num's address
	
	//2.
	cout << "pointer to num's address: " << p1 << endl;
	cout << "p1 is pointing to: " << *p1 << endl;
	
	//3.
	int* array = new int[7];
	for (int i = 0; i<7; i++) {
		array[i] = pow(2, i);
	}
	int* p2 = array; // p2 pointer = array's address
	
	//4.
	cout << "pointer to array's address: "<< p2 << endl;
	cout << "p2 is pointing to: ";
	for (int i = 0; i<7; i++) {
		cout << p2[i] << " ";
	}
	cout << endl;
	
	//5.
	int* p3 = p2;
	
	//6.
	delete p1;
	p1 = p2;
	
	//7.
	delete[] p3;
	p3 = p2;
	
	//8.
	cout << "pointers of p1 and p2: " << p1 << " " << p2 << endl;
	cout << "values of p1: ";
	for (int i = 0; i<7; i++) {
		cout << p1[i] << " ";
	}
	cout << endl;
	cout << "values of p2: ";
	for (int i = 0; i<7; i++) {
		cout << p2[i] << " ";
	}
	
	//10.
	int* array10 = new int[10];
	for (int i = 0; i<10; i++) {
		array10[i] = pow(2,i);
	}
	p1 = array10;
	
	//11.
	int* array11 = new int[10];
	delete[] p2;
	p2 = array11;
	
	//12.
	for (int i = 0; i<10; i++) {
		p2[i] = p1[i];
	}
	
	//13.
	
	vector<int> vec10(10);
	for (int i = 0; i<10; i++) {
		vec10.push_back((2,i));
	}
	
	vector<int> vec11(10);
	
	for (int i = 0; i<10; i++) {
		vec11.push_back(vec10[i]);
	}
	
	return 0;
}