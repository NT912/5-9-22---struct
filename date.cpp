#include <iostream>
using namespace std;

struct Date
{
    int ngay, thang, nam;
};

istream &operator>>(istream &in, Date &d)
{
    cout << "Nhap ngay: ";
    in >> d.ngay;
    cout << "Nhap thang: ";
    in >> d.thang;
    cout << "Nhap nam: ";
    in >> d.nam;

    return in;
}

ostream &operator<<(ostream &out, Date &d)
{
    out << "Ngay da nhap la: " << d.ngay << "/" << d.thang << "/" << d.nam;
    return out;
}

// tiền tố
Date &operator++(Date &d)
{
    if (kiemTraNgayCuoi(d.thang, d.nam))
    {
    }
    return d;
}

int kiemTraNamNhuan(int nam)
{
    return ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0);
}

int kiemTraNgayCuoi(int thang, int nam)
{
    int songay[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (kiemTraNamNhuan(nam))
    {
        songay[2] = 29;
    }
}
/*
{
    switch (d.thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        return 31;
        break;
    }

    case 4:
    case 6:
    case 9:
    case 11:
    {
        return 30;
    }

    case 2:
    {
        if (kiemTraNamNhuan(d.nam))
        {
            return 29;
        }
        return 28;
    }
    }
}

Date themNgay(Date &d)
{
    Date nDay;

    switch (kiemTraNgayCuoi(d.ngay))
    {
    case 31:
    {
        return nDay + 1;
    }
    }
}
*/

int main()
{
    Date today;

    cout << "Nhap vao ngay thang nam: \n";
    cin >> today;

    kiemTraNgayCuoi(today);

    Date nextDay = today++;

    cout << "Ngay thang nam sau khi tang la: " << today++;
    cout << "Ngay thang nam sau khi giam la: " << today--;
    return 0;
}
