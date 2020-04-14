#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

int main(int argc, char **cor)
{
        srand(time(0));
        int xd = rand()%100-50;
        int yd = rand()%100-50;
        int gorv = 50;
        int vertv = 50;
        int gorn = 0;
        int vertn = 0;
        int x = atoi(cor[1])+xd;
        int y = atoi(cor[2])+yd;
        cout << "Starie koordinaty:" << endl;
        cout << "x: " << cor[1] << "   y: " << cor[2] << endl;
        cout << "Izmenenie:" << endl;
        cout << "x: " << xd << "   y: " << yd << endl;

        if (y > gorn&& x > vertn)
        {
                if (y < gorv&& x < vertv)
                {
                        cout << "Novie koordinaty:" << endl;
                        cout << "x: " << x << "   y: " << y << endl;
                }
                else cout << "Sharik vipal za granicy" << endl;
        }
        else cout << "Sharik vipal za granicy" << endl;
        cout << " " << endl;
        return 0;
}