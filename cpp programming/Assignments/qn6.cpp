#include <iostream>
#include <string>
using namespace std;

class BookShop {
private:
    string authorName;
    string bookTitle;
    double bookPrice;
    string publisherName;

public:
    void assignValues() {
        cout << "Enter author name: ";
        getline(cin, authorName);
        cout << "Enter book title: ";
        getline(cin, bookTitle);
        cout << "Enter book price: ";
        cin >> bookPrice;
        cin.ignore(); // to ignore the newline character left in the input buffer
        cout << "Enter publisher name: ";
        getline(cin, publisherName);
    }

    void displayValues() {
        cout << "Author name: " << authorName << endl;
        cout << "Book title: " << bookTitle << endl;
        cout << "Book price: " << bookPrice << endl;
        cout << "Publisher name: " << publisherName << endl;
    }
};

int main() {
    BookShop book;

    book.assignValues();
    cout << endl;
    book.displayValues();

    return 0;
}
