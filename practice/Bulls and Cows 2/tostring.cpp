#include <sstream>
#include "tostring.h"

using namespace std;

/*
template<class T>
string to_string(const T& t) {
    stringstream stream;
    stream << t;
    return stream.str();
}
*/

string to_string(int integer) {
    stringstream ss;
    ss << integer;
    return ss.str();
}