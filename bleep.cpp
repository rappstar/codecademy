//
//  bleep.cpp
//  
//
//  Created by Jordan Rapp on 6/1/19.
//

#include <iostream>
#include <string>

std::string bleep (std::string const &bleep_me, std::string &bleeped)
{
    
    // find the first position of the word to bleep
    std::size_t found = bleeped.find(bleep_me);
    
    // if that word is present, replace it and then keep looking
    while (found != std::string::npos)
    {
        
        //std::cout << "Found at: " << found << "\n";
        
        for (int j = found; j < found + bleep_me.size(); j++)
        {
            
            bleeped[j] = '*';
            
        }
        
        //std::cout << bleeped << "\n";
        
        found = bleeped.find(bleep_me, found+1);
        
    }
    
    return bleeped;
    
}

int main()
{
    
    std::string word = "broccoli";
    std::string text = "broccoli is a cruciferous vegetable; besides broccoli, cruciform family includes kale and cauliflower.";
    
    std::cout << bleep(word, text) << "\n";
    
}
