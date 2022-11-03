#ifndef MENU_H
#define MENU_H
#include <SFML/Graphics.hpp>
#include "Game.h"

using namespace sf;

class Menu : public Scene{
public:
	Menu();
	void Update(Game &game);
	void Draw(RenderWindow &window);
private:
	Font m_font;
	Text m_t1, m_t2;
};

#endif

