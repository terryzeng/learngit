#include <string>
#include <iostream>

int main(){
    std::string st("The expense of spirit\n");

    std::cout << "The size of "
        << st
        << " is " << st.size()
        << " characters, include the newline\n";
    return 0;
}
