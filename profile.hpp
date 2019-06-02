//
//  profile.hpp
//  
//
//  Created by Jordan Rapp on 6/1/19.
//

#include <vector>
#include <string>

class Profile
{
    
private:
    std::string name;
    int age;
    std::vector<std::string> pronouns;
    std::string city;
    std::string country;
    std::vector<std::string> hobbies;
    
public:
    Profile(std::string new_name, int new_age, std::vector<std::string> new_pronouns, std::string new_city, std::string new_country);
    
    std::string view_profile();
    
    void add_hobby(std::string new_hobby);
    
};
