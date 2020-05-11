#include <iostream>
#include <algorithm>
#include <cassert>
#define assertm(exp, msg) assert(((void)msg, exp))
 

bool isPalindrome(const std::string & text){
    auto itBegin = text.begin();
    auto itEnd = text.end();
    itEnd--;

    for(int i=0; i<=(text.size()/2); ++i){
        if((std::tolower(*itBegin)) != (std::tolower(*itEnd)))
            return false;
        itBegin++;
        itEnd--;
    }
    return true;
}

int main(){
    assertm(isPalindrome("Ala"), "Ala is a palindrom");
    assertm(isPalindrome("kajak"), "kajak is a palindrom");
    assertm(isPalindrome("neveroddoreven"), "neveroddoreven is a palindrom");
    assertm((not isPalindrome("abcada")), "abcada is NOT a palindrom");
    assertm((not isPalindrome("Ala ma kota")), "Ala ma kota is NOT apalindrom");

    return 0;
}
