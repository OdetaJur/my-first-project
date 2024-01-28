#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream> 
#include <vector> 
#include <chrono>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int minimum(int a, int b);

class Student {
	string Name, Surname;
	vector <int> HW;
	int Exam;
	float Rez;

public:

	Student();
	Student(string N, string S, vector <int> H, int E);
	Student(const Student& A); //kopijavimo konstruktorius
	Student& operator=(const Student& A); // priskyrimo-kopijavimo operatorius
	~Student(); //destruktorius
	float Vid();
	float Med();
	void Rezult(char pasi);  // apskaiciuoja vidurki arba mediana 
	//setters
	inline void SetName(string N) { Name = N; }
	inline void SetSurname(string S) { Surname = S; }
	inline void SetHW(vector <int> Vec) { HW=Vec; }
	inline void SetExam(int n) { Exam = n; }
	//getters
	float getRez() const { return Rez; }
	void printas();


	friend std::ostream& operator<<(std::ostream& out, const Student& A);
	friend std::istream& operator>>(std::istream& in, Student& A);


};

void nuskait(vector<Student>& Grupe, const string& failo_vardas);
void rusiavimas(vector<Student>& studentai, vector<Student>& vargsiukai, vector<Student>& kietiakiai);
void rasyt_i_faila(vector<Student>Vargsiukai, vector<Student> Kietiakai);


