#include <iostream>
#include "AsteroBocal.h"
#include "BocalSteroid.h"
#include "MiningBarge.h"

int main()
{
	DeepCoreMiner	d;
	StripMiner		s;
	AsteroBocal		a;
	BocalSteroid	b;
	MiningBarge		m;

	d.mine(&a);
	s.mine(&a);
	d.mine(&b);
	s.mine(&b);

	m.equip(&d);
	m.equip(&s);

	m.mine(&a);
	m.mine(&b);
	return 0;
}