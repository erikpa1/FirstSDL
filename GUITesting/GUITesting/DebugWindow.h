#pragma once
#include <string>
#include <vector>
#include "DebugClass.h"

using namespace std;

static class DebugWindow
{
public:
	DebugWindow();
	~DebugWindow();

	static void RegisterClass(string className, int classID);
	static void RegisterMethod(int classID, string methodName, int methodID);
	

	static void MethodStart(int classID, int methodID);
	static void MethodEnd(int classID, int methodID);
	static void MethodFastBlick(int classID, int methodID);

private:

	static vector<DebugClass> _classes;
	static void RedrawWindow();



};

