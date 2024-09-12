#include <iostream>

using namespace std;
int main() {
    int totalKilometersDrivenPerDay{0};
    int costPerLiterOfGasoline{0};
    int averageKilometersPerLiter{0};
    int parkingFeesPerDay{0};
    int tollsPerDay{0};
    int dailyDrivingCost{0};

    cout << "Enter total kilometers driven per day: ";
    cin >> totalKilometersDrivenPerDay;

    cout << "Enter cost per liter of gasoline: ";
    cin >> costPerLiterOfGasoline;

    cout << "Enter average kilometers per liter: ";
    cin >> averageKilometersPerLiter;

    cout << "Enter parking fees per day: ";
    cin >> parkingFeesPerDay;

    cout << "Enter tolls per day: ";
    cin >> tollsPerDay;

    dailyDrivingCost = tollsPerDay + parkingFeesPerDay +
            (totalKilometersDrivenPerDay / averageKilometersPerLiter) * costPerLiterOfGasoline;

    cout << "You daily driving cost is " << dailyDrivingCost << endl;

    return 0;
}