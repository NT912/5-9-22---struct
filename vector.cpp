#include <iostream>
#include <iomanip>
using namespace std;

struct Vector
{
  int x, y, z;
};

istream &operator>>(istream &in, Vector &v)
{
  cout << "Nhap toa do x: ";
  in >> v.x;
  cout << "Nhap toa do y: ";
  in >> v.y;
  cout << "Nhap toa do z: ";
  in >> v.z;

  return in;
}

ostream &operator<<(ostream &out, Vector &v)
{
  out << "Toa do Vector la: (" << v.x << "," << v.y << "," << v.z << ")";
  return out;
}

Vector operator+(const Vector &a, const Vector &b)
{
  Vector c;

  c.x = a.x + b.x;
  c.y = a.y + b.y;
  c.z = a.z + b.z;
  return c;
}

Vector operator-(const Vector &a, const Vector &b)
{
  Vector c;

  c.x = a.x - b.x;
  c.y = a.y - b.y;
  c.z = a.z - b.z;
  return c;
}

int operator*(Vector &a, Vector &b)
{
  return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}

int main()
{
  Vector vt1, vt2, vtc, vtt;

  cout << "Nhap toa do 3 diem cua Vector 1: \n";
  cin >> vt1;

  cout << "Nhap toa do 3 diem cua Vector 2: \n";
  cin >> vt2;

  vtc = vt1 + vt2;
  vtt = vt1 - vt2;

  cout << "\nTong 2 Vector la: " << vtc;
  cout << "\nHieu 2 Vector la: " << vtt;
  cout << "\nTich 2 Vector la: " << vt1 * vt2;
  return 0;
}
