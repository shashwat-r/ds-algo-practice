#include<bits/stdc++.h>
using namespace std;

struct A {
    A() {
        int i=0;
        std::generate(&v[0], &v[10], [&i](){  return ++i;} );
    }
    int * begin() {
        return &v[0];
    }
    int * end() {
        return &v[10];
    }
    int v[10];
};

struct IT {
    int ITV[2];
    void set(int b, int e) {
        ITV[0] = b;
        ITV[1] = e;
    }
    void operator++() {
        ITV[0] ++;
    }
    int *getbeg() {
        return ITV;
    }
    int *getend() {
        return ITV+1;
    }
    int *operator*() {
        return ITV+(ITV[0]>=ITV[1]);
    }
};

// range based for loop in c++:
// for( range_declaration : range_expression )
// becomes:
// {
//   auto && __range = range_expression ;
//   for (auto __begin = begin_expr,
//             __end = end_expr;
//             __begin != __end; ++__begin) {
//     range_declaration = *__begin;
//     loop_statement
//   }
// }

struct _mit {
    int x, d = 1;
    void set(int xx, int dd = 1) {x = xx; d = dd;}
    void operator++() {x += d;}
    int operator*() {return x;}
    bool operator!=(_mit& rhs) {
        // cout << "[_mit " << x << " " << d << "]" << endl;
        if(d>0)return(**this<*rhs);
        else if(d<0) return(**this>*rhs);
        else cerr << "difference cannot be 0." << endl, assert(d!=0);
    }
};

// struct mit {
//     _mit b, e; int d = 1;
//     void set(int ee) {b.set(0);e.set(ee);}
//     void set(int bb, int ee, int dd = 1) {d = dd; b.set(bb, dd); e.set(ee);}
//     // _mit operator*() {cout<<"[mit "<<*b<<" "<<*e<<" "<<d<<"]"<<endl; if((d>0 && *b<*e)||(d<0 && *b>*e)) return b; else return e;}
// };

// struct range2 {
//     mit it;
//     range2(int e) {it.set(e);}
//     range2(int b, int e, int d = 1) {it.set(b, e, d);}
//     _mit begin() {return it.b;}
//     _mit end() {return it.e;}
// };

struct range {
    _mit b, e;
    range(int ee) {b.set(0);e.set(ee);}
    range(int bb, int ee, int dd = 1) {b.set(bb, dd); e.set(ee);}
    _mit begin() {return b;}
    _mit end() {return e;}
};

int main() {
    // A a;
    // for( auto it : a ) {
    //     std::cout << it << " ";
    // }
    // cout << endl;
    range ra = range(5, 8);
    for (int x:range(5, -10, 0)){cout << x << " ";}cout << endl;
    for (int x:ra){cout << x << " ";}cout << endl;
    for (int x:range(-5, 10, 2)){cout << x << " ";}cout << endl;
    for (int x:range(5, -10, -1)){cout << x << " ";}cout << endl;
    // for (int x:range(5, -10, 0)){cout << x << " ";}
}
