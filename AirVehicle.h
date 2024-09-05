#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle{
    public:
        AirVehicle();
        AirVehicle(int w);  // creates an AirVehicle with weight w
        void refuel();      // Resets fuel back to 100%
        virtual void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)
        int get_weight(); 
        float get_fuel(); 
        int get_numberOfFlights(); 
        void set_weight(int weight); 
        void set_fuel(float fuel); 
        void set_numberOfFlights(int numFlight); 

    protected:
        int weight;        // the weight of AirVehicle 
        float fuel;        // fuel percentage, initially 100%
        int numberOfFlights; // initially 0



};

#endif
    