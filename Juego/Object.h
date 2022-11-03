#ifndef OBJECT_H
#define OBJECT_H
#include <SFML/Graphics.hpp>
#include <string>


using namespace sf;


class Object {
public:
	Object(std::string fname);
	void Draw(RenderWindow &window);
	bool CollideWith(const Object &o) const;
protected:
	Texture m_texture;		///Imagen
	Sprite m_sprite;			///
};

#endif

