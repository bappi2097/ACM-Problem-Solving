#include <stdio.h>
#include <string.h>
#include <fstream>

int main (int argc, char *argv[])
{
    char url[1000] = "https://www.google.com";

    std::fstream fs;
    fs.open(url);
    //fs.close();

    return 0;
}
