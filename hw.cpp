# include <iostream>
# include <cstdlib>
# include <string>
# include "LibHelp.h"

using namespace std;


/* void gethelp()
{
    const char* Author_ptr = std::getenv ("Author"); 
    const char* Version_ptr = std::getenv ("Version");
    std::string Author = "";
    std::string Version = "";
    if (Author_ptr)
    {
    Author = Author_ptr;
    }
    else
    {
        cerr << "Author not exist" << "\n";
    }

    if (Version_ptr)
    {
    Version = Version_ptr;
    }
    else
    {
        cerr << "Version not exist" << "\n";
    }
    cout << "Author = " << Author << "\n" << "Version = " << Version << endl;
}
*/


int main (int argc, char* argv[])
{
    bool needHelp = false;
    
    for (int i = 0; i < argc; i++)
    {
        string arg = argv[i];
        if (arg == "--help")
        {
        needHelp = true;
        
        }
     cout << "arg " << i << ": " << argv[i] << endl;
    }
    if (needHelp == true)
    {
        gethelp();
    }
    return 0;
}


