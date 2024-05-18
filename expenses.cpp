#include <iostream>
#include <string>
using namespace std;

class expenses
{
private:
	double amount;
	int date;
	string name;
	int category;
public:
	
	void SetAmount(double valueAmount)
	{
		amount = valueAmount;
		cout << amount;
	}

	void SetDate(int valueDate)
	{
		date = valueDate;
		cout << date;
	}

	void SetName(string valueName)
	{
		name = valueName;
		cout << name;
	}

	void SetCategory(int valueCategory)
	{
		category = valueCategory;
		cout << category;
	}

	double GetAmount()
	{
		return amount;
	}

	int GetDate()
	{
		return date;
	}

	string GetName()
	{
		return name;
	}

	int GetCategory()
	{
		return category;
	}
};

int main()
{
	expenses a;
	a.SetAmount(50000.00);
	/*a.GetAmount();*/

	return 0;
}
