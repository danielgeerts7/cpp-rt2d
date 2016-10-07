/**
* - Copyright 2015 Daniel Geerts <daniel.geerts@live.nl>
*     - Initial commit
*/

#ifndef ENEMIE_H
#define ENEMIE_H

#include "basicentity.h"
#include "player.h"
#include "bullet.h"

class Enemie : public BasicEntity
{
public:
	Enemie();
	~Enemie();

	virtual void update(float deltaTime);

	void checkForPlayerIfWalkingInFieldOfView(Player* p);
	bool getIfPlayerInField();
	bool checkIfPlayerIsInFieldOfView;

	int getEnemieHealth();
	void setEnemieHealth(int h);

	int getSpawnPoint();
	void setSpawnPoint(int spawnPoint);

	int getCurrentWaypoint();
	void setCurrentWaypoint(int waypoint);

	Point2 getNewPosition();
	void setNewPosition(Point2 newSpawnPos);

	int getNewWaypoint();
	void setNewWaypoint(int newWayPoint);

	int gettingHitByPlayerBullets(Bullet* b);

private:
	int fieldOfView;
	int radius;
	int health;

// variables for the enemie spawnpoints
	int spawnForPoint;
	int waypoint;
	Point2 newPosition;
	int newWaypoint;
};

#endif /* ENEMIE_H */