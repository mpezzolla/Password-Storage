using namespace std;
#include <cmath>
#include <iostream>
#include <vector> //needed for dynamic username and password storage
#include <string> //needed for getline
#include <cctype> //checks for special characters
#include <limits> //needed for cin.ignore

string username;
string password;
vector<string> u1 = {}; //dynamic storage for usernames
vector<string> p1 = {}; //dynamic storage for passwords
int user_input;

void message1() {
	cout << "Username must be 8 characters long and not have any spaces" << endl;
}
void message2() {
	cout << "Password must be at least 8 characters long and have at least one special character" << endl;
}
bool hasUpper(const string& s) {
	for (char c : s) //goes through every character one by one
		if (isupper(c)) return true; //checks if any character is an uppercase
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
	while (username.length() < 8 || hasSpace(username))
	{
		message1();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, username); // getline not cin to check for 
		//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	u1.push_back(username); //adds approved username to the vector


	while (password.length() < 8 || !hasUpper(password) || !hasSpecialChar(password))
	{
		message2();
		cin >> password;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	p1.push_back(password); //adds approved password to the vector



	cout << "Enter another set of credentials? Press 5 to do so or any other key to exit" << endl << endl;
	cin >> user_input;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (user_input == 5) {		
		message1();
		message2();
		cout << "Username:" << endl;
		getline(cin, username); //to check for spaces in username
		cout << "Password:" << endl;
		cin >> password;
		Username_Password_Conditions_and_Display(username, password);

	}

	else
	{
		cout << endl;
		cout << "The vector contains these credentials:" << endl;
		cout << "Usernames:" << endl;
		for (const auto& name : u1) {
			cout << name << endl << " "; //displays usernames stored in the vector
		}

		cout << endl;
		cout << endl << "Passwords:" << endl;
		for (const auto& pass : p1) {
			cout << pass << endl << " "; //displays passwords stored in the vector
		}
	}

}


int main()
{
		cout << "Please Sign in Below." << endl;
		message1();
		message2();
		cout << "Username:" << endl;
		getline(cin, username); //to check for spaces in username
		cout << "Password:" << endl;
		cin >> password;
		Username_Password_Conditions_and_Display(username, password);

		cout << endl << endl;
		cout << "Goodbye!" << endl;
		cout << "Enter any key to exit" << endl;
		string exit;
		cin >> exit;
		return 0;
}

// Hello, my name is Marco. If you're reading this, you probably found this through the listed projects section on my resume. 
// Thank you for taking the time to look at this and for your consideration! I'm currently a Dev/SysOps professional with a strong interest in programming and software development. 
// I have experience in various programming languages and frameworks, and I enjoy solving complex problems through code. 
// If you have any questions or would like to discuss potential opportunities, please feel free to reach out. 
// Thank you again for your time and consideration!