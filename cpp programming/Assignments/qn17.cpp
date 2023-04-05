#include <iostream>

using namespace std;

class Cricketer {
    protected:
        string name;
        int age;
    public:
        void input_data() {
            cout << "Enter name and age: ";
            cin >> name >> age;
        }
};

class Batsman : public Cricketer {
    private:
        int total_runs;
        float average_runs;
        int best_performance;
    public:
        void input_data() {
            Cricketer::input_data();
            cout << "Enter total runs, best performance: ";
            cin >> total_runs >> best_performance;
            calculate_average_runs();
        }
        void calculate_average_runs() {
            average_runs = total_runs / 20.0;
        }
        void display_data() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Total Runs: " << total_runs << endl;
            cout << "Average Runs: " << average_runs << endl;
            cout << "Best Performance: " << best_performance << endl;
        }
};

int main() {
    Batsman b;
    b.input_data();
    b.display_data();
    return 0;
}
