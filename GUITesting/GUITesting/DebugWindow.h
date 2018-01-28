#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "DebugClass.h"

using namespace std;

class DebugWindow
{
public:

	static void WatchClass(string className, int classID);
	static void WatchMethod(int classID, string methodName, int methodID);
	static void MethodStart(int classID, int methodID);
	static void MethodEnd(int classID, int methodID);
	static void MethodFastBlick(int classID, int methodID);	
	static void OpenWindow();
	static int GetNumberOfWatchetObjects();

private:
	
	DebugWindow();
	~DebugWindow();

	static void RedrawWindow();




};

