#include "Auto.h"

Auto::Auto(int i, std::string ma, std::string mo)
{
	id = i;
	Marke = ma;
	Modell = mo;
}

Auto::Auto()
{
}

 std::string Auto::getMarke() const
{
	return Marke;
}

std::string Auto::getModell()
{
	return Modell;
}

int Auto::getId()
{
	return id;
}

void Auto::setMarke(std::string ma)
{
	Marke = ma;
}

void Auto::setModell(std::string mo)
{
	Modell = mo;
}

void Auto::setId(int i)
{
	id = i;
}

bool Auto::operator==(const Auto & masina)
{
	return masina.id== id && masina.Marke == Marke && masina.Modell == Modell;
}

bool Auto::operator!=(const Auto & masina)
{
	return !(*this==masina);
}

ostream& Auto::print(ostream& os)
{
	// TODO: insert return statement here
	os << getId() << ' ' << getMarke() << ' ' << getModell();
	return os;
}

ostream & operator<<(ostream & os, Auto& a)
{
	// TODO: insert return statement here
	//os << a.getId() << ' ' << a.getMarke() << ' ' << a.getModell();
	return a.print(os);
}
