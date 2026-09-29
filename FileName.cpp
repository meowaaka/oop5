#include <iostream>
#include <string>
using namespace std;

class CityUA {
	string name;
	int populcity;

	static string language;
	static string capital;
	static string president;
	static int populcountry;
	static int Count;

public:
	CityUA();
	CityUA(string n, int pop);
	void Init(string n, int a);
	void Print() const;

	void SetName(string n);
	void SetPopulation(int pop);
	string GetName() const;
	int GetPopulation() const;

	static void PrintData();
	static int GetCount();
};

string CityUA::language = "Ukrainian";
string CityUA::capital = "Kyiv";
string CityUA::president = "Zelenski";
int CityUA::populcountry = 45000000;
int CityUA::Count = 0;

CityUA::CityUA() {
	name = "Unknown";
	populcity = 0;
	Count++;
}

CityUA::CityUA(string n, int pop) {
	name = n;
	populcity = pop;
	Count++;
}

void CityUA::Init(string n, int a) {
	name = n;
	populcity = a;
}

void CityUA::Print() const {
	cout << "City - " << name << endl
		<< "Population - " << populcity << endl;
}

void CityUA::SetName(string n) {
	name = n;
}

void CityUA::SetPopulation(int pop) {
	populcity = pop;
}

string CityUA::GetName() const {
	return name;
}

int CityUA::GetPopulation() const {
	return populcity;
}

void CityUA::PrintData() {
	cout << "Capital - " << capital << endl
		<< "Language - " << language << endl
		<< "President - " << president << endl
		<< "Country population - " << populcountry << endl
		<< "Cities created - " << Count << endl;
}

int CityUA::GetCount() {
	return Count;
}

int main() {
	CityUA city1("Oleshki", 24000);
	CityUA city2;
	city2.Init("Odesa", 1000000);

	city2.SetPopulation(1000000);
	cout << city2.GetName() << " - " << city2.GetPopulation() << endl << endl;

	city1.Print();
	cout << endl;
	city2.Print();
	cout << endl;

	CityUA::PrintData();
	cout << "Count - " << CityUA::GetCount() << endl;
}