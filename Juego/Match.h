#ifndef MATCH_H
#define MATCH_H
#include <SFML/Graphics.hpp>
#include "Ball.h"
#include "Player.h"
#include "Game.h"

using namespace sf;

class Match : public Scene {
public:
	Match();
	void Update(Game &game) override;
	void Draw(RenderWindow &window);
private:
	Ball m_ball;
	Player m_p1, m_p2;
};

#endif

