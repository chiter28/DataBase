#include "../../std_lib_facilities.h"


int main()
{
	vector<string> names;
	vector<int> scores;
	string tmp_name;
	int tmp_score;


	cin >> tmp_name >> tmp_score;
	names.push_back(tmp_name);
	scores.push_back(tmp_score);




	while (!(tmp_name == "NoName" && tmp_score == 0)) {
		cin >> tmp_name >> tmp_score;
		for (string s : names) {
			if (tmp_name == s) {
				cout << tmp_name << " already have\n\n";
				break;
			}
			else if (s == names[names.size() - 1]) { // If last element in names
				names.push_back(tmp_name);
				scores.push_back(tmp_score);
				break;
			}
		}
	}

	
	cout << "Enter: ";
	cin >> tmp_name;
	bool is_int = tmp_name.find_first_not_of("0123456789") == string::npos;

	while (tmp_name != "end") {
		if (is_int) {

			tmp_score = stoi(tmp_name);
			bool flag = true;
			for (int i = 0; i < scores.size(); ++i) {
				if (tmp_score == scores[i]) {
					cout << "Name: " << names[i] << "\n";
					flag = false;
				}
			}
			if (flag)
				cout << "Scores not found\n\n";
			flag = true;

		}
		else {

			for (int i = 0; i < names.size(); ++i) {
				if (tmp_name == names[i]) {
					cout << "Score: " << scores[i] << "\n\n";
					break;
				}
				else if (i == names.size() - 1)
					cout << "Name " << tmp_name << " no found\n\n";
			}

		}
		cout << "Enter: ";
		cin >> tmp_name;
		is_int = tmp_name.find_first_not_of("0123456789") == string::npos;
	}



	



}