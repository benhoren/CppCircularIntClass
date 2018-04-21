#include <iostream>
#include <string>
#pragma once


class CircularInt{
	public:
	int number;
	
	int start;
	int end;
	
	 CircularInt(int x1, int x2);
	
	
	CircularInt operator+ (const CircularInt &ci1);
	friend CircularInt operator+ ( CircularInt &ci1, const int &x);
	friend CircularInt operator+ (const int &x ,const CircularInt &ci1);
	friend CircularInt operator- (const int &x ,const CircularInt &ci1);
	CircularInt operator* (const int &x);
	CircularInt& operator*= (const int &x);
	friend CircularInt operator- (const CircularInt &ci1);
	CircularInt operator- (const int &x);
	friend CircularInt operator/ (const CircularInt &ci1, const int &x);
	CircularInt& operator+= (const int &x);
	CircularInt &operator++ ();
	CircularInt operator++ (int);
	ostream &operator<<(ostream &os );
	
	friend ostream &operator<<(ostream &os ,  CircularInt &m);
	
	
	void add(int x);
	void minus(int x);
	void fix();
	
	friend std::ostream& operator<<(std::ostream& os, CircularInt const& r);
	//friend ostream &operator<<(ostream &os, const CircularInt &r);
};