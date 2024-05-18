#include <iostream>
using namespace std;

class DebitCard : public Account
{
public:
	DebitCard();
	

private:
	unsigned long long card_number;
};

