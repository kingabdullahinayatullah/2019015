
#include <iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	char name1[10];
	char name2[10];
	int age1;
	int age2;
	fout.open("task_2.txt");
	if (fout)
	{
		cout << "writing to the file\n\nenter your name:";
		cin >> name1;
		cout << "enter your age:";
		cin >> age1;
		fout << name1 << " "<<age1;
		fout.close();


	}
	else cout << "error writing file";
	ifstream fin;
	fin.open("task_2.txt");
	if (fin)
	{
		cout << "\n\nreading from this file";
		fin >> name2;
		fin >> age2;
		cout << endl << name2 << endl << age2 << endl;
		fin.close();

	}
	else cout << "error reading file";


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
