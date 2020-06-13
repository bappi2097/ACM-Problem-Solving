#include<string>
#include<iostream>
#include<bits/stdc++.h>
int main()
{
    freopen("input.cpp","r",stdin);
    std::string stop_words;
    std::getline(std::cin, stop_words);

    std::string sentence;
    std::getline(std::cin, sentence);
    std::string::size_type i = sentence.find(stop_words);
    std::cout<<i<<" "<<stop_words.length()<<std::endl;
    if (i != std::string::npos)
        sentence.erase(i, stop_words.length());
    std::cout << sentence <<"\n";
}
