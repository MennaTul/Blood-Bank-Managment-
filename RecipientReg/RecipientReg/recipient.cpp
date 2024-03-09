#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stack>
#include <map>
#include <unordered_map>
#include"recipient.h"
#include<qdebug.h>
using namespace std;
// to read data from files to the vector "r2Vector" :

recipient::recipient() {

}

map<string, recipient> recipient::fromfiletomap()
{
	recreadfile.open("recicient.txt");
	string s;
	int i = 0;
	bool idline = true, nameline = true, mailline = true, passline = true, ageline = true, genderline = true, bloodline = true;
	bool hospitalline = true, doctorline = true;
	string tempId;
	map<string, recipient> temp;
	while (recreadfile.good())
	{
		//while loop that reads the file line by line using getline
		getline(recreadfile, s, '\n');
		if (!doctorline) {
			idline = nameline = mailline = passline = ageline = genderline = bloodline = hospitalline = doctorline = true;
		}
		if (mailline) {
			if (s.empty()) {
				break;
			}
			tempId = s;
			temp[tempId].mail = tempId;
			mailline = false;
		}
		else if (nameline) {
			temp[tempId].name = s;
			nameline = false;
		}
		else if (idline) {
			if (!s.empty())
				temp[tempId].id = stoi(s);
			idline = false;
		}
		else if (passline) {
			temp[tempId].password = s;
			passline = false;
		}
		else if (ageline) {
			if (!s.empty())
				temp[tempId].age = stoi(s);
			ageline = false;
		}
		else if (genderline) {
			temp[tempId].gender = s;
			genderline = false;
		}
		else if (bloodline) {
			temp[tempId].bloodType = s;
			bloodline = false;
		}
		else if (hospitalline) {
			temp[tempId].hospital = s;
			hospitalline = false;
		}
		else if (doctorline) {
			temp[tempId].doctor = s;
			doctorline = false;
		}

	}
	recwritefile.close();
	return temp;
}


// to write from map to files ::: 
bool recipient::Register(string maill, std::string passwordd)
{
	// validation for real mail 
	//id = DonorIdGenerate();
	if (maill.find('@') == false || maill.find(".com") == false || maill.find(".COM") == false || passwordd.size() < 8 || passwordd.size() > 12)
	{

		return false;
	}
	return true;
	/*validation for strong password

	while (password.size() < 8 && password.size() > 12)
	{
		cout << "password must use at least 8 characters and contain one upper case letter, one lower case latter and one numeric character and 12-character maximum. please try again";
	}*/


	/*for (int i = 0; i < gender.size(); i++)
	{
		gender[i] = tolower(gender[i]);

	}*/

	//validation for right gender 

	//while (gender != "female" || gender != "male") {
	//	cout << "please enter male or female ";
	//}

	//for (int i = 0; i < blood_type.size(); i++)
	//{
	//	blood_type[i] = toupper(blood_type[i]);

	//}

	//validation for real blood_type 

	/*while (blood_type != "AB+" || blood_type != "AB-" || blood_type != "B+" || blood_type != "B-" || blood_type != "A+" || blood_type != "A-" || blood_type != "O+" || blood_type != "O-")
	{
		cout << "invalid blood type . please enter A or B or C or AB";

	}*/


}
void recipient::frommaptofile(map<string, recipient>& mp) {
	recwritefile.open("recicient.txt");
	map<string, recipient>::iterator it;
	for (it = mp.begin(); it != mp.end(); it++) {
		recwritefile << (*it).first << "\n"; // email
		recwritefile << (*it).second.name << "\n";
		recwritefile << (*it).second.id << "\n";
		recwritefile << (*it).second.password << "\n";
		recwritefile << (*it).second.age << "\n";
		recwritefile << (*it).second.gender << "\n";
		recwritefile << (*it).second.bloodType << "\n";
		recwritefile << (*it).second.hospital << "\n";
		recwritefile << (*it).second.doctor << "\n";
	}
	recwritefile.close();
}

