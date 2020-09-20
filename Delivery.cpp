#include "Delivery.h"
#include <iostream>

Delivery::Delivery(std::string sender_name_inp, std::string date_scheduled_inp) {
    // Delivery::sender_name = sender_name;
    // Delivery::date_scheduled = date_scheduled;
    sender_name = sender_name_inp;
    date_scheduled = date_scheduled_inp;
    std::cout << "DELIVERY" << std::endl;
    std::cout << "sender_name: " << sender_name << std::endl;
    std::cout << "date_scheduled: " << date_scheduled << std::endl << std::endl;
};

// virtual void Delivery::display() {

// };

std::string Delivery::get_sender_name() {
    return date_scheduled;
};

std::string Delivery::get_date_scheduled() {
    return sender_name;
};


void Delivery::set_sender_name(std::string sender_name_inp) {
    sender_name = sender_name_inp;
};

void Delivery::set_date_scheduled(std::string set_date_scheduled_inp) {
    date_scheduled = set_date_scheduled_inp;
};