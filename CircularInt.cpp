#include "CircularInt.hpp"

CircularInt::CircularInt(int x, int y) : start(x), end(y) {
    if(x>y){
        start = y;
        end = x;
    }
    number = start;
    range = end - start + 1;
}

void CircularInt::fix(){
    if(number >= start && number <= end)
        return;
    
    while(number > end )
        number -= range;
    while(number < start )
        number += range;
}

int CircularInt::fix(int n){
    if(n >= start && n <= end)
        return n;
    
    while(n > end )
        n -= range;
    while(n < start )
        n += range;
    
    return n;
}

CircularInt& CircularInt::operator= (int n){
    number = n;
    fix();
    return *this;
}

CircularInt::CircularInt(const CircularInt& clone){
    start = clone.start;
    end = clone.end;
    number = clone.number;
    range = clone.range;
}


CircularInt CircularInt::operator+ (const CircularInt& ci) const{
   CircularInt tmp(*this);
   tmp.number += ci.number;
   tmp.fix();
   return tmp;
}

CircularInt CircularInt::operator- (const CircularInt& ci) const{ // ci - ci
    CircularInt tmp(*this);
    tmp.number -= ci.number;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator* (const CircularInt& ci) const{ // ci * ci
    CircularInt tmp(*this);
    tmp.number *= ci.number;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator/ (const CircularInt& ci) { // ci / ci
    int i;
    for(i = start ;i < end; i++){
        // long l = i * ci.number;
        int l = i * ci.number;
        int res = fix(l);
        if(res == number){
            CircularInt tmp(*this);
            tmp.number = i;
            return tmp;
        }
    }
    throw string("There is no Integer x in the range such that x*"+to_string(ci.number) + "="+to_string(number));
}

CircularInt CircularInt::operator% (const CircularInt& ci) const{ // ci % ci
    CircularInt tmp(*this);
    tmp.number %= ci.number;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator^ (const CircularInt& ci) const{
    CircularInt tmp(*this);
    tmp.number ^= ci.number;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator& (const CircularInt& ci) const{ // ci & ci
    CircularInt tmp(*this);
    tmp.number &= ci.number;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator| (const CircularInt& ci) const{ // ci | ci
    CircularInt tmp(*this);
    tmp.number |= ci.number;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator<< (const int n) const{ // ci << int
    CircularInt tmp(*this);
    tmp.number <<= n;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt::operator<< (const CircularInt& ci) const{ // ci << ci
    CircularInt tmp(*this);
    tmp.number <<= ci.number;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator>> (const CircularInt& ci) const{ // ci >> ci
    CircularInt tmp(*this);
    tmp.number >>= ci.number;
    tmp.fix();
    return tmp;
}
CircularInt CircularInt::operator>>(const int n) const{ // ci >> int
    CircularInt tmp(*this);
    tmp.number >>= n;
    tmp.fix();
    return tmp;
}


CircularInt CircularInt::operator* (int n) const{
    CircularInt tmp(*this);
    tmp.number *= n;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator/ (const int n) {
    int i;
    for(i = start; i<end; i++){
        long l = i*n;
        int res = fix(l);
        if(res == number){
            CircularInt tmp(*this);
            tmp.number = i;
            return tmp;
        }
    }
    throw string("There is no Integer x in the range such that x*"+to_string(n) + "="+to_string(number));
}

CircularInt CircularInt::operator% (const int n) const{
    CircularInt tmp(*this);
    tmp.number %= n;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator^ (const int n) const{ // ci ^ int
    CircularInt tmp(*this);
    tmp.number ^= n;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator& (const int n) const{ // ci & int
    CircularInt tmp(*this);
    tmp.number &= n;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator| (const int n) const{ // ci | int
    CircularInt tmp(*this);
    tmp.number |= n;
    tmp.fix();
    return tmp;
}

        
CircularInt& CircularInt::operator+= (const CircularInt& ci){ // ci += ci
    number += ci.number;
    fix();
    return *this;
}

CircularInt& CircularInt::operator-= (const CircularInt& ci){ // ci -= ci
    number -= ci.number;
    fix();
    return *this;
}

CircularInt& CircularInt::operator*= (const CircularInt& ci){ // ci *= ci
    number *= ci.number;
    fix();
    return *this;
}

CircularInt& CircularInt::operator/= (const CircularInt& ci){ // ci /= ci
    *this = *this / ci.number;
    return *this;
}

CircularInt& CircularInt::operator%= (const CircularInt& ci){ // ci %= ci
    number %= ci.number;
    fix();
    return *this;
    
}

CircularInt& CircularInt::operator^= (const CircularInt& ci){ // ci ^= ci
    number ^= ci.number;
    fix();
    return *this;
}

CircularInt& CircularInt::operator&= (const CircularInt& ci){ // ci &= ci
    number &= ci.number;
    fix();
    return *this;
}
        
CircularInt& CircularInt::operator|= (const CircularInt& ci){ // ci |= ci
    number |= ci.number;
    fix();
    return *this;
}

CircularInt& CircularInt::operator<<= (const CircularInt& ci){ // ci <<= ci
    number <<= ci.number;
    fix();
    return *this;
}

CircularInt& CircularInt::operator>>= (const CircularInt& ci){ // ci >>= ci
    number >>= ci.number;
    fix();
    return *this;
}

CircularInt& CircularInt::operator+= (const int n){
    number += n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator-= (const int n){
    number -= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator*= (const int n){
    number *= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator/= (const int n){
    *this = *this / n;
    return *this;
}

CircularInt& CircularInt::operator%= (const int n){
    number %= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator^= (const int n){ // ci ^= int
    number ^= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator&= (const int n){ // ci &= int
    number &= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator|= (const int n){ // ci|= int
    number |= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator<<= (const int n){ // ci <<= int
    number <<= n;
    fix();
    return *this;
}

CircularInt& CircularInt::operator>>= (const int n){ // ci >>= int
    number >>= n;
    fix();
    return *this;
}

/* prefix -- -> --(a) */
CircularInt& CircularInt::operator-- (){
    (this->number)--;
    fix();
    return *this;
}
CircularInt operator+ (int n, const CircularInt& ci){
    return ci+n;
}


const CircularInt CircularInt::operator++ (int flag_for_postfix_increment){
    CircularInt tmp(*this); 
    ++(this->number);
    this->fix();
    return tmp; //returns the copy
    
}
CircularInt& CircularInt::operator++ (){
    (this->number)++;
    fix();
    return *this;
}


const CircularInt CircularInt::operator-- (int flag_for_postfix_discrement){
    CircularInt tmp(*this); 
    --(this->number);
    this->fix();
    return tmp; //returns the copy
    
}

CircularInt CircularInt::operator+ (int n) const{
    CircularInt tmp(*this);
    tmp.number += n;
    tmp.fix();
    return tmp;
}

CircularInt CircularInt::operator- (int n) const{
    CircularInt tmp(*this);
    tmp.number -= n;
    tmp.fix();
    return tmp;
}

const CircularInt CircularInt::operator- () const{
    CircularInt tmp(*this);
    tmp.number = tmp.end - tmp.number;
    tmp.fix();
    return tmp;
}
CircularInt operator- (int n, const CircularInt& ci){
    CircularInt tmp(ci);
    tmp.number = n - tmp.number;
    tmp.fix();
    return tmp;
}

const CircularInt CircularInt::operator~ () const{ // ~ci
    CircularInt tmp(*this);
    tmp.number = ~tmp.number;
    tmp.fix();
    return tmp;
}





CircularInt operator* (int n, const CircularInt& ci){ // int * hour
    return ci*n;
} 


CircularInt operator/ (int n, CircularInt& ci){ // int / hour
    int i;
    for(i = ci.start; i<ci.end; i++){
        long l = i*ci.number;
        int res = ci.fix(l);
        if(res == n){
            CircularInt tmp(ci);
            tmp.number = i;
            return tmp;
        }
    }
    throw string("There is no Integer x in the range such that x*"+to_string(ci.number) + "="+to_string(n));
} 


CircularInt operator% (int n, const CircularInt& ci){ // int % ci
    CircularInt tmp(ci);
    tmp.number = n % tmp.number;
    tmp.fix();
    return tmp;
} 

CircularInt operator^ (int n, const CircularInt& ci){ // int ^ ci
    CircularInt tmp(ci);
    tmp.number = n ^ tmp.number;
    tmp.fix();
    return tmp;
}

CircularInt operator& (int n, const CircularInt& ci){ // int & ci
    CircularInt tmp(ci);
    tmp.number = n & tmp.number;
    tmp.fix();
    return tmp;
}

CircularInt operator| (int n, const CircularInt& ci){ // int | ci
    CircularInt tmp(ci);
    tmp.number = n | tmp.number;
    tmp.fix();
    return tmp;
}

CircularInt operator<< (int n, const CircularInt& ci){ // int << ci
    CircularInt tmp(ci);
    tmp.number = n << tmp.number;
    tmp.fix();
    return tmp;
}

CircularInt operator>> (int n, const CircularInt& ci){ // int >> ci
    CircularInt tmp(ci);
    tmp.number = n >> tmp.number;
    tmp.fix();
    return tmp;
}
        
const bool CircularInt::operator==(const CircularInt& ci) const{
    return number == ci.number;
}

const bool CircularInt::operator!=(const CircularInt& ci) const{
    return number != ci.number;
}

const bool CircularInt::operator<(const CircularInt& ci) const{
    return number < ci.number;
}

const bool CircularInt::operator<=(const CircularInt& ci) const{
    return number <= ci.number;
}

const bool CircularInt::operator>(const CircularInt& ci) const{
    return number > ci.number;
}

const bool CircularInt::operator>=(const CircularInt& ci) const{
    return number >= ci.number;
}

const bool CircularInt::operator==(const int n) const{
    return number == n;
}

const bool CircularInt::operator!=(const int n) const{
    return number != n;
}

const bool CircularInt::operator<(const int n) const{
    return number < n;
}

const bool CircularInt::operator<=(const int n) const{
    return number <= n;
}

const bool CircularInt::operator>(const int n) const{
    return number > n;
}

const bool CircularInt::operator>=(const int n) const{
    return number >= n;
}
  
const bool operator==(const int n, const CircularInt& ci) {
    return n == ci.number;
}

const bool operator!=(const int n, const CircularInt& ci) {
    return n != ci.number;
}

const bool operator<(const int n, const CircularInt& ci) {
    return n < ci.number;
}

const bool operator<=(const int n, const CircularInt& ci) {
    return n <= ci.number;
}

const bool operator>(const int n, const CircularInt& ci) {
    return n > ci.number;
}

const bool operator>=(const int n, const CircularInt& ci) {
    return n >= ci.number;
}
        
ostream& operator<< (ostream& os, const CircularInt& ci){
    return os << ci.number;
}

istream& operator>> (istream& is, CircularInt& ci){
     int tmp;
    is >> tmp;
    if(tmp > ci.end || tmp < ci.start)
        throw string("There is no Integer "+to_string(tmp) + " in the range");
	ci.number = tmp;
	return is;
}
