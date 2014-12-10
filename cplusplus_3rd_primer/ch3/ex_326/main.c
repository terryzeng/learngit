#include <iostream>
#include "String.h"

int main(){
    
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, bCnt = 0, dCnt = 0, fCnt = 0, sCnt = 0, tCnt = 0,
        theCnt = 0, itCnt = 0, wdCnt = 0, notVowel = 0;

    String buf, the("the"), it("it");
    
    
    while ((std::cin.get() != '\n')&&(std::cin>>buf)){
        ++wdCnt;

        std::cout << buf << ' ';
        if (wdCnt % 12 == 0)
            std::cout << std::endl;

        if (buf == the || buf == "The") 
            ++theCnt;
        else
            if (buf == it || buf == "It")
                ++itCnt;
        
        aCnt += buf.count('a');
        eCnt += buf.count('e');
        iCnt += buf.count('i');
        oCnt += buf.count('o');
        uCnt += buf.count('u');
        bCnt += buf.count('b');
        dCnt += buf.count('d');
        fCnt += buf.count('f');
        sCnt += buf.count('s');
        tCnt += buf.count('t');

    };

    std::cout << "\n\n"
         << "Words read:" << wdCnt << "\n\n"
         << "the/The:" << theCnt << "\n\n"
         << "it/It:" << itCnt << "\n\n"
         << "non-vowels read:" << notVowel << "\n\n"
         << "a:" << aCnt << '\n'
         << "e:" << eCnt << '\n'
         << "i:" << iCnt << '\n'
         << "o:" << oCnt << '\n'
         << "u:" << uCnt << '\n'
         << "b:" << bCnt << '\n'
         << "d:" << dCnt << '\n'
         << "f:" << fCnt << '\n'
         << "s:" << sCnt << '\n'
         << "t:" << tCnt << std::endl;
    return 0;
}

