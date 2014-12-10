#include <iostream>
#include <vector>
#include <string>

int main(){
    std::string word;
    std::vector<std::string> text;

    do{
        //if (word != "\n")
        if (std::cin >> word)
            text.push_back(word);
    }while((word == "\n"));

    std::cout << "words read are: \n"; 
    //for (int ix=0; ix<text.size(); ++ix)
    //    std::cout << text[ix] << ' ';

    for (std::vector<std::string>::iterator it=text.begin(); it!=text.end(); ++it)
        std::cout << *it << ' ';
    std::cout << std::endl;
    return 0;
}

