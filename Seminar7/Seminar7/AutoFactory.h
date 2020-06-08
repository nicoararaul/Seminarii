#pragma once
#include "src/Auto.h"
#include "src/PKW.h"
#include "src/LKW.h"


class AutoFactory
{
public:
	Auto* create_auto(int tip);

};

