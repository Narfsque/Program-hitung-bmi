#include <iostream>
#include <iomanip> 
#include <cmath>   
#include <string>  

using namespace std;

int main()
{

    double weight_kg, height_m, bmi;
    string category;

    cout << "BMI Calculator" << endl;
    cout << "------------------------------------------" << endl;

    cout << "Weight: ";
    cin >> weight_kg;
    cout << "Height: ";
    cin >> height_m;

    if (cin.fail() || weight_kg <= 0 || height_m <= 0) {
        cerr << "Input tidak valid. Berat dan tinggi harus angka positif." << endl;
        return 1; 
    }

    bmi = weight_kg / (height_m * height_m);

    if (bmi < 18.5) {
        category = "underweight";
    }
    else if (bmi <= 22.99) { 
        category = "normal";
    }
    else if (bmi <= 24.99) { 
        category = "overweight";
    }
    else { 
        category = "obesity";
    }

    cout << "\nResult:" << endl;
    cout << fixed << setprecision(2);
    cout << "   BMI " << bmi << endl;

    cout << "   You are '" << category << "'" << endl;

    return 0;
}