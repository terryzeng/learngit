#include <string>
#include <iostream>

int main(){
    std::string st("Daniel");
    const char ca1[] = {'C','+','+'};
    const char ca2[] = "C++";
    
    int ca1_size = sizeof(ca1);
    int ca2_size = sizeof(ca2);

    std::cout << "The size of " << st << " is " << st.size() << " characters, include the newline\n";
    std::cout << "The size of " << ca1 << " is " << ca1_size << " characters, include the newline\n";
    std::cout << "The size of " << ca2 << " is " << ca2_size << " characters, include the newline\n";
    
    return 0;
}
