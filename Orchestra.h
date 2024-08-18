#ifndef ORCHESTRA_H
#define ORCHESSTRA_H

#include "Musician.h"

class Orchestra{
    private:
        int max_size; 
        int current_size; 
        Musician* list;

    public:
        Orchestra(int size);
        Orchestra();
        int get_current_number_of_members(); 
        bool has_instrument(std::string instrument); 
        Musician *get_members();
        bool add_musician(Musician new_musician);
        ~Orchestra();
};

#endif