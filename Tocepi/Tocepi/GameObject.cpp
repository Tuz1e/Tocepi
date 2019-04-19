#include "GameObject.h"

//TODO: Bounding Box

GameObject::GameObject()
{
}


GameObject::~GameObject()
{
	DelPtr(mySprite);
}

void GameObject::Init()
{
}

void GameObject::Update(float& aDelta)
{
}

void GameObject::Draw(sf::RenderWindow& aWindow)
{
}

std::string GameObject::GetName()
{
	return myName;
}

tx::Sprite* GameObject::GetSprite()
{
	return mySprite;
}

tz::Vector2f& GameObject::GetPosition()
{
	return myPos;
}

sf::IntRect GameObject::GetBoundingBox()
{
	return mySprite->GetFrame();
}

bool GameObject::GetCollidableFlag()
{
	return myCollidableFlag;
}

bool GameObject::CheckColliding(const sf::RectangleShape& anObj)
{
	//True if intersecting
	return (myBody.getGlobalBounds().intersects(anObj.getGlobalBounds()));
}

void GameObject::SetBody(sf::Vector2f aPos, sf::Color aColour, sf::Vector2f aScale, sf::Vector2f aSize)
{
	myBody = sf::RectangleShape();
	myBody.setPosition(aPos);
	myBody.setFillColor(aColour);
	myBody.setScale(aScale);
	myBody.setSize(aSize);
}

void GameObject::SetBody(sf::Vector2f aPos, sf::Color aColour, sf::Vector2f aScale, sf::Vector2f aSize, sf::Vector2f anOrigin)
{
	myBody = sf::RectangleShape();
	myBody.setPosition(aPos);
	myBody.setFillColor(aColour);
	myBody.setScale(aScale);
	myBody.setOrigin(anOrigin);
	myBody.setSize(aSize);
}

void GameObject::SetBody(sf::RectangleShape aBody)
{
	myBody = aBody;
}

void GameObject::DrawBody(sf::RenderWindow& aWindow)
{
	aWindow.draw(myBody);
}

sf::RectangleShape& GameObject::GetBody()
{
	return myBody;
}