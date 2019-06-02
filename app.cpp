//
//  app.cpp
//  
//
//  Created by Jordan Rapp on 6/1/19.
//

#include <iostream>
#include "profile.hpp"

int main() {
    
    std::vector<std::string> sams_pronouns = {"he","him"};
    Profile sam("sam", 30, sams_pronouns, "New York", "USA");
    
    sam.add_hobby("listening to audiobooks and podcasts");
    sam.add_hobby("playing rec sports like bowling and kickball");
    sam.add_hobby("writing a speculative fiction novel");
    sam.add_hobby("reading advice columns");
    
    std::cout << sam.view_profile();
    
}
