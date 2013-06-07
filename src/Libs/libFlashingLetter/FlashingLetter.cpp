#include <SFML/Graphics.hpp>
#include "FlashingLetter.h"


FlashingLetter::FlashingLetter()
{
	state = false; 
}
FlashingLetter::~FlashingLetter()
{

}

void FlashingLetter::flash()
{
	if (this->getColor() == sf::Color::Black)
	{
		this->setColor(sf::Color::Green);
		this->state = true;
	}
		
	else
	{
		this->setColor(sf::Color::Black);
		this->state = false;
	}
		
}

bool FlashingLetter::isFlash()
{
	return state;
}