#include <iostream>
#pragma once

using namespace std;

class User
{
    // Attributs
private:
    string firstName;
    string lastName;
    int age;
    string email;
    bool connected;

    // Méthodes
public:
    User();
    User(string newFirstName, string newLastName, int newAge, string newEmail);
    void rename(string newFirstName);
    void getOlder();
    bool isConnected() const;
    void display() const;
    ~User();
};