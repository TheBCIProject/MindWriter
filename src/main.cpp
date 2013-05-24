#include <SFML/Graphics.hpp>


#define NUMBER_OF_CHAR 5

int main()
{
    char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l',
			'm','n','o','p','q','r','s','t','u','v','w','x',
			'y','z'};

    sf::RenderWindow window(sf::VideoMode(600, 600), "MindWriter");

    /**
     * Setting up the font and the five sf::Text
    */	
    sf::Font font;
    font.loadFromFile("AverageMono.ttf");
    
    sf::Text choices[NUMBER_OF_CHAR];
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

	    	}
	    }       	    
	 }

        window.clear(sf::Color::White);
	//Drawing of the five sf::Text
	for(int i=0; i<NUMBER_OF_CHAR; ++i)
		window.draw(choices[i]);
        window.display();
    }

    return 0;
}
