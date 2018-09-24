// experimental macros
// #include<bits/stdc++.h>
// using namespace std;
// #define print(x) cout << x << endl
// #define _ <<" ";cout<<
// #define __ <<endl;cout<<

// template <template <class...> class TT, class ...T>
// ostream& operator<<(ostream& out, const TT<T...>& c) {
//     out<<"[";for(auto x=c.begin(); x!=c.end(); x++) {out<<*x;auto y=x;y++; if(y!=c.end())out<<", ";}out << "]";
//     return out;
// }
// template<typename T, std::size_t N>
// ostream& operator<<(ostream& out, const std::array<T, N>& c) {
//     out<<"[";for(auto x=c.begin(); x!=c.end(); x++) {out<<*x;auto y=x;y++; if(y!=c.end())out<<", ";}out << "]";
//     return out;
// }

// template<typename T> vector<T>& operator+= (vector<T>& lhs, const T& rhs) {lhs.push_back(rhs); return lhs;}
// template<typename T> deque<T>& operator+= (deque<T>& lhs, const T& rhs) {lhs.push_back(rhs); return lhs;}
// template<typename T> set<T>& operator+= (set<T>& lhs, const T& rhs) {lhs.insert(rhs); return lhs;}
// template<typename T> multiset<T>& operator+= (multiset<T>& lhs, const T& rhs) {lhs.insert(rhs); return lhs;}
// template<typename T> unordered_set<T>& operator+= (unordered_set<T>& lhs, const T& rhs) {lhs.insert(rhs); return lhs;}
// template<typename T> unordered_multiset<T>& operator+= (unordered_multiset<T>& lhs, const T& rhs) {lhs.insert(rhs); return lhs;}
// template<typename T> stack<T>& operator+= (stack<T>& lhs, const T& rhs) {lhs.push(rhs); return lhs;}
// template<typename T> queue<T>& operator+= (queue<T>& lhs, const T& rhs) {lhs.push(rhs); return lhs;}
// template<typename T> priority_queue<T>& operator+= (priority_queue<T>& lhs, const T& rhs) {lhs.push(rhs); return lhs;}

// template<typename T> vector<T>& operator-- (vector<T>& lhs, int) {lhs.pop_back(); return lhs;}
// template<typename T> deque<T>& operator-- (deque<T>& lhs, int) {lhs.pop_back(); return lhs;}
// template<typename T> deque<T>& operator-- (deque<T>& lhs) {lhs.pop_front(); return lhs;}
// template<typename T> stack<T>& operator-- (stack<T>& lhs, int) {lhs.pop(); return lhs;}
// template<typename T> queue<T>& operator-- (queue<T>& lhs, int) {lhs.pop(); return lhs;}
// template<typename T> priority_queue<T>& operator-- (priority_queue<T>& lhs, int) {lhs.pop(); return lhs;}

// template<typename T> set<T>& operator-= (set<T>& lhs, const T& rhs) {lhs.erase(rhs); return lhs;}
// template<typename T> multiset<T>& operator-= (multiset<T>& lhs, const T& rhs) {lhs.erase(rhs); return lhs;}
// template<typename T> unordered_set<T>& operator-= (unordered_set<T>& lhs, const T& rhs) {lhs.erase(rhs); return lhs;}
// template<typename T> unordered_multiset<T>& operator-= (unordered_multiset<T>& lhs, const T& rhs) {lhs.erase(rhs); return lhs;}

// template<typename T> vector<T>& operator+= (vector<T>& lhs, const pair<T, int>& rhs) {lhs.insert(lhs.begin()+(rhs.second>=0?rhs.second:lhs.size()+1+rhs.second), rhs.first); return lhs;}
// template<typename T> deque<T>& operator+= (deque<T>& lhs, const pair<T, int>& rhs) {rhs==0?lhs.push_front(rhs.first):lhs.insert(lhs.begin()+(rhs.second>=0?rhs.second:lhs.size()+1+rhs.second), rhs.first); return lhs;}

// template<typename T> vector<T>& operator-= (vector<T>& lhs, const int& rhs) {lhs.erase(lhs.begin()+rhs+((rhs<0)?lhs.size():0)); return lhs;}
// template<typename T> vector<T>& operator-= (vector<T>& lhs, const pair<int, int>& rhs) {rhs.first+=rhs.first<0?lhs.size():0;rhs.second+=rhs.second<0?lhs.size():0; lhs.erase(lhs.begin()+rhs.first,lhs.begin()+rhs.second); return lhs;}
// template<typename T> deque<T>& operator-= (deque<T>& lhs, const int& rhs) {lhs.erase(lhs.begin()+(rhs>=0?rhs:lhs.size()+rhs)); return lhs;}
// // template<typename T> deque<T>& operator-= (deque<T>& lhs, const int& rhs) {lhs.erase(lhs.begin()+(rhs>=0?rhs:lhs.size()+rhs)); return lhs;}
// template<typename T> set<T>& operator-= (set<T>& lhs, const T& rhs) {lhs.erase(rhs); return lhs;}


// acceptable macros
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define main signed main

// Used to print like python, and resets value of sep and end after printing.
class _print { 
	string _sep=" ", _end="\n";
public:
	_print& sep(string s="") {_sep = s; return *this;} 
	_print& end(string s="") {_end = s; return *this;}
	_print& set(string s1=" ", string s2="\n") {_sep = s1; _end = s2; return *this;};
	template <typename T=string> void operator()() {cout << _end; _sep=" "; _end="\n";}
	template <typename T> void operator()(T t) {cout << t; operator()();}
	template<typename T, typename... Args> void operator()(T t, Args... args) {cout << t; cout << _sep; operator()(args...);}
} print;

