#include "pch.h"
#include "CSilce.h"
#include "CSilce.h"





CSilce::~CSilce()
{
}

CSilce::CSilce()
{

}

CSilce:: CSilce(bool b0, bool b1, bool b2, bool b3, bool b4, bool b5, bool b6, bool b7, bool b8, bool b9, bool b10, bool b11, bool b12, bool b13, bool b14, bool b15)
{
	Lut[0] = b0;
	Lut[1] = b1;
	Lut[2] = b2;
	Lut[3] = b3;
	Lut[4] = b4;
	Lut[5] = b5;
	Lut[6] = b6;
	Lut[7] = b7;
	Lut[8] = b8;
	Lut[9] = b9;
	Lut[10] = b10;
	Lut[11] = b11;
	Lut[12] = b12;
	Lut[13] = b13;
	Lut[14] = b14;
	Lut[15] = b15;

}




bool CSilce::Out(bool a,bool b, bool c, bool d)
{
	int f = a * 8 + b * 4 + c * 2 + d * 1;
	return Lut[f];
}
