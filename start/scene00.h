/**
 * This file is part of a demo that shows how to use RT2D, a 2D OpenGL framework.
 * 
 * - Copyright 2015 Rik Teerling <rik@onandoffables.com>
 *     - Initial commit
 * - Copyright 2015 Your Name <you@yourhost.com>
 *     - What you did
 */

#ifndef SCENE00_H
#define SCENE00_H

#include <vector>
#include <rt2d/timer.h>
#include "player.h"
#include "superscene.h"
#include "basicentity.h"
#include "bullet.h"
#include "loadtiles.h"

class Scene00: public SuperScene
{
	public:
		Scene00();
		virtual ~Scene00();

		virtual void update(float deltaTime);
	
	private:

		LoadTiles* background_entity;
		Player* player_entity;
		BasicEntity* gun_player_entity;

		Timer t;
		int delay;
		float counter;

		std::vector<BasicEntity*> enemies;
		std::vector<BasicEntity*> guns_enemies;
		std::vector<BasicEntity*> blocks;
		std::vector<BasicEntity*> player_bullets;

		int MaxAmmo;
		int MaxMags;
		int CurrentAmmo;
		int CurrentMags;
};

#endif /* SCENE00_H */ 