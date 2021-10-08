#include "std_lib_facilities.h"

int main()
{
	constexpr double mtocm = 0.01;
	constexpr double intocm = 2.54;
	constexpr double fttoin = 12;
	double min = 0;
	double max = 0;
	double a;
	vector<double> szamok;
	double sum = 0;
	string unit; 
	while(cin >> a >> unit){
				int error = 0;
			if (unit == "m"){
				szamok.push_back(a);
				sum += a;
			}else if (unit == "in"){
				szamok.push_back(a * intocm * mtocm);
				sum += a * intocm * mtocm;
			}else if (unit == "ft"){
				szamok.push_back(a * fttoin * intocm * mtocm);
				sum += a * fttoin * intocm * mtocm;
			}else if (unit == "cm"){
				szamok.push_back(a * mtocm);
				sum += a * mtocm;
			}else{
				++error;
			}
			if(((a > max) || (max == 0)) && error == 0){
				max = a;
				cout << "largest number so far: " << max << "\n";			
			}			
			else if(((a < min) || (min == 0)) && error == 0){
				min = a;
				cout << "smallest number so far: " << min << "\n";
			} 
			if (error != 0){
				cout << "Value rejected\n";
			}	
	}
	cout << "Smallest number: " << min << "\n";
	cout << "Largest number: " << max << "\n";
	cout << "Number of values entered: " << szamok.size() << "\n";
	cout << "Sum of values: " << sum << "\n";
	sort(szamok);
	for (double values : szamok) cout << values << "\n";
	return 0;
}
