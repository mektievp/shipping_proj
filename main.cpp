#include <iostream>
#include <math.h>
#include "Delivery.h"
#include "Standard.h"
#include "Owl.h"
#include "Griffin.h"

int display_menu() {
    for (;;) {
        std::string choice;
        double choice_dbl;
        bool invalid_input = false;
        // int remainder;

        std::cout << "choice: " << choice << std::endl;
        std::cout << "choice_dbl: " << choice_dbl << std::endl;
        std::cout << "invalid_input: " << invalid_input << std::endl;
        // std::cout << "remainder: " << remainder << std::endl;

        std::cout << "Please enter the number corresponding to the menu action." << std::endl;
        // Menu Options
        std::cout << 
            "1. Schedule a new delivery"        << std::endl <<
            "2. Remove a delivery"              << std::endl << 
            "3. Load deliveries from a file"    << std::endl << 
            "4. Save deliveries to a file"      << std::endl << 
            "5. Print all scheduled deliveries" << std::endl <<
            "6. Print deliveries by type"       << std::endl << 
            "7. Quit"                           << std::endl <<
            ">> ";
        std::getline(std::cin, choice);

        // Validate that the input converts to an double
        try {
            choice_dbl = std::stof(choice);
        }
        catch (...) {
            std::cout << "catch (...)" << std::endl;
            invalid_input = true;
        }

        if (!(fmod(choice_dbl, 1) == 0.0)) {
            std::cout << "!(fmod(choice_dbl, 1) == 0)" << std::endl;
            invalid_input = true;
        };

        // Validate that the input is between 1 and 7
        if (choice_dbl < 1 || choice_dbl > 8) {
            std::cout << "choice_dbl < 1 || choice_dbl > 8" << std::endl;
            invalid_input = true;
        }

        if (!invalid_input) {
            std::cout << "(!invalid_input)" << std::endl;    
            std::cout << "User selected " << std::to_string(choice_dbl) << std::endl;
            return (int)choice_dbl;
        }
        std::cout << std::to_string(fmod(choice_dbl, 1) == 0)  << std::endl;
        std::cout << "Input of '" << choice << "' was invalid. Please try again."<< std::endl;
        std::cout << std::to_string(choice_dbl) << std::endl;
        std::cout << std::cin.fail() << std::endl;
    }

}

int main() {
    int menu_choice = display_menu();
    // std::cout << example << std::endl;

    // Delivery test("arg_one", "arg_two");
    // Standard test_two("arg_three", "agr_four", 536);
    // std::cout << test_two.get_sender_name();
    // test.display();
    // test_two.display();
    // test_two.get_sender_name();
    // Owl("test", "twtest", "Test");
    // Griffin("test", "testest", "Test");
    return 0;
}