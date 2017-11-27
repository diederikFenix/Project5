#pragma once
#include "Player.h"
#include <vector>

class Players {
	std::vector<Player> players;
public:
	Players(int number_of_players) : players(number_of_players, Player()) { }
};