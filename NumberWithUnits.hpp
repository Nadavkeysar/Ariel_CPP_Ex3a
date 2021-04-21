#ifndef NUMBER_WITH_UNITS 
#define NUMBER_WITH_UNITS
#include <iostream>
#include <fstream>
//#include <vector>
//#include <map>
//#include <algorithm>
#include <sstream>
#include <stdexcept>
using namespace std;
namespace ariel {
	class NumberWithUnits {	
		private:
			double number;
			string unit;	
		public:	
			static void read_units(ifstream& stream);
			NumberWithUnits(double, string const&);
			friend ostream& operator<<(ostream& os, const NumberWithUnits& numer);
			friend istream& operator>>(istream& stream, NumberWithUnits& v);
			NumberWithUnits& operator-();
			friend NumberWithUnits operator+(const NumberWithUnits& a, const NumberWithUnits& b);
			NumberWithUnits& operator+();
			friend NumberWithUnits operator +=(NumberWithUnits& lhs,NumberWithUnits const& rhs);
			friend NumberWithUnits operator-(const NumberWithUnits& a, const NumberWithUnits& b);
			NumberWithUnits& operator -=(NumberWithUnits const& rhs);
			NumberWithUnits& operator++();    //++a -prefix
			NumberWithUnits& operator++(int); //a++ -postfix
			NumberWithUnits& operator--(int); //a-- -prefix
			NumberWithUnits& operator--();    //--a -postfix
			friend NumberWithUnits operator*(const double lhs,const NumberWithUnits rhs);
			friend NumberWithUnits operator*(const NumberWithUnits rhs,const double lhs);
			friend NumberWithUnits operator*=(NumberWithUnits rhs,const double lhs);
			bool operator <=(NumberWithUnits const& rhs) const;
			bool operator >=(NumberWithUnits const& rhs) const;
			bool operator>(const NumberWithUnits& b) const;
			bool operator <(NumberWithUnits const& rhs) const;
			bool operator ==(NumberWithUnits const& rhs) const;
			bool operator !=(NumberWithUnits const& rhs) const;

			double getNumber();
			string getUnit();

	
	};
}

//friend int compare(const NumberWithUnits& a, const NumberWithUnits& b);

#endif