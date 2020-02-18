/* ����������� ����� Rational(������������ �����).

����� ������ ������� ���������� ����� n / m(����������� �� ����� 0).

����� ������ ��������� � ������������ ����.

����� ������ ��������� ��� ����������� ������������ � ����������.

� ������ ������ ���� ����������� �������� :
������������
4 ����������� �������������� ��������
���������
����� / ������ � ����� */

class Rational {

private:
  int n, m;

public:
  Rational plus (Rational& a, Rational& b)
  {
    Rational res;
    res.n = a.n + b.n;
    if (a.m + b.m != 0) res.m = a.m + b.m;
    //������� ����������
    return res;
  }
  Rational minus(Rational& a, Rational& b)
  {
    Rational res;
    res.n = a.n - b.n;
    res.m = a.m - b.m;
    //����������
    return res;
  }
  Rational Simplify (Rational a)
  {
    int i = 2;
    while (!(a.n % i == 0 && a.m % i == 0))
    {
      i++;
    }
    a.n /= i;
    a.m /= i;
    }
  };

