#include <iostream>
#include <string>  // 문자열을 다루기 위한 헤더 파일
#include <iomanip> // 입출력 조작자를 제공하는 헤더 파일입니다. 입출력 조작자란 입출력 스트림의 형식을 조작하는 데 사용되는 도구입니다.

using namespace std;

struct Book
{
    int id_major;
    int id_minor;
    string location;
    string title;
    string author;
    string publisher;
    string ISBN;
};

int main()
{
    Book book1;

    book1.id_major = 1;
    book1.id_minor = 1001;
    book1.location = "Seoul City Library";
    book1.title = "C++ Programming";
    book1.author = "Bjarne Stroustrup";
    book1.publisher = "Addison-Wesley";
    book1.ISBN = "978-0321563842";

    cout << "ID: " << std::setfill('0') 
         << std::setw(2) << book1.id_major 
         << "-" << std::setw(4) << book1.id_minor << endl;
    cout << "Location: " << book1.location << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Publisher: " << book1.publisher << endl;
    cout << "ISBN: " << book1.ISBN << endl;

    return 0;
}