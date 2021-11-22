#include <iostream>

using namespace std;

double meterToKilometer(double meters){
     return meters / 1000;
}

double kilometerToMeter(double kilometers) {
    return kilometers * 1000;
}

double gramsToKilograms(double grams) {
    return grams / 1000;
}

double kilogramsToGrams(double kilograms) {
    return kilograms * 1000;
}

double hoursToMinutes(double hours) {
    return hours * 60;
}

double minutesToHours(double minutes) {
    return minutes / 60;
}

double mileToKilometer(double miles) {
    return miles * 1.60934;
}

double kilometerToMile(double kilometers) {
    return kilometers / 1.60934;
}

double milesToMeter(double miles) {
    return kilometerToMeter(mileToKilometer(miles));
}

double meterToMiles(double meters) {
    return kilometerToMile(meterToKilometer(meters));
}

bool isValidUnit(string unit) {
    if (unit!="kilometer" && unit!="meter" && unit!="gram" && unit!="kilogram" && unit!="hour" && unit!="minute" && unit!="mile")  {
        cout << unit << " is not valid unit" << endl;
        return false;
    }
    return true;
}

string readUnit(){
    string unit;
    cout << "Choose from unit (any of kilometer, meter, gram, kilogram, hour, minute, mile):"<< endl;
    cin >> unit;
    return unit;
}

void printResult(double fromAmount, string fromUnit, double toAmount, string toUnit) {
    cout << fromAmount << " " + fromUnit << " is " << toAmount << " " << toUnit << endl;
}

void convert() {
    
    int amount;
    cout << "Enter amount:" << endl;
    cin >> amount;
    
    string fromUnit = readUnit();
    if (!isValidUnit(fromUnit)) {
        return;
    }
    
    string toUnit = readUnit();
    if (!isValidUnit(toUnit)) {
        return;
    }
    
    //convert kilometers to meters;
    if(fromUnit=="kilometer" && toUnit=="meter") {
        printResult(amount, fromUnit, kilometerToMeter(amount), toUnit);
    }
    //convert meters to kilometers;
    else if(fromUnit=="meter" && toUnit=="kilometer") {
        printResult(amount, fromUnit, meterToKilometer(amount), toUnit);
    }
    //convert grams to kilograms;
    else if(fromUnit=="gram" && toUnit=="kilogram") {
        printResult(amount, fromUnit, gramsToKilograms(amount), toUnit);
    }
    //convert kilograms to grams;
    else if(fromUnit=="kilogram" && toUnit=="gram") {
        printResult(amount, fromUnit, kilogramsToGrams(amount), toUnit);
    }
    //convert hours to minutes;
    else if(fromUnit=="hour" && toUnit=="minute") {
        printResult(amount, fromUnit, hoursToMinutes(amount), toUnit);
    }
    //convert minutes to hours;
    else if(fromUnit=="minute" && toUnit=="hour") {
        printResult(amount, fromUnit, minutesToHours(amount), toUnit);
    }
    //convert miles to kilometers;
    else if(fromUnit=="mile" && toUnit=="kilometer") {
        printResult(amount, fromUnit, mileToKilometer(amount), toUnit);
    }
    //convert kilometers to miles;
    else if(fromUnit=="kilometer" && toUnit=="mile") {
        printResult(amount, fromUnit, kilometerToMile(amount), toUnit);
    }
    //convert miles to kilometers;
    else if(fromUnit=="mile" && toUnit=="meter") {
        printResult(amount, fromUnit, milesToMeter(amount), toUnit);
    }
    //convert kilometers to miles;
    else if(fromUnit=="meter" && toUnit=="mile") {
        printResult(amount, fromUnit, meterToMiles(amount), toUnit);
    }
    //not supported edge case;
    else {
        cout << fromUnit << " to " << toUnit << " convertion is not supported" << endl;
    }
}

int main()  {
    convert();
}
