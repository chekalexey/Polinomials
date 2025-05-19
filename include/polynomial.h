#include"monom.h"
#include"tlist.h"

class polynom {
	List<monom> l;
public:
	polynom();
	polynom(monom& m);
	void insert(double c, int exp);
	monom operator[](int index);
	polynom& parser(std::string s);
	void print();

	polynom operator+(polynom& p);
	polynom operator-(polynom& p);
	polynom operator*(polynom& p);
	polynom operator*(double c);
	polynom operator/(monom& m);
	polynom operator/(double c);
	
	polynom& operator+=(polynom& p);
	polynom& operator-=(polynom& p);
	polynom& operator*=(polynom& p);
	polynom& operator*=(double c);
	polynom& operator/=(monom& m);
	polynom& operator/=(double c);
};