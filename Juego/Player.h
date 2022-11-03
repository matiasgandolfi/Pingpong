#ifndef PLAYER_H
#define PLAYER_H
#include "Object.h"

class Player : public Object {
public:
	Player(bool player_one);
	void Update();
private:
	Keyboard::Key m_up, m_down;
};

#endif

