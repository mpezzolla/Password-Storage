using namespace std;
#include <cmath>
#include <iostream>
#include <string> //needed for getline
#include <cctype> //checks for special characters

string username;
string password;

bool hasUpper(const string& s) {
	for (char c : s) //goes through every character one by one
		if (isupper(c)) return true; //checks if any character is an uppdercase
	return false;
}

bool hasSpecialChar(const string& s) {
	for (char c : s) 
		if (!isalnum(c)) return true;  // checks if every character is not alphanumeric (i.e., a special character)
	return false;
}

bool hasSpace(const string& s) {
	for (char c : s)
		if (isspace(c)) return true; // checks if any character is a space
	return false;
}

void Username_Password_Conditions_and_Display(string username, string password)
{
	if (true) //if condition needed to give the error message only once
	{
		cout << "Invalid Username. Must be at least 8 characters long and cannot contain a space." << endl;
		//cin >> username;
		getline(cin, username); // getline not cin to check for spaces
	}


	while (username.length() < 8 || hasSpace(username))
	{		//cin >> username;
		getline(cin, username); // getline not cin to check for spaces
	}


	while (password.length() < 8 || !hasUpper(password) || !hasSpecialChar(password))
	{
		cout << "Password must be at least 8 characters long and have at least one special character." << endl;
		cin >> password;
	}

	cout << "Your credentials are:" << endl;
	cout << username << endl;
	cout << password << endl;

}

int main()
{
	cout << "Please Sign in Below" << endl;;
	cout << "Username:" << endl;
	//cin >> username;
	getline(cin, username); //to check for spaces in username
	cout << "Password:" << endl;
	cin >> password;

	Username_Password_Conditions_and_Display(username, password);


	return 0;
}