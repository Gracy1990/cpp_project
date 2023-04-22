#include<iostream>
#include <string>
using namespace std;

int main()
{
    string imempty;
    string helloThere ("How may I help you?");
    string theReply = "Can I get some coffee?";
    imempty = "Sure! How would you like it?";
    string theAnswer = imempty;
    string alot (10, 's');
    string someSs (alot);
    string theRequest ("With a lot of sugar. Thank you");

    cout<<helloThere<<endl<<theReply<<endl
    <<theAnswer<<endl<<theRequest<<endl;

    return 0;
}