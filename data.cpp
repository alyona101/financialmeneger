#include<iostream>
#include<string>
using namespace std;
namespace data
{
	struct Data
	{
		Data(string data)
		{
			string day = data.substr(0, 2);
			string month = data.substr(3, 2);
			string year = data.substr(6, 4);

			day = stoi(day);
			month = stoi(month);
			year = stoi(year);
		}

		int day;
		int month;
		int year;
	
	};

}