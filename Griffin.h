#ifndef GRIFFIN_H
#define GRIFFIN_H
#include <iostream>
// #include "Delivery.h"
#include "Standard.h"

class Griffin: public Standard {
    public:
        Griffin(std::string sender_name, std::string date_scheduled, std::string id);
        std::string get_id();
        void display();

    protected:

    private:
        std::string id;
};

#endif