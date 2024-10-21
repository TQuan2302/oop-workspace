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
            for(int i = 0; i<entities.size() && i <= maxIterations; i++){
                // cout << entities.at(i)->getType() << endl; 
                if(entities.at(i)->getType() == GameEntityType::ShipType){
                    entities.at(i)->move(1,0); //Move the ship

                    for(int j = 0; j<entities.size(); j++){
                        if(entities.at(i)->getType() == GameEntityType::MineType){
                            if(Utils::calculateDistance(entities.at(i)->getPos(), entities.at(j)->getPos()) <= mineDistanceThreshold){
                                Mine* temp  = dynamic_cast<Mine*>(entities.at(j));
                                temp->explode();  
                                countShip--; 
                            }
                            if(countShip == 0){
                                return; 
                            }
                        }
                    }
                }
            }
        }

};

#endif