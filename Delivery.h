#ifndef DELIVERY_H
#define DELIVERY_H
#include <iostream>

class Delivery {
    public:
        Delivery(std::string sender_name, std::string date_scheduled);
        virtual void display() {
            std::cout << "sender_name: " << get_sender_name() << std::endl;
            std::cout << "date_scheduled: " << get_date_scheduled() << std::endl;
        };

    protected:
        std::string get_sender_name();
        std::string get_date_scheduled();
        void set_sender_name(std::string);
        void set_date_scheduled(std::string);

    private:
        std::string sender_name;
        std::string date_scheduled;
};

#endif