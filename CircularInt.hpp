#include <iostream>
#include <string>
#pragma once

std::string NumberToString (int Number );

class CircularInt{
	public:
	
	int number;
	int start;
	int end;
	
	CircularInt(int x1, int x2);
	
	CircularInt operator+ (const CircularInt &ci1);
	friend CircularInt operator+ (CircularInt &ci1, const int &x);
	friend CircularInt operator+ (const int &x ,const CircularInt &ci1);
	friend CircularInt operator- (const int &x ,const CircularInt &ci1);
	CircularInt operator* (const int &x);
	CircularInt& operator*= (const int &x);
	friend CircularInt operator- (const CircularInt &ci1);
	CircularInt operator- (const int &x);
	friend CircularInt operator/ (const CircularInt &ci1, const int &x);
	CircularInt& operator/= (const int &x);
	CircularInt& operator+= (const int &x);
	CircularInt& operator++ ();
	CircularInt operator++ (int);
	std::ostream &operator<<(std::ostream &os);
	friend std::ostream &operator<<(std::ostream &os,  CircularInt &m);
	CircularInt operator& (const CircularInt &ci1);
	CircularInt operator| (const CircularInt &ci1);
	CircularInt& operator-- ();
	CircularInt operator-- (int);
	CircularInt& operator-= (const int &x);
	
	
	
	 bool operator <(const CircularInt& d);
	 bool operator >(const CircularInt& d);
	 bool operator <=(const CircularInt& d);
     bool operator >=(const CircularInt& d);
	 bool operator ==(const CircularInt& d);
	 bool operator !=(const CircularInt& d);
	 
	 bool operator <(const int& X);
	 bool operator >(const int& x);
	 bool operator <=(const int& x);
     bool operator >=(const int& x);
	 bool operator ==(const int& x);
	 bool operator !=(const int& x);
	
	
	
	void add(int x);
	void minus(int x);
	void fix();
	
	friend std::ostream& operator<<(std::ostream& os, CircularInt const& r);
	//friend ostream &operator<<(ostream &os, const CircularInt &r);
};
