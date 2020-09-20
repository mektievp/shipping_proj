#ifndef VANISHINGCABINET_H
#define VANISHINGCABINET_H
#include <iostream>
#include "Delivery.h"

class VanishingCabinet: public Delivery {
    public:
        VanishingCabinet(std::string sender_name, std::string date_scheduled, std::size_t id);
        std::size_t get_id();
        std::string get_sender_name();
        std::string get_date_scheduled();
        void display();

    protected:

    private:
        std::size_t id;
};

#endif