#include "User.hpp"

User::User()
{
    firstName = "John";
    lastName = "Doe";
    age = 30;
    connected = false;
}

User::User(string newFirstName, string newLastName, int newAge, string newEmail)
{
    firstName = newFirstName;
    lastName = newLastName;
    age = newAge;
    email = newEmail;
    connected = false;
}

void User::rename(string newFirstName)
{
    if (newFirstName.size() > 2 && newFirstName.size() < 30)
    {
        firstName = newFirstName;
    }
}

void User::getOlder()
{
    age++;
}

bool User::isConnected() const
{
    return connected;
}

void User::display() const
{
    cout << firstName << " " << lastName << " est un utilisateur de " << age << " ans." << endl;
}

User::~User()
{
    cout << "Mon utilisateur " << firstName << " est détruit." << endl;
}