bool recipient::login(map<string, recipient>& mp ,string email,string pass) {
	

	if (mp.find(email) == mp.end())
	{
		
		return false;
	}
	map<string, recipient> ::iterator it = mp.find(email);

	//while (true) {
		if (pass == (*it).second.password) {
			mail = (*it).second.mail;
			name = (*it).second.name;
			age = (*it).second.age;
			doctor = (*it).second.doctor;
			id = (*it).second.id;
			bloodType = (*it).second.bloodType;
			hospital = (*it).second.hospital;
			password = (*it).second.password;
			gender = (*it).second.gender;
			return true;
		}
		else
		{
			
			return false;
		}
//	}
}

bool recipient::Search(unordered_map<string, pair<unordered_map<string, float>, float>>& b, string recipientBloodType) {
	bool flag = 0;
	// Check if the blood type is available

	unordered_map<string, pair<unordered_map<string, float>, float>>::iterator it = b.find(recipientBloodType);
	if (it != b.end()) {
		if ((*it).second.second > 0.0) {
			flag = 1;  
		}
	}
	return flag;

}



void recipient::Delete(map<string, recipient>& mp,string email)
{


		mp.erase(email);

	
}

bool recipient::BloodRequest(unordered_map<string, pair<unordered_map<string, float>, float>>& bmp, map<string, recipient>& mp, string reqBtype, float quant, string hos) {
	mp[mail].hospital = hos;
	hospital = hos;
	unordered_map<string, float>::iterator it;
	if (bmp[reqBtype].second >= quant) {
		bmp[reqBtype].second -= quant;
		for (it = bmp[reqBtype].first.begin(); it != bmp[reqBtype].first.end(); it++) {
			if (quant < (*it).second) {
				(*it).second -= quant;
				break;
			}
			else if (quant == (*it).second) {
				bmp[reqBtype].first.erase(it);
				break;
			}
			else {
				quant -= (*it).second;
				bmp[reqBtype].first.erase(it);
			}
		}
		
		return true;
	}
	return false;
}
void recipient::update(map<string, recipient>& mp)
{
	string key;
	string newValue;

	cout << "Enter the key of the value to edit : ";
	cin >> key;


	while (true)
	{

		if (key == "name")
		{
			cout << "Enter the new value: ";
			cin >> newValue;
			mp[mail].name = newValue;
			name = newValue;
			cout << "Your name is updated.\n";

		}
		else if (key == "mail")
		{
			cout << "Enter the new value: ";
			cin >> newValue;

			mp[mail].mail = newValue;
			mail = newValue;
			cout << "Your email is updated.\n";

		}

		else if (key == "password")
		{
			cout << "Enter the new value: ";
			cin >> newValue;

			mp[mail].password = newValue;
			password = newValue;
			cout << "Your password is updated.\n";

		}

		else if (key == "gender")
		{
			cout << "Enter the new value: ";
			cin >> newValue;

			mp[mail].gender = newValue;
			gender = newValue;
			cout << "Your gender is updated.\n";

		}

		else if (key == "bloodType")
		{
			cout << "Enter the new value: ";
			cin >> newValue;

			mp[mail].bloodType = newValue;
			bloodType = newValue;
			cout << "Your Blood Type is updated.\n";

		}
		else if (key == "doctor")
		{
			cout << "Enter the new value: ";
			cin >> newValue;

			mp[mail].doctor = newValue;
			doctor = newValue;
			cout << "Your Doctor Type is updated.\n";

		}
		else if (key == "hospital")
		{
			cout << "Enter the new value: ";
			cin >> newValue;

			mp[mail].hospital = newValue;
			hospital = newValue;
			cout << "Your hospital Type is updated.\n";

		}
	  else if (key == "age")
		{
			cout << "Enter the new value: ";
		cin >> newValue;
		mp[mail].age = stoi(newValue);
		age = stoi(newValue);
			cout << "Your hospital Type is updated.\n";

		}
	  else if (key == "id")
		{
			cout << "Enter the new value: ";
			cin >> newValue;
			mp[mail].id = stoi(newValue);
			id = stoi(newValue);
			cout << "Your hospital Type is updated.\n";

		}
		else

			cout << "Please enter a valied field." << endl;
		break;
	}
}


void recipient::display(deque <pair<blood, string>>& bque) {
	for (int i = 0; i < bque.size(); i++) {
		cout << bque[i].first.bTybe << endl;
		cout << bque[i].first.quantity << endl;
		cout << bque[i].first.receivedDate << endl;
		cout << bque[i].first.expiry << endl;
	}
}
