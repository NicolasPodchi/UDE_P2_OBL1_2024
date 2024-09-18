#ifndef STRINGS_H_INCLUDED
#define STRINGS_H_INCLUDED

#include "boolean.h"

const int MAX=80;
typedef char strings[MAX];

int strlar (strings s);

void print (strings s);

void scan (strings &s);

boolean strmen (strings s1, strings s2);

boolean streq (strings s1, strings s2);

void strcop (strings &s1,strings s2);

void strcon (strings &s1, strings s2);

void strswp (strings &s1,strings &s2);


#endif // STRINGS_H_INCLUDED
