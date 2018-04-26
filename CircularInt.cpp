#include <iostream>
#include <sstream>
#include <string>

using namespace std;

#include "CircularInt.hpp"

	
	CircularInt::CircularInt(int x1, int x2){
		this->start = x1;
		this->end = x2;	
		
		number = start;
	}
	
	
	/*
	{
		this->start = x1;
		this->end = x2;	
		
		number = start;
	}
	*/
	
	CircularInt CircularInt::operator+ (const CircularInt &ci1){
		CircularInt result = *this;
		result.add(ci1.number);
		
		return result; 	
	}
/*	CircularInt operator+ (const int &x)const{
		CircularInt result = *this;
		result.add(x);
		
		return result; 
	}
	
	*/
	
	 CircularInt operator+ ( CircularInt &ci1, const int &x){
		CircularInt result = ci1;
		result.CircularInt::add(x);	
		return result; 
	}
	
	  CircularInt operator+ (const int &x ,const CircularInt &ci1){
		CircularInt result = ci1;
		result.CircularInt::add(x);
		return result; 
	}
	
	
	/*CircularInt operator- (const CircularInt &ci1){
		CircularInt result = *this;
		result.minus(ci1.number);
		
		return result; 	
	}*/
	
	 CircularInt operator- (const int &x ,const CircularInt &ci1){
		CircularInt result = ci1;
		int tmp = result.number;
		result.number = x;
		result.CircularInt::minus(tmp);
		return result; 
	}
	
	CircularInt CircularInt::operator* (const int &x){
		CircularInt result = *this;
		
		result.number *= x;
		CircularInt::fix();
		
		return result; 
	}
	
	CircularInt& CircularInt::operator*= (const int &x){
		*this = *this * x;
		CircularInt::fix();
		return *this; 
	}
	
	 CircularInt operator- (const CircularInt &ci1) {
		CircularInt result = ci1;
		result.number = -result.number;
		result.fix();
		return result; 	
	}
	
	CircularInt CircularInt::operator- (const int &x){
		CircularInt result = *this;
		result.minus(x);
		
		return result; 
	}
	
	 CircularInt operator/ (const CircularInt &ci1, const int &x) {
		CircularInt result = ci1;
		if(result.number%x==0){
			result.number = result.number / x;
		}
		else{
			//"There is no number x in {1,12} such that x*3=10"
			string str= "There is no number x in {";
			string send = NumberToString(ci1.end);
			string sstart = NumberToString(ci1.start);
			string snum = NumberToString(ci1.number);
			string sx = NumberToString(x);
			
			string message = str + sstart + "," + send + "} such that x*" + sx + "=" + snum ;
		
			throw message;
		}  
		
		
		
		result.CircularInt::fix();
		return result; 	
	}
	
	string NumberToString (int Number ){
     ostringstream ss;
     ss << Number;
     return ss.str();
  }
  
  
	CircularInt& CircularInt::operator+= (const int &x){
		*this = *this + x;
		this->fix();
		
		return *this; 
	}
	
	CircularInt& CircularInt::operator++ (){
		(*this)+=1;
		return *this; 
	}
	
	CircularInt CircularInt::operator++ (int){
		CircularInt tmp = *this;
		*this += 1;
		
		return tmp; 
	}
	ostream& CircularInt::operator<<(ostream &os ) { 
		os << number;
		return os;
	}
	
	ostream &operator<<(ostream &os ,  CircularInt &m) { 
		os << m.number;
		return os;
	}
	
	CircularInt CircularInt::operator& (const CircularInt &ci1){
		CircularInt result = ci1;
		result.number = result.number | this->number;
		result.fix();
		return result; 
	}
	
	//CircularInt CircularInt::operator| (const CircularInt &ci1){}

	
	void CircularInt::add(int x){
		number +=x;
		fix();		
	}
	void CircularInt::minus(int x){
		number -=x;
			
		CircularInt::fix();		
	}
	
	void CircularInt::fix(){
		while(number<start){
			number = number + (end - start + 1);
		}	
		while(number>end){
			number = number - (end - start + 1);
		}
	}


	ostream &operator<<(ostream &os, const CircularInt &r){
	 os << r.number; 
	 return os;
	}
