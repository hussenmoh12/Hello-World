#include<iostream>
#include<string>
using namespace std;
void main()
{
	string name; int age; string address; string university; string job;
	cout << "What is your name and address" << endl;
	getline(cin, name); getline(cin, address);
	cout << "enter your age" << endl;
	cin >> age;
	//FirstTry
	cout << "What is your university" << endl;
	getline(cin, university);

	//More information
	cout << "enter your job" << endl;
	getline(cin, job);

}
