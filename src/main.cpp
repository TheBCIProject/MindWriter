/*Author    : Alexandre St-Onge and Julien Aymong
**Created    :
**Modified   : 06/06/2013
*/

#include <SFML/Graphics.hpp>
#include "Libs/libFlashingLetter/FlashingLetter.h"
#include <vector>
#include <string>


#define NUMBER_OF_CHAR 5

using namespace std;

int main()
{
    char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l',
			'm','n','o','p','q','r','s','t','u','v','w','x',
			'y','z'};

    sf::RenderWindow window(sf::VideoMode(600, 600), "MindWriter");

	sf::Clock clock;
	sf::Time delay = sf::seconds(0.333);

    /**
     * Setting up the font and the five sf::Text
    */	
    sf::Font font;
    font.loadFromFile("AverageMono.ttf");
    
    sf::Text word;
    word.setFont(font);
    word.setCharacterSize(70);
    word.setPosition(200, 500);
    word.setColor(sf::Color::Red);


    FlashingLetter choices[NUMBER_OF_CHAR];

    vector<char> select;

    unsigned int position = 0;

    for (int i=0; i<NUMBER_OF_CHAR; ++i)
    {
	choices[i].setFont(font);
	choices[i].setString(letters[i]);
	choices[i].setCharacterSize(58);
	choices[i].setPosition(i*30+200, 200);
	choices[i].setColor(sf::Color::Black);
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
			else if (event.type == sf::Event::KeyPressed)
			{
	    		if (event.key.code == sf::Keyboard::Space)
				{
					select.push_back(letters[position]);
	    		}
			}       	    
		}

        window.clear(sf::Color::White);
		//Drawing of the five sf::Text

		sf::Time elapsed = clock.getElapsedTime();
		


		if(elapsed >= delay)
		{
            if(choices[position].isFlash() == true)
            {
                choices[position].flash(); //Turn the letter black again
                ++position;

                if(position >=NUMBER_OF_CHAR)
                {
                    position = 0;
                }
                
            }			
			choices[position].flash();
            clock.restart();           
		}

        for(int i = 0; i<NUMBER_OF_CHAR; ++i)
        {
            window.draw(choices[i]);
        } 

        if(select.size() != 0)
        {
            string tempWord = ""; //Temporary string that will be display
            for(int i = 0; i<select.size(); ++i)
            {
                tempWord += select[i];
            }
            word.setString(tempWord);
            window.draw(word);
        }
        

        window.display();
		


    }

    return 0;
}
