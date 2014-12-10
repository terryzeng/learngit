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
        
        for (int ix = 0; ix < buf.size(); ++ix)
        {
            switch(buf[ix])
            {
                case 'a': case 'A': ++aCnt; break;
                case 'e': case 'E': ++eCnt; break;
                case 'i': case 'I': ++iCnt; break;
                case 'o': case 'O': ++oCnt; break;
                case 'u': case 'U': ++uCnt; break;
                case 'b': case 'B': ++bCnt; break;
                case 'd': case 'D': ++dCnt; break;
                case 'f': case 'F': ++fCnt; break;
                case 's': case 'S': ++sCnt; break;
                case 't': case 'T': ++tCnt; break;
                default: ++notVowel; break;
            }
        }
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

