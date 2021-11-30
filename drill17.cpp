#include "std_lib_facilities.h"
#include "fstream"


//4.
void print_array10(ostream& os, int* a) {
	for (int i = 0; i<10; i++)
		os << a[i] << " ";
}


//7.
void print_array(ostream& os, int* a, int n) {
	for (int i = 0; i<n; i++)
		os << a[i] << " ";
}


//10.
void print_vector(ostream& os, vector<int> a) {
	for (int i = 0; i<a.size(); i++)
		os << a[i] << " ";
}


int main() {
    
    //1. allocate an array of ten ints
    int* array = new int[10];
    
    //2. printing out the 10 values
    cout << "2.values: ";
    for (int i = 0; i<10; i++) {
        array[i] = i;
        cout << array[i] << " ";
	}
    cout << endl;
    
    //4. print out the values of a
    cout << "4.values: ";
    print_array10(cout, array);
    cout << endl;
    
    //3. delete array
    delete[] array;
    
    //5. allocate an array of ten ints
    cout << "5.values: ";
    int* array5 = new int[10];
    for (int i = 0; i<10; i++) {
    	array5[i] = 100+i;
	}
	print_array(cout, array5, 10);
    cout << endl;
    
    //9. delete array
    delete[] array5;
    
    //6. allocate an array of eleven ints
    cout << "6.values: ";
    int* array6 = new int[11];
    for (int i = 0; i<11; i++) {
    	array6[i] = 100+i;
	}
	print_array(cout, array6, 11);
    cout << endl;
    
    //9. delete array
    delete[] array6;
    
    //8. allocate an array of twenty ints
    cout << "8.values: ";
    int* array8 = new int[20];
    for (int i = 0; i<20; i++) {
    	array8[i] = 100+i;
	}
	print_array(cout, array8, 20);
	cout << endl;
	
    //9. delete array
    delete[] array8;
    
    
    cout << endl;
    //10. vectors
    vector<int> nums5;
    vector<int> nums6;
    vector<int> nums8;
    cout << "5.vector: ";
    for(int i=0; i<10; i++) {
    	nums5.push_back(100+i);
	}
	print_vector(cout, nums5);
	cout << endl;
	cout << "6.vector: ";
	for(int i=0; i<11; i++) {
    	nums6.push_back(100+i);
	}
	print_vector(cout, nums6);
	cout << endl;
    cout << "8.vector: ";
    for(int i=0; i<20; i++) {
    	nums8.push_back(100+i);
	}
	print_vector(cout, nums8);
    	
    return 0;
}