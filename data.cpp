#include<iostream>
#include<string>
using namespace std;
namespace data
{
	struct Data
	{
		Data(string data)
		{
			string day = data.substr();
			string month = data.substr();
			string year = data.substr();

			day = stoi(day);
			month = stoi(month);
			year = stoi(year);
		}

		int day;
		int month;
		int year;
	
	};

}