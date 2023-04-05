#include<iostream>
#include<cstring>
using namespace std;

class String {
    private:
        char* str;
        int size;
    public:
        String() {
            size = 0;
            str = new char[size+1];
            str[0] = '\0';
        }
        String(const char* s) {
            size = strlen(s);
            str = new char[size+1];
            strcpy(str, s);
        }
        String(const String& s) {
            size = s.size;
            str = new char[size+1];
            strcpy(str, s.str);
        }
        ~String() {
            delete[] str;
        }
        String operator+(const String& s) {
            String temp;
            temp.size = size + s.size;
            delete[] temp.str;
            temp.str = new char[temp.size+1];
            strcpy(temp.str, str);
            strcat(temp.str, s.str);
            return temp;
        }
        void display() {
            cout << str << endl;
        }
};

int main() {
    String s1 = "KAUSHIK";
    String s2 = " HIRANI";
    String s3 = s1 + s2;
    s3.display();
    return 0;
}
