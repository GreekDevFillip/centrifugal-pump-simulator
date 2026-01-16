#include <iostream>
#include "Pump.h"

int main()
{
    bool finished = false;

    while (!finished)
    {
        std::cout << "\nPump Calculator Menu\n";
        std::cout << "Create a new Pump\n";

        double flow_rate, head, efficiency;

        std::cout << "Enter flow rate (m^3/h): ";
        std::cin >> flow_rate;

        std::cout << "Enter head (m): ";
        std::cin >> head;

        std::cout << "Enter efficiency (0-1): ";
        std::cin >> efficiency;

        while (efficiency < 0 || efficiency > 1)
        {
            std::cout << "Efficiency must be between 0 and 1. Please re-enter: ";
            std::cin >> efficiency;
        }

        Pump pump(flow_rate, head, efficiency);

        std::cout << "\nHydraulic Power: " << pump.hydraulic_power() << " W\n";
        std::cout << "Shaft Power: " << pump.shaft_power() << " W\n";

        char choice;
        std::cout << "\nDo you want to create another pump? (y/n): ";
        std::cin >> choice;

        if (choice == 'n' || choice == 'N')
        {
            finished = true;
        }
    }

    return 0;
}
