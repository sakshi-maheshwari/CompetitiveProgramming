// https://www.hackerrank.com/challenges/virtual-functions/problem
class Person
{
  public:
    string name;
    int age;

    virtual void getdata()
    {
        cin >> name >> age;
    }

    virtual void putdata()
    {
        cout << name << " " << age << endl;
    }
};

class Professor : public Person
{
  public:
    Professor()
    {
        this->cur_id = ++id;
    }

    int publications;
    static int id;
    int cur_id;

    void getdata()
    {
        cin >> name >> age >> publications;
    }

    void putdata()
    {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};
int Professor::id = 0;

class Student : public Person
{
  public:
    Student()
    {
        this->cur_id = ++id;
    }

    int marks[6];
    static int id;
    int cur_id;

    void getdata()
    {
        cin >> name >> age;
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }

    int sum()
    {
        int s = 0;
        for (int i = 0; i < 6; i++)
        {
            s += marks[i];
        }
        return s;
    }

    void putdata()
    {
        cout << name << " " << age << " " << sum() << " " << cur_id << endl;
    }
};
int Student::id = 0;