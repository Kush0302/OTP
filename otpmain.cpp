#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;
void randomPasswordGeneration(int N)
{
int i = 0;
int randomizer = 0;
srand((unsigned int)(time(NULL)));
    char numbers[] = "0123456789";

    char letter[] = "abcdefghijklmnoqprstuvwyzx";

    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

    char symbols[] = "!@#$^&*?";


    char password[N];


    randomizer = rand() % 4;


    for (i = 0; i < N; i++)
        {

        if (randomizer == 1)
            {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 2)
        {
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 3)
        {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else
        {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    }
}
int main()
{
string username;
string password;
read:
    cout<<"-----------------------------";
    cout<<"\n       WELCOME USER           ";
    cout<<"\n-----------------------------"<<endl;
    cout<<" Enter your username: " << endl;
    cin >> username;
    cout << "Enter your password: " << endl;
    cin >> password;
{
    if( username!="polygon" && password!="mecia")
    {
        cout << "Incorrect username/password combination. Please try again." << "\n" <<endl;
        goto read;

    }
    else
    {
    cout<<"Access granted."<<endl;

    }
}

    int N = 10;
    cout<<"\n your OTP is:";

    randomPasswordGeneration(N);
    cout<<"\n Your OTP:";

    return 0;
}
