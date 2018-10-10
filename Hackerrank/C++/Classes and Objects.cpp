// https://www.hackerrank.com/challenges/classes-objects/problem
class Student
{
    vector<int> scores;

  public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            int temp = 0;
            cin >> temp;
            scores.push_back(temp);
        }
    }

    int calculateTotalScore()
    {
        int sum = 0;
        for (int i = 0; i < scores.size(); i++)
        {
            sum = sum + scores[i];
        }
        return sum;
    }
};