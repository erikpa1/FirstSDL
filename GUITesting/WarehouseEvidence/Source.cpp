#pragma once
#include "WarehouseLogic.h"
#include <bitset>
typedef unsigned char byte;
using namespace std;

int bitIndexOfBitMask(const byte * bytes,const int bytesCount, byte bitMask)
{

	byte* helpPointer = new byte[bytesCount];
	memcpy(helpPointer, bytes, bytesCount);

	for (auto i = 0; i < bytesCount * sizeof(bytes); i++)
	{
		byte c = *helpPointer ^ bitMask;
		if (c == 0)
		{
			return i;
		} else
		{
			for (auto a = 0; a < bytesCount; a++)
			{
				if (helpPointer[a] >= 128 &&  a != 0)
				{
					helpPointer[a] <<= 1;
					helpPointer[a - 1] += 1;
				} else
				{
					helpPointer[a] <<= 1;
				}
			}
		}
	}
	
	return -1;

}

int main()
{

	byte byteArray[7] = { 0, 256, 2, 0, 0, 0, 6};
	byte bitMask = 3;


	int firstBit = bitIndexOfBitMask(byteArray, 7, bitMask);




	//WarehouseLogic run;

	return 0;
	
}
