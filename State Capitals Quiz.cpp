#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, string> capitals;
	capitals.emplace("Alabama", "Montgomery");
	capitals.emplace("Alaska", "Juneau");
	capitals.emplace("Arizona", "Phoenix");
	capitals.emplace("Arkansas", "Little Rock");
	capitals.emplace("California", "Sacramento");
	capitals.emplace("Colorado", "Denver");
	capitals.emplace("Connecticut", "Hartford");
	capitals.emplace("Delaware", "Dover");
	capitals.emplace("Florida", "Tallahassee");
	capitals.emplace("Georgia", "Atlanta");
	capitals.emplace("Hawaii", "Honolulu");
	capitals.emplace("Idaho", "Boise");
	capitals.emplace("Illinois", "Springfield");
	capitals.emplace("Indiana", "Indianapolis");
	capitals.emplace("Iowa", "Des Moines");
	capitals.emplace("Kansas", "Topeka");
	capitals.emplace("Kentucky", "Frankfort");
	capitals.emplace("Louisiana", "Baton Rouge");
	capitals.emplace("Maine", "Augusta");
	capitals.emplace("Maryland", "Annapolis");
	capitals.emplace("Massachusetts", "Boston");
	capitals.emplace("Michigan", "Lansing");
	capitals.emplace("Minnesota", "St. Paul");
	capitals.emplace("Mississippi", "Jackson");
	capitals.emplace("Missouri", "Jefferson City");
	capitals.emplace("Montana", "Helena");
	capitals.emplace("Nebraska", "Lincoln");
	capitals.emplace("Nevada", "Carson City");
	capitals.emplace("New Hampshire", "Concord");
	capitals.emplace("New Jersey", "Trenton");
	capitals.emplace("New Mexico", "Santa Fe");
	capitals.emplace("New York", "Albany");
	capitals.emplace("North Carolina", "Raleigh");
	capitals.emplace("North Dakota", "Bismarck");
	capitals.emplace("Ohio", "Columbus");
	capitals.emplace("Oklahoma", "Oklahoma City");
	capitals.emplace("Oregon", "Salem");
	capitals.emplace("Pennsylvania", "Harrisburg");
	capitals.emplace("Rhode Island", "Providence");
	capitals.emplace("South Carolina", "Columbia");
	capitals.emplace("South Dakota", "Pierre");
	capitals.emplace("Tennessee", "Nashville");
	capitals.emplace("Texas", "Austin");
	capitals.emplace("Utah", "Salt Lake City");
	capitals.emplace("Vermont", "Montpelier");
	capitals.emplace("Virginia", "Richmond");
	capitals.emplace("Washington", "Olympia");
	capitals.emplace("West Virginia", "Charleston");
	capitals.emplace("Wisconsin", "Madison");
	capitals.emplace("Wyoming", "Cheyenne");
	string option, guess;
	while(option != "capitals" || option != "states") {
		cout << "Would you like to answer with capitals or states (enter \"capitals\" or \"states\")? ";
		getline(cin, option);
		for(int i = 0; i < option.length(); i++) {
			option[i] = tolower(option[i]);
		}
		if(option == "capitals") {
			for(auto x : capitals) {
				cout << "What is the capital of " << x.first << "? ";
				getline(cin, guess);
				if(guess == x.second) {
					cout << "You are correct!" << endl;
				} else {
					cout << "Incorrect! The capital of " << x.first << " is: " << x.second << endl;
				}
			}
		} else if(option == "states") {
			for(auto x : capitals) {
				cout << "What state is " << x.second << " the capital of? ";
				getline(cin, guess);
				if(guess == x.first) {
					cout << "You are correct!" << endl;
				} else {
					cout << "Incorrect! " << x.second << " is the capital of: " << x.first << endl;
				}
			}
		}
	}
	return 0;
}
