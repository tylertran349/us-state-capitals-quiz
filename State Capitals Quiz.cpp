#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, string> capitals;
	capitals["Alabama"] = "Montgomery";
	capitals["Alaska"] = "Juneau";
	capitals["Arizona"] = "Phoenix";
	capitals["Arkansas"] = "Little Rock";
	capitals["California"] = "Sacramento";
	capitals["Colorado"] = "Denver";
	capitals["Connecticut"] = "Hartford";
	capitals["Delaware"] = "Dover";
	capitals["Florida"] = "Tallahassee";
	capitals["Georgia"] = "Atlanta";
	capitals["Hawaii"] = "Honolulu";
	capitals["Idaho"] = "Boise";
	capitals["Illinois"] = "Springfield";
	capitals["Indiana"] = "Indianapolis";
	capitals["Iowa"] = "Des Moines";
	capitals["Kansas"] ="Topeka";
	capitals["Kentucky"] = "Frankfort";
	capitals["Louisiana"] = "Baton Rouge";
	capitals["Maine"] = "Augusta";
	capitals["Maryland"] = "Annapolis";
	capitals["Massachusetts"] = "Boston";
	capitals["Michigan"] = "Lansing";
	capitals["Minnesota"] = "St. Paul";
	capitals["Mississippi"] = "Jackson";
	capitals["Missouri"] = "Jefferson City";
	capitals["Montana"] = "Helena";
	capitals["Nebraska"] = "Lincoln";
	capitals["Nevada"] = "Carson City";
	capitals["New Hampshire"] = "Concord";
	capitals["New Jersey"] = "Trenton";
	capitals["New Mexico"] = "Santa Fe";
	capitals["New York"] = "Albany";
	capitals["North Carolina"] = "Raleigh";
	capitals["North Dakota"] = "Bismarck";
	capitals["Ohio"] = "Columbus";
	capitals["Oklahoma"] = "Oklahoma City";
	capitals["Oregon"] = "Salem";
	capitals["Pennsylvania"] = "Harrisburg";
	capitals["Rhode Island"] = "Providence";
	capitals["South Carolina"] = "Columbia";
	capitals["South Dakota"] = "Pierre";
	capitals["Tennessee"] = "Nashville";
	capitals["Texas"] = "Austin";
	capitals["Utah"] = "Salt Lake City";
	capitals["Vermont"] = "Montpelier";
	capitals["Virginia"] = "Richmond";
	capitals["Washington"] = "Olympia";
	capitals["West Virginia"] = "Charleston";
	capitals["Wisconsin"] = "Madison";
	capitals["Wyoming"] = "Cheyenne";
	string option, guess;
	int correctAnswers;
	while(option != "capitals" || option != "states") {
		correctAnswers = 0;
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
					correctAnswers++;
				} else {
					cout << "Incorrect! The capital of " << x.first << " is: " << x.second << endl;
				}
			}
			cout << "Score: " << correctAnswers << "/50" << endl;
		} else if(option == "states") {
			for(auto x : capitals) {
				cout << "What state is " << x.second << " the capital of? ";
				getline(cin, guess);
				if(guess == x.first) {
					cout << "You are correct!" << endl;
					correctAnswers++;
				} else {
					cout << "Incorrect! " << x.second << " is the capital of: " << x.first << endl;
				}
			}
			cout << "Score: " << correctAnswers << "/50" << endl;
		}
	}
	return 0;
}
