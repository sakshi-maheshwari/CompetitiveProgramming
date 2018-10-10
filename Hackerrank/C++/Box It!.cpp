// https://www.hackerrank.com/challenges/box-it/problem
class Box
{
  public:
    int l, b, h;

    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }

    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }

    Box(const Box &B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    int getLength()
    {
        return l;
    }

    int getBreadth()
    {
        return b;
    }

    int getHeight()
    {
        return h;
    }

    long long CalculateVolume()
    {
        long long v = (long)l * (long)b * (long)h;
        return v;
    }
};

ostream &operator<<(ostream &os, Box &B)
{
    os << B.l << " " << B.b << " " << B.h << " ";
    return os;
}

bool operator<(const Box &A, const Box &B)
{
    if (A.l < B.l)
    {
        return true;
    }
    else if (A.l == B.l)
    {
        if (A.b < B.b)
        {
            return true;
        }
        else if (A.b == B.b)
        {
            if (A.h < B.h)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}