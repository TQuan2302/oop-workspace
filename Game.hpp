#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
using namespace std; 
#include "GridItem.hpp"
#include "Goal.hpp"
#include "Experiment.hpp"
#include "Scientist.hpp"

enum class GameState {
    WIN,
    LOSE,
    PLAYING
};

class Game{
    int width, height;
    Scientist scientist;
    Goal goal;
    std::vector<Experiment> experiments;
    std::vector<std::vector<GridItem*>> grid;
    GameState gameState;
    int playerXCoor, playerYCoor;
};

#endif