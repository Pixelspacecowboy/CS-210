#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(int fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    // File names
    string inputFileName = "FahrenheitTemperature.txt";
    string outputFileName = "CelsiusTemperature.txt";
    
    // Open the input file
    ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open the file " << inputFileName << endl;
        return 1;
    }

    // Open the output file
    ofstream outputFile(outputFileName);
    if (!outputFile.is_open()) {
        cerr << "Error: Could not open the file " << outputFileName << endl;
        inputFile.close();
        return 1;
    }

    // Variables to store city names and temperatures
    string city;
    int fahrenheit;
    
    // Read data from the input file and write converted data to the output file
    while (inputFile >> city >> fahrenheit) {
        double celsius = fahrenheitToCelsius(fahrenheit);
        outputFile << city << " " << celsius << endl;
    }

    // Close both files
    inputFile.close();
    outputFile.close();

    cout << "Temperature conversion completed successfully." << endl;
    return 0;
}
