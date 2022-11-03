#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Menu.h"

using namespace sf;



Game::Game() : 
	m_window(VideoMode(640,480),"Super pong")
{
	///Inicializador
	m_window.setFramerateLimit(60);
	m_scene = new Menu();
	
};


void Game::Run ( ) {
	
	
	while(m_window.isOpen()){
		ProcessEvents();
		Update();
		Draw();
	}
}



///Actualizar
void Game::Update ( ) {
	m_scene->Update(*this);

};


///Dibujar
void Game::Draw ( ) {
	m_scene->Draw(m_window);
}


void Game::ProcessEvents ( ) {
		Event e;
		while(m_window.pollEvent(e)) {
			if(e.type == Event::Closed)
				m_window.close();	
		}
}

void Game::SetScene (Scene * next_scene) {
	delete m_scene;
	m_scene = next_scene;
}

