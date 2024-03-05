#include <iostream>
#include <string>
using namespace std;
class Cricketer
 {
protected:
string name;
    int age;
public:
    void inputData()
	 {
         cout << "Enter name of cricketer: ";
         getline(cin, name);
         cout << "Enter age of cricketer: ";
         cin >> age;
         cin.ignore(); 
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;
public:
    void inputData() {
        Cricketer::inputData();
         cout << "Enter total runs: ";
         cin >> totalRuns;
         cout << "Enter best performance: ";
         cin >> bestPerformance;
    }
    
    void calculateAverageRuns() {
        averageRuns = static_cast<float>(totalRuns) / 5; // Assuming 5 matches played
    }
    
    void displayData() {
         cout << "\nBatsman Details:\n";
         cout << "Name: " << name <<  endl;
         cout << "Age: " << age <<  endl;
         cout << "Total Runs: " << totalRuns <<  endl;
         cout << "Average Runs: " << averageRuns <<  endl;
         cout << "Best Performance: " << bestPerformance <<  endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    batsman.calculateAverageRuns();
    batsman.displayData();
    return 0;
}
