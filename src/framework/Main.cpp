#include "ICommon.h"

int main(int argc, char *argv[])
{
    common->Init();

    while (1)
    {
        common->Frame();
    }

    return 0;
}