#include "GameObject.h"


std::ostream & operator<<(std::ostream &out, const GameObject &go)
{
	// TODO: insert return statement here
	out << "This game object have " << go.m_Components.size() << " components" << std::endl;
	return out;
}


GameObject::GameObject()
{
}


Component GameObject::getComponent(const int &id)
{
	return m_Components.at(id);
}

void GameObject::addComponent(const Component &newComponent)
{
	m_Components.push_back(newComponent);
}

void GameObject::removeComponent()
{
}

bool GameObject::hasComponent(const int &id) const
{
	if (m_Components.size() == 0)
		return false;

	return true;
}


GameObject::~GameObject()
{
}

