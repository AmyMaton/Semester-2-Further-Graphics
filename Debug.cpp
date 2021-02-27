#include "Debug.h"

Debug::Debug()
{

}

Debug::~Debug()
{

}

void Debug::DebugMessagePrint()
{
	static int ID = 0;
	char ErrorID[1024];
	sprintf_s(ErrorID, "the number is %d \n", ID);
	OutputDebugStringA(ErrorID);
	ID++;
}