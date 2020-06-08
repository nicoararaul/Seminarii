#include "PKW.h"


PKW::PKW(int i, std::string ma, std::string mo, std::string so):Auto(i, ma, mo)
{
	sonderausstattung = so;
}

std::string PKW::getSonderausstattung()
{
	return sonderausstattung;
}

void PKW::setSonderausstattung(std::string so)
{
	sonderausstattung = so;
}

ostream& PKW::print(ostream& os)
{
	// TODO: insert return statement here
	os << getId() << ' ' << getMarke() << ' ' << getModell() << ' ' << getSonderausstattung();

	return os;
}


