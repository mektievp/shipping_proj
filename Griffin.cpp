#include "Griffin.h"
#include "Standard.h"
#include <iostream>

Griffin::Griffin(std::string sender_name_inp, std::string date_scheduled_inp, std::string id_inp): Standard::Standard(sender_name_inp, date_scheduled_inp, 0) {

    id = id_inp;
    // set_sender_name(sender_name_inp);
    // set_date_scheduled(date_scheduled_inp);
    std::cout << "Standard" << std::endl;
    std::cout << "sender_name: " << sender_name_inp << std::endl;
    std::cout << "date_scheduled: " << date_scheduled_inp << std::endl << std::endl;
};


std::string Griffin::get_id() {
    return id;
};

void Griffin::display() {
    Standard::display();
    std::cout << "Griffin ID: " << id << std::endl;
};
