// Password Storage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;
#include <cmath>
#include <iostream>

string username;
string password;


void Username_Password_Conditions_and_Display(string username, string password)
{
	while (username.length() < 8)
	{
		cout << "Username must be at least 8 characters long." << endl;
		cin >> username;
	}


	while (password.length() < 8)
	{
		cout << "Password must be at least 8 characters long." << endl;
		cin >> password;
	}

	cout << "Your credentials are:" << endl;
	cout << username << endl;
	cout << password << endl;

}


int main()
{

    cout << "Please Sign in Below:" << endl;;
    cout << "Username:" << endl;
    cin >> username;
    cout << "Password" << endl;
    cin >> password;

	Username_Password_Conditions_and_Display(username, password);


    return 0;

}