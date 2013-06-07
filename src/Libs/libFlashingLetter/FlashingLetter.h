#include <SFML/Graphics.hpp>

class FlashingLetter : public sf::Text
{
public:
	FlashingLetter();
	~FlashingLetter();

	void flash();
	bool isFlash();

private:
	bool state;
};