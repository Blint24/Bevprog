#include "std_lib_facilities.h"

int main(){
	cout << "Hello world\n";	
	string first_name;
	cout << "Enter your first name: \n";
	cin >> first_name;
	cout << "Hello, " << first_name << "\n";
	cout << "Enter the name of the person you want to write to: \n";
	cin >> first_name;
	cout << "Dear " << first_name << "\n";
	cout << "How are you? I miss you.\n";
	cout << "Enter your friend's name: \n";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " <<friend_name << " lately? \n";
	char friend_sex = 0;
	cout << "Enter 'm' if friend is male and 'f' if female. \n";
	cin >> friend_sex;
	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name <<  " please ask him to call me. \n";
	}
	else
	{
		cout << "If you see " << friend_name << " please ask her to call me. \n";
	}
	int age = 0;
	cout << "Enter your age: \n";
	cin >> age;
	if (age <= 0 || age >= 110)
	{
		simple_error("you're kidding!");
	}
	else
	{
		cout << "I hear you just had a birthday and you are " << age << " years old. \n";
	}
	if (age < 12)
	{
		cout << "You will be " << age + 1 << ". \n"; 
	}
	else if (age == 17)
	{
		cout << "Next year you will be able to vote. \n";
	}
	else if (age > 70)
	{
		cout << "I hope you are enjoying retirement. \n";
	}
	cout << "Yours sincerly, \n";
	cout << "\n" << "\n";
	cout <<  "Balint \n";
	return 0;
}