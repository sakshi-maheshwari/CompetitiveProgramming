// https://www.hackerrank.com/challenges/inherited-code/problem
class BadLengthException
{
    int n;

  public:
    BadLengthException(int error)
    {
        n = error;
    }

    int what()
    {
        return n;
    }
};