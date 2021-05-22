#include <iostream> 
#include <string>
#include <fstream>

using namespace std;

string input_string(string vraaglol)
{
    cout << vraaglol;
    string x;
    cin >> x;
    return x;
}

int input_number(string vraaglol)
{
    cout << vraaglol;
    int getal = 0;
    cin >> getal;
    return getal;
}

void registration()
{
    cout << "Welkom random person on the internet :D\n";
    
    int age = input_number("Age: ");
    //check age
    if(age < 18)
    {
        cout << "Gokken onder 18 is nogal ilegaal :) \n";
        return;
    }

    string email = input_string("Email: ");
    string username = input_string("Username: ");
    string password = input_string("Password: ");
    string confirm_password = input_string("Confirm password: ");
    //check if password is valid
    if (password != confirm_password)
    {
        cout << "Password doesn't match ;/\n";
        return;
    }

    cout << age << "\n";
    cout << "Thx now give us your money pls :)\n";

    cout << email << "\n";
    cout << username << "\n";
    cout << password << "\n";
    cout << confirm_password << "\n";
    //check if user exists
    ofstream password_file(username + ".password");
    password_file << password;
}    

bool login()
{
    cout << "Welkom terug :D.\n"; 
    string user = input_string("Username: ");
    string password = input_string("Password: ");
    ifstream password_file(user + ".password");
    if (!password_file.is_open())
    {
        cout << "You don't exist ;( \n";
        return false;
    }
    string correct;
    password_file >> correct;
    if (password == correct)
    {
        cout << "Welkom, pls spend money on our totally not shady website :)\n";
        return true;
    }
    else 
    {
        cout << "Password is incorrect :/\n";
        return false;;
    }
}

//Login and registration 
int main()
{
    cout << "Welkom, wil je inloggen(1) of registeren(2) by deze niet shady site klik dan 1 of 2: ";
    int actie  = 0;
    cin >> actie;
    if (actie == 1) 
    { 
        login();
    }
    else if (actie == 2)
    {
        registration();
    }
    else if (actie == 69)
    {
        cout << "Nice :D\n";
    }
    else 
    {
       cout << "Yeet yourself elsewhere :) \n"; 
    }
    
}