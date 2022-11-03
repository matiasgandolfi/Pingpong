#include "Ball.h"

Ball::Ball() : Object("ball.png") {
	//Constructor
	m_sprite.setScale(0.25,0.25);	//Scale de Sprite
	m_sprite.setPosition(175, 130);
}


void Ball::Update ( ) {
	
	//m_sprite.move(4,2); //Logica de movimiento
	m_sprite.move(m_speed);
	
	auto p = m_sprite.getPosition(); //Recibe la posicion
	
	
	if(p.x<0 || p.x+25>640)			///El +25 es para controlar el punto del sprite
		m_speed.x = -m_speed.x;
	
	
	if(p.y<0 || p.y+25>480)
		m_speed.y = -m_speed.y;
}

void Ball::Bounce ( ) {
	m_speed.x = -m_speed.x;
}

