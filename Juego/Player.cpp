#include "Player.h"

Player::Player(bool player_one) :Object(player_one?"player1.png":"player2.png"){
	
	if(player_one){
		m_sprite.setPosition(20,200);
		m_up = Keyboard::Key::W;
		m_down = Keyboard::Key::S;
	}else{
		m_sprite.setPosition(580,200);
		m_up = Keyboard::Key::Up;
		m_down = Keyboard::Key::Down;
	}
}


void Player::Update() {
	if(Keyboard::isKeyPressed(m_up))
		m_sprite.move(0,-5);
	if(Keyboard::isKeyPressed(m_down))
		m_sprite.move(0,+5);
}
