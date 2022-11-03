#include <SFML/Graphics.hpp>
#ifndef GAME_H
#define GAME_H
#include "Scene.h"


using namespace sf;

class Game {
public:
	Game();
	void Run();		///Bucle
	void ProcessEvents();
	void Update();
	void Draw();
	void SetScene(Scene *next_scene);
private:
	///Atributo del inicializador
	RenderWindow m_window;
	Scene *m_scene;
	
};

#endif
