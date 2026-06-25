#include <Common/CoverageTestFunctions.h>

namespace DB
{

int coveredDemoFunction(int x)
{
    return x * x;
}

int uncoveredDemoFunction(int x)
{
    return x + 1;
}

}
