using namespace std;
#include <cmath>
#include <iostream>
#include <vector> //needed for dynamic username and password storage
#include <string> //needed for getline
#include <cctype> //checks for special characters

string username;
string password;
vector<string> u1 = {}; //dynamic storage for usernames
vector<string> p1 = {}; //dynamic storage for passwords
int user_input;


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

	/*
		if (true) //if condition needed to give the error message only once
		{
			cout << "Invalid Username. Must be at least 8 characters long and cannot contain a space." << endl;
			getline(cin, username); // getline not cin to check for spaces
			u1.push_back(username); //store username in vector
		}*/



		while (username.length() < 8 || hasSpace(username))
		{
			cout << "Username must be 8 characters long and not have any spaces." << endl;
			getline(cin, username); // getline not cin to check for 
		}

		u1.push_back(username); //adds approved username to the vector


		while (password.length() < 8 || !hasUpper(password) || !hasSpecialChar(password))
		{
			cout << "Password must be at least 8 characters long and have at least one special character." << endl;
			cin >> password;
		}

		p1.push_back(password); //adds approved password to the vector




		cout << "Your credentials are:" << endl;
		cout << username << endl;
		cout << password << endl << endl << endl;


		cout << "Enter another set of credentials? Press 5 to do so or any other key to exit" << endl;
		cin >> user_input;

		if (user_input != 5)
		{
			return; //return to main and complete program
		}
		else
		{
			cout << "Username:" << endl;
			getline(cin, username); //to check for spaces in username
			cout << "Password:" << endl;
			cin >> password;
			Username_Password_Conditions_and_Display(username, password);
		}

	};

int main()
{
		cout << "Please Sign in Below. Username must be 8 characters long and not have any spaces" << endl;
		cout << "Password must be at least 8 characters long and have at least one special character" << endl;

		cout << "Username:" << endl;
		getline(cin, username); //to check for spaces in username
		cout << "Password:" << endl;
		cin >> password;
		Username_Password_Conditions_and_Display(username, password);

		cout << "The vector contains these credentials:" << endl;

		for (const auto& name : u1) {
			cout << name << endl << " "; //displays usernames stored in the vector
		}
		for (const auto& pass : p1) {
			cout << pass << endl << " "; //displays passwords stored in the vector
		}

		cout << endl << endl << endl;
		cout << "Goodbye!" << endl;

		return 0;

}
// Hello, my name is Marco. If you're reading this, you probably found this through the listed projects section on my resume. 
// Thank you for taking the time to look at this and for your consideration! I'm currently a Dev/SysOps professional with a strong interest in programming and software development. 
// I have experience in various programming languages and frameworks, and I enjoy solving complex problems through code. 
// If you have any questions or would like to discuss potential opportunities, please feel free to reach out. 
// Thank you again for your time and consideration!