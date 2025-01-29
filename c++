void quote_gen() {
    // declare variables
    int num;
    
    // random number generator
    srand (time(NULL));
    num = rand() % 15;
    
    // quote picker
    switch (num) {
        case 1:
        std::cout << "'Everything reminds me of us' -- Far, SZA";
        break;
        
        case 2:
        std::cout << "'Well, I'm not the moon. I'm not even a star' -- Your Best American Girl, Mitski";
        break;
        
        case 3:
        std::cout << "'I'd rather lose somebody than use somebody' -- Reflections, The Neighborhood";
        break;
        
        case 4:
        std::cout << "'Be yourself and know that's good enough' -- Be Yourself, Frank Ocean";
        break;
        
        case 5:
        std::cout << "'And she cried over nothing' -- Blue Hair, TV Girl";
        break;
        
        case 6:
        std::cout << "'Everything you lose is a step you take' -- You're On Your Own, Kid, Taylor Swift";
        break;
        
        case 7:
        std::cout << "'But I want to live and not just survive' -- Love in the Dark, Adele";
        break;
        
        case 8:
        std::cout << "'If I fail, I'll fall apart' -- Oh No!, MARINA";
        break;
        
        case 9:
        std:: cout << "'Don't try to fix me, I'm not broken' -- Hello, Evanescence";
        break;
        
        case 10:
        std:: cout << "'I played dumb but I always knew' -- traitor, Olivia Rodrigo";
        break;
        
        case 11:
        std:: cout << "'I feel okay when I see you smile, smile' -- Dandelions, Ruth B";
        break;
        
        case 10:
        std:: cout << "'My love is not a joke' -- Just a Fan, Roar";
        break;
    }
    
} 

// calling the function
int main() {
    quote_gen();
    

    return 0;
}
