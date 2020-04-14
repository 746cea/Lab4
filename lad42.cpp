#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <ctime>
#include <string>

using namespace std;

int main ()
{
        srand(time(0));
        int n = 7;
        for (int i=0; i<n; i++)
        {
                string b1 = to_string(rand()%50+1);
                string b2 = to_string(rand()%50+1);
                pid_t id;
                id = fork();
                switch(id) {
                        case -1:
                                perror("fork");
                                return -1;
                        case 0:
                                execl("lab41", "lab41", b1.c_str(), b2.c_str(), (char *)0);
                                return 7;
                        default: {
                                         cout << "Process id = " << id << endl;
                                         int status;
                                         wait(&status);
                                         break;
                                 }
                }
        }
        exit(0);
        return 0;
}