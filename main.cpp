#include <iostream>

int minimalJumps(int start, int end, int frogDistance)
{
    int minimalJumps;

    if (start >= end) return 0;
    else if (frogDistance > (end - start)) return 1;
    else
    {
        int totalDistance = end - start;

        if(totalDistance % frogDistance == 0)
        {
            minimalJumps = totalDistance / frogDistance;
        }
        else
        {
            minimalJumps = (totalDistance / frogDistance) + 1;
        }

        return minimalJumps;
    }
}
int main() {

    int minJumps = minimalJumps(14, 578, 71);

    std::cout<<minJumps;

    return 0;
}
