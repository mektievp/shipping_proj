#include "VanishingCabinet.h"
#include "Delivery.h"
#include <iostream>

VanishingCabinet::VanishingCabinet(std::string sender_name_inp, std::string date_scheduled_inp, std::size_t id_inp): Delivery::Delivery(sender_name_inp, date_scheduled_inp) {
    id = id_inp;
    set_date_scheduled(date_scheduled_inp);
    set_sender_name(sender_name_inp);
    std::cout << "Standard" << std::endl;
    std::cout << "sender_name: " << sender_name_inp << std::endl;
    std::cout << "date_scheduled: " << date_scheduled_inp << std::endl << std::endl;
};

// virtual void Delivery::display() {

// };

std::size_t VanishingCabinet::get_id() {
    return id;
};

std::string VanishingCabinet::get_date_scheduled() {
    return Delivery::get_date_scheduled();
};

std::string VanishingCabinet::get_sender_name() {
    return Delivery::get_sender_name();
};

void VanishingCabinet::display() {
    Delivery::display();
    std::cout << "Vanishing Cabinet ID: " << id << std::endl;
};
