#pragma once
#include "WarehouseLogic.h"
#include <bitset>
typedef unsigned char byte;
using namespace std;

int bitIndexOfBitMask(const byte * bytes,const int bytesCount, byte bitMask)
{

	void* helpPointer;

	for (auto i = 0; i < bytesCount * size_t(bytes); i++)
	{
		int a = (char)(helpPointer) ^ bitMask;
		if (a == 0)
		{		
			return i;
		}						
	}
	
	return -1;

}

int main()
{

	byte byteArray[4] = { 0, 256, 2, 2 };
	byte bitMask = 3;
	*(byteArray+1) <<= 1;
	

	int firstBit = bitIndexOfBitMask(byteArray, 4, bitMask);




	//WarehouseLogic run;

	return 0;
	
}
