#include "geom.h"

bool Test_intsec()
{
    Point edge1{5,5,8};
    Point edge2{-4,-7,-7};
    Point apex1{5,2,6};
    Point apex2{-2, 2, -4};
    Point apex3{0, -2, 4};
    Segment segment{edge1,edge2};
    Triangle triangle{apex1,apex2, apex3};
    Point res {2,1,3};
    return (intsec(segment, triangle)==res);
}

int main()
{
    if (Test_intsec())
    {
        return 0;
    }

    return 1;
}