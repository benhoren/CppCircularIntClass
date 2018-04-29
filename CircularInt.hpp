#include <iostream>
using namespace std;

class CircularInt{
    
	
	public:
        int start, end, number, range;
        
        CircularInt(const CircularInt& clone);
        void fix();
        int fix(int n);
        
        CircularInt(int x, int y);
        
        CircularInt& operator= (int n);
        CircularInt operator+ (const int n) const; // ci + int
		CircularInt operator+ (const CircularInt& ci) const; // ci + ci
        friend CircularInt operator+ (int n, const CircularInt& ci); // int + ci
		CircularInt operator- (const int n) const; // ci - int
		CircularInt operator- (const CircularInt& ci) const; // ci - ci
		friend CircularInt operator- (int n, const CircularInt& ci); // int - ci
		CircularInt operator* (const int n) const; // ci * int
		CircularInt operator* (const CircularInt& ci) const; // ci * ci
        friend CircularInt operator* (int n, const CircularInt& ci); // int * ci
		CircularInt operator/ (const int n) ; // ci / int
		CircularInt operator/ (const CircularInt& ci) ; // ci / ci
        friend CircularInt operator/ (int n, CircularInt& ci); // int / ci
		CircularInt operator% (const int n) const; // ci % int
		CircularInt operator% (const CircularInt& ci) const; // ci % ci
		friend CircularInt operator% (int n, const CircularInt& ci); // int % ci       
	    CircularInt operator^ (const int n) const; // ci ^ int
		CircularInt operator^ (const CircularInt& ci) const; // ci ^ ci
		friend CircularInt operator^ (int n, const CircularInt& ci); // int ^ ci
	    CircularInt operator& (const int n) const; // ci & intCircularInt
		CircularInt operator& (const CircularInt& ci) const; // ci & ci
        friend CircularInt operator& (int n, const CircularInt& ci); // int & ci
		CircularInt operator| (const int n) const; // ci | int
		CircularInt operator| (const CircularInt& ci) const; // ci | ci
        friend CircularInt operator| (int n, const CircularInt& ci); // int | ci
		CircularInt operator<< (const int n) const; // ci << int
		CircularInt operator<< (const CircularInt& ci) const; // ci << ci
        friend CircularInt operator<< (int n, const CircularInt& ci); // int << ci
		CircularInt operator>>(const int n) const; // ci >> int
		CircularInt operator>> (const CircularInt& ci) const; // ci >> ci
		friend CircularInt operator>> (int n, const CircularInt& ci); // int >> ci
		 
        CircularInt& operator+= (const CircularInt& ci); // ci += ci
        CircularInt& operator-= (const CircularInt& ci); // ci -= ci
        CircularInt& operator*= (const CircularInt& ci); // ci *= ci
        CircularInt& operator/= (const CircularInt& ci); // ci /= ci
		CircularInt& operator/= (const int n); // ci /= int
        CircularInt& operator%= (const CircularInt& ci); // ci %= ci
		CircularInt& operator%= (const int n); // ci %= int
        CircularInt& operator^= (const CircularInt& ci); // ci ^= ci
        CircularInt& operator^= (const int n); // ci ^= int
		CircularInt& operator&= (const CircularInt& ci); // ci &= ci
        CircularInt& operator&= (const int n); // ci &= int
		CircularInt& operator|= (const int n); // ci |= int
		CircularInt& operator|= (const CircularInt& ci); // ci |= ci
        CircularInt& operator<<= (const CircularInt& ci); // ci <<= ci
        CircularInt& operator<<= (const int n); // ci <<= int
		CircularInt& operator>>= (const int n); // ci >>= int
		CircularInt& operator>>= (const CircularInt& ci); // ci >>= ci
        CircularInt& operator+= (const int n); // ci += int
        CircularInt& operator-= (const int n); // ci -= int
        CircularInt& operator*= (const int n); // ci *= int
       
        
        CircularInt& operator++ (); //prefix
        CircularInt& operator-- (); //prefix
        const CircularInt operator++ (int flag_for_postfix_increment); //(a)++
        const CircularInt operator-- (int flag_for_postfix_increment); //(a)--
        const CircularInt operator- () const; // -ci
        const CircularInt operator~ () const; // ~ci
       
        const bool operator==(const CircularInt& ci) const;
		 friend const bool operator==(const int n, const CircularInt& ci);
        const bool operator!=(const CircularInt& ci) const;
		friend const bool operator!=(const int n, const CircularInt& ci);
        const bool operator<(const CircularInt& ci) const;
		friend const bool operator<(const int n, const CircularInt& ci);
        const bool operator<=(const CircularInt& ci) const;
        friend const bool operator<=(const int n, const CircularInt& ci);
		const bool operator>(const CircularInt& ci) const;
        friend const bool operator>(const int n, const CircularInt& ci);
		const bool operator>=(const CircularInt& ci) const;
        friend const bool operator>=(const int n, const CircularInt& ci);
		const bool operator==(const int n) const;
        const bool operator!=(const int n) const;
        const bool operator<(const int n) const;
        const bool operator<=(const int n) const;
        const bool operator>(const int n) const;
        const bool operator>=(const int n) const;
        
        
        friend ostream& operator<< (ostream& os, const CircularInt& ci);
        friend istream& operator>> (istream& is, CircularInt& ci);
        
};
