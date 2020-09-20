#ifndef OWL_H
#define OWL_H
#include <iostream>
// #include "Delivery.h"
#include "Standard.h"

class Owl: public Standard {
    public:
        Owl(std::string sender_name, std::string date_scheduled, std::string id);
        std::string get_id();
        void display();

    protected:

    private:
        std::string id;
};

#endif