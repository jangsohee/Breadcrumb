#include <iostream>
#include <Windows.h>
#include <map>
#include <string>
using namespace std;

multimap<int, string > mis;

int main()
{

	cout << "A" << '\t' << "B" << endl;

	return 0;

	string mecabTotalTFName = "../../../../keyword manager DB/4.total_TF_input/00total_TF_input.txt";
	

	while (1)
	{

		freopen(mecabTotalTFName.c_str(), "r", stdin);
		
		string str;
		cin >> str;



		Sleep(30000000);
	}



}