ostream& operator<<(ostream& out, const std::basic_string<char> c) {for(auto x=c.begin(); x!=c.end(); x++) {out<<*x;}return out;} // to resolve ambiguity for strings in line below.
template <template <class...> class TT, class ...T> ostream& operator<<(ostream& out, const TT<T...>& c) {out<<"[";for(auto x=c.begin(); x!=c.end(); x++) {out<<*x;auto y=x;y++; if(y!=c.end())out<<", ";}out << "]";return out;}
template<typename T, std::size_t N> ostream& operator<<(ostream& out, const std::array<T, N>& c) {out<<"[";for(auto x=c.begin(); x!=c.end(); x++) {out<<*x;auto y=x;y++; if(y!=c.end())out<<", ";}out << "]";return out;}

template<typename T, typename T2> vector<T>& operator+= (vector<T>& lhs, const T2& rhs) {lhs.push_back((T)rhs); return lhs;}
template<typename T, typename T2> deque<T>& operator+= (deque<T>& lhs, const T2& rhs) {lhs.push_back((T)rhs); return lhs;}
template<typename T, typename T2> deque<T>& operator+= (const T2& lhs, deque<T>& rhs) {rhs.push_front((T)lhs); return rhs;}
template<typename T, typename T2> set<T>& operator+= (set<T>& lhs, const T2& rhs) {lhs.insert((T)rhs); return lhs;}
template<typename T, typename T2> multiset<T>& operator+= (multiset<T>& lhs, const T2& rhs) {lhs.insert((T)rhs); return lhs;}
template<typename T, typename T2> unordered_set<T>& operator+= (unordered_set<T>& lhs, const T2& rhs) {lhs.insert((T)rhs); return lhs;}
template<typename T, typename T2> unordered_multiset<T>& operator+= (unordered_multiset<T>& lhs, const T2& rhs) {lhs.insert((T)rhs); return lhs;}
template<typename T, typename T2> stack<T>& operator+= (stack<T>& lhs, const T2& rhs) {lhs.push((T)rhs); return lhs;}
template<typename T, typename T2> queue<T>& operator+= (queue<T>& lhs, const T2& rhs) {lhs.push((T)rhs); return lhs;}
template<typename T, typename T2> priority_queue<T>& operator+= (priority_queue<T>& lhs, const T2& rhs) {lhs.push((T)rhs); return lhs;}

template<typename T> vector<T>& operator-- (vector<T>& lhs, signed) {lhs.pop_back(); return lhs;}
template<typename T> deque<T>& operator-- (deque<T>& lhs, signed) {lhs.pop_back(); return lhs;}
template<typename T> deque<T>& operator-- (deque<T>& lhs) {lhs.pop_front(); return lhs;}
template<typename T> stack<T>& operator-- (stack<T>& lhs, signed) {lhs.pop(); return lhs;}
template<typename T> queue<T>& operator-- (queue<T>& lhs, signed) {lhs.pop(); return lhs;}
template<typename T> priority_queue<T>& operator-- (priority_queue<T>& lhs, signed) {lhs.pop(); return lhs;}

template<typename T, typename T2> set<T>& operator-= (set<T>& lhs, const T2& rhs) {lhs.erase((T)rhs); return lhs;}
template<typename T, typename T2> multiset<T>& operator-= (multiset<T>& lhs, const T2& rhs) {lhs.erase((T)rhs); return lhs;}
template<typename T, typename T2> unordered_set<T>& operator-= (unordered_set<T>& lhs, const T2& rhs) {lhs.erase((T)rhs); return lhs;}
template<typename T, typename T2> unordered_multiset<T>& operator-= (unordered_multiset<T>& lhs, const T2& rhs) {lhs.erase((T)rhs); return lhs;}

template<typename T2> bool operator== (T2& lhs, const int rhs) {if(rhs==0) return lhs.empty(); return (lhs.size() == rhs);}
template<typename T2> bool operator!= (T2& lhs, const int rhs) {if(rhs==0) return !lhs.empty(); return (lhs.size() != rhs);}
template<typename T2> T2 operator! (T2& lhs) {lhs.clear(); return lhs;}

// End of macros

main() {
	// print(4 _ 10);
	vector<int> v = {2, 3, 4};
	// print(v!=0 _ v==3);
	// print(v);
	// !v;print(v);
	// // print(v=0);
	// // print(v);
	// ((v += 1) += 2) += 4;
	// print(v);
	// vector<vector<int> > vv;
	// vector<int> v1 = {3, 4, 5};
	// vector<int> v2 = {3, 4, 5, 6, 7};
	// (vv += v1) += v2;
	// print(vv);
	// print_("+", "\\")(3, "io", true, v);
	// cout<<endl;
	// print_("+")(3, "io", true, v);
	// cout<<endl;
	// print_()(3, "io", true, v);
	// *(print, "_#_\n", "__")(v, "ohh", 'b');
	print.sep(" % ").end(" __lol\n")(8, "liplo", "mojo", v, 1000000000000);
	print.sep(" \\ ").end(" __o\n")(8, "liplo", "mojo", v, 1000000000000);
	print(8, "liplo", "mojo", v, 1000000000000);
	print(8, "liplo", "mojo", v, 100000000000);
	// string s = "abcd";
	// cout << s;
	return 0;
}
