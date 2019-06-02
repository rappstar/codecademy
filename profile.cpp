//
//  profile.cpp
//  
//
//  Created by Jordan Rapp on 6/1/19.
//

#include "profile.hpp"

Profile::Profile (std::string new_name, int new_age, std::vector<std::string> new_pronouns, std::string new_city, std::string new_country)
{
    
    name = new_name;
    age = new_age;
    pronouns = new_pronouns;
    city = new_city;
    country = new_country;
    
}

std::string Profile::view_profile()
{
    
    std::string bio = "Name: " + name;
    bio += "\nAge: " + std::to_string(age);
    bio += "\nPronouns: ";
    for (int i = 0; i < pronouns.size(); i++)
    {
        
        if (i > 0)
        {
            bio += ", ";
        }
        bio += pronouns[i];
        
    }
    bio += "\nHobbies: ";
    for (int i = 0; i < hobbies.size(); i++)
    {
        
        if (i > 0)
        {
            bio += "\n";
        }
        bio += hobbies[i];
        
    }
    bio += "\n";
    
    return bio;
    
}

void Profile::add_hobby(std::string new_hobby)
{
    
    hobbies.push_back(new_hobby);
    
}
