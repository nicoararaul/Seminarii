#include "AutoFactory.h"

Auto* AutoFactory::create_auto(int tip)
{
	if (tip == 0) {
		PKW* pkw = new PKW(0,"A","A","A");
		return pkw;
	}else
		if (tip == 1) {
			LKW* lkw = new LKW(0, "A", "A", 0, "A");
			return lkw;
		}
	return nullptr;
}
