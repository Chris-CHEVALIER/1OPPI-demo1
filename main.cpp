#include "User.cpp"

int main()
{
    cout << "Hello World!" << endl;
    int number = 65;
    char character = 65;

    string firstName = "Chris";
    string lastName = "Chevalier";

    cout << firstName << " " << lastName << endl;

    // camelCase / PascalCase / kebab-case / snake_case

    User loukas("Loukas", "Poirier", 18, "loukas.poirier@ecole-hexagone.com");
    User ramla("Ramla", "Argui", 21, "ramla.argui@ecole-hexagone.com");
    User lynn("Lynn", "Bonniord", 20, "lynn.bonniord@ecole-hexagone.com");

    loukas.display();
    ramla.display();
    lynn.display();

    return 0;
}
