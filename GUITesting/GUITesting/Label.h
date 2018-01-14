#pragma once
#include "Renderable.h"
#include <string>

using namespace std;

class Label : public Renderable
{
public:
	Label();
	Label(std::string text);
	Label(std::string text, const sf::Vector2f universal);
	Label(std::string text, const sf::Vector2f position, const sf::Vector2f dimension);
	~Label();

	void Start();
	void Update();
	void Render();
	void SetText(std::string text);

	sf::Text GetText() const { return _actualText; };




private:

	
	void CommonConstructor();
	sf::Text _actualText;






};

