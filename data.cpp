#pragma once
#include <stdexcept>

namespace data
{
<<<<<<< HEAD
    struct Data
    {
        Data() = default;
        Data(std::string datacopy)
        {
=======
	struct Data
	{
		Data(string data)
		{
			string day = data.substr(0,2);
			string month = data.substr(3,2);
			string year = data.substr(6,4);
>>>>>>> 470d6058394c7827c889b163a2acd942845b5ad6

            std::string DD = datacopy.substr(0, 2);
            std::string MM = datacopy.substr(3, 2);
            std::string YY = datacopy.substr(6, 4);
            this->day = atoi(DD.c_str());
            this->month = atoi(MM.c_str());
            this->year = atoi(YY.c_str());
        }

<<<<<<< HEAD
        Data operator = (const Data& rhs)
        {
            day = rhs.day;
            month = rhs.month;
            year = rhs.year;

            return *this;
        }

        int day;
        int month;
        int year;
    };
}
=======
		int day;
		int month;
		int year;
	
	};
//"12.03.2024"

}
>>>>>>> 470d6058394c7827c889b163a2acd942845b5ad6
