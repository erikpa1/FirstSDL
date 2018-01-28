#pragma once
#include <string>
#include <vector>
#include "Renderable.h"
#include "DebugMethod.h"

using namespace std;

class DebugClass
{
public:
	DebugClass(string name, int ID);
	~DebugClass();
	
	void ActivationFlow(int methodID);
	void DeactivateFlow(int methodID);
	void CreateMethod(string name, int methodID);
	void Rendraw(sf::RenderWindow &window);

	int GetClassID(){return _objectID;};


private:

	vector<DebugMethod> _methods;
	string _nameOfObject;
	int _objectID;






};

