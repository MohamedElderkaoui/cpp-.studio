#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

double readTemperature() {
    return 20.0 + (rand() % 20); // Generate a temperature between 20.0 and 39.0
}

void waitSeconds(int seconds) {
    this_thread::sleep_for(chrono::seconds(seconds)); // Sleep for the specified number of seconds
}

int main() {
    const double TEMPERATURE_LIMIT = 35.0; // Set the temperature threshold
    srand(time(0)); // Initialize random seed

    while (true) {
        double currentTemp = readTemperature(); // Corrected: declare variable and assign value
        
        cout << "Current temperature: " << currentTemp << "C" << endl; // Corrected: fixed output format

        if (currentTemp > TEMPERATURE_LIMIT) {
            cout << "Warning: Temperature exceeds " << TEMPERATURE_LIMIT << "C!" << endl; // Temperature exceeds limit
        }

        waitSeconds(1); // Wait for 1 second before reading temperature again
    }

    return 0;
}
