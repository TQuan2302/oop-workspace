#ifndef GAME_H
#define GAME_H
#include<iostream>
#include<vector>
#include"Effect.h"
#include"Explosion.h"
#include"Ship.h"
#include"Mine.h"
#include"Utils.h"

using namespace std; 

class Game{
    private:
        vector<GameEntity*> entities; 
        int countShip; 
    public: 
        vector<GameEntity*> get_entities(){
            return  entities; 
        }

        void set_entities(vector<GameEntity*> array){
            entities = array; 
        }

        vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
            //Create number of Ship and Mine: 
            //Ship:     
            int total = numShips + numMines; 
            int tempI = 0; 
            vector<GameEntity*> entities; 
            for(int i = 0; i<numShips; i++){
                tuple<int, int> tempPos = Utils:: generateRandomPos(gridWidth,gridHeight);
                entities.push_back(new Ship(get<0>(tempPos), get<1>(tempPos))); 
                countShip++; 
            }
            for(int i = 0; i<numMines; i++){
                tuple<int, int> tempPos = Utils:: generateRandomPos(gridWidth,gridHeight);
                entities.push_back(new Mine(get<0>(tempPos), get<1>(tempPos))); 
            }

            return entities; 
        }
        void gameLoop(int maxIterations, double mineDistanceThreshold){
            entities = initGame(5,5,20,20);
            int numShip = 0;  
            
            //Count the number of ship: 
            for(GameEntity* countShip: entities){
                if(countShip->getType() == ShipType){
                    numShip++; 
                }
            }

            for(int i = 0; i<maxIterations; i++){
                
                for(GameEntity* ship: entities){
                    if(ship->getType() == ShipType){
                        Ship* castedShip = dynamic_cast<Ship*>(ship); 
                        for(GameEntity* mine: entities){
                            if(mine->getType() == MineType){
                                Mine* castedMine = dynamic_cast<Mine*>(mine);
                                if(Utils::calculateDistance(castedShip->getPos(), castedMine->getPos()) <= mineDistanceThreshold){
                                    Explosion explosion = castedMine->explode(); 
                                    numShip--; 
                                    cout << "Ship has exploded" << endl; 
                                    if(numShip == 0){
                                        return; 
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

};

#endif





























