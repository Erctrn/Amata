#ifndef GAME_OBJECT_
#define GAME_OBJECT_

#include<iostream>
#include<vector>
#include"Component.h"

class GameObject
{

	friend std::ostream& operator<<(std::ostream&, const GameObject&);

public:
	GameObject();

	Component getComponent(const int&);
	void addComponent(const Component &);
	void removeComponent();
	bool hasComponent(const int&) const;

	~GameObject();

private:
	std::vector<Component> m_Components;
};

#endif // !GAME_OBJECT_