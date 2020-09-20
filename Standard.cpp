#include "Standard.h"
#include "Delivery.h"
#include <iostream>

Standard::Standard(std::string sender_name_inp, std::string date_scheduled_inp, std::size_t weight_inp): Delivery::Delivery(sender_name_inp, date_scheduled_inp) {

    weight = weight_inp;
    // set_sender_name(sender_name_inp);
    // set_date_scheduled(date_scheduled_inp);
    std::cout << "Standard" << std::endl;
    std::cout << "sender_name: " << sender_name_inp << std::endl;
    std::cout << "date_scheduled: " << date_scheduled_inp << std::endl << std::endl;
};

std::size_t Standard::get_weight() {
    return weight;
};

std::string Standard::get_date_scheduled() {
    return Delivery::get_date_scheduled();
};

std::string Standard::get_sender_name() {
    return Delivery::get_sender_name();
};

void Standard::display() {
    Delivery::display();
    std::cout << "Standard Weight: " << weight << std::endl;
};
