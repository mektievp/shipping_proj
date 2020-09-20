#ifndef STANDARD_H
#define STANDARD_H
#include <iostream>
#include "Delivery.h"

class Standard: public Delivery {
    public:
        Standard(std::string sender_name, std::string date_scheduled, std::size_t weight);
        std::size_t get_weight();
        std::string get_sender_name();
        std::string get_date_scheduled();
        void display();

    protected:

    private:
        std::size_t weight;
};

#endif