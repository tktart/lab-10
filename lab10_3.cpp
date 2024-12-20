#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>  // ต้องเพิ่มการใช้งาน ifstream เพื่อเปิดไฟล์

using namespace std;

int main()
{
    int count = 0;  // ตัวแปรเก็บจำนวนข้อมูล
    float sum = 0;  // ตัวแปรเก็บผลรวมของข้อมูล
    float sum_of_square = 0;  // ตัวแปรเก็บผลรวมของข้อมูลยกกำลังสอง
    string textline;

    ifstream source("score.txt");  // เปิดไฟล์ score.txt เพื่ออ่านข้อมูล

    if (!source) {
        cerr << "ไม่สามารถเปิดไฟล์ score.txt ได้" << endl;
        return 1;  // หากไม่สามารถเปิดไฟล์ได้ให้หยุดการทำงาน
    }

    // อ่านข้อมูลจากไฟล์ทีละบรรทัด
    while (getline(source, textline))
    {
        float score = stof(textline);  // แปลงบรรทัดเป็นตัวเลข float
        sum += score;  // บวกค่าของคะแนนในแต่ละบรรทัด
        sum_of_square += score * score;  // คำนวณผลรวมของคะแนนยกกำลังสอง
        count++;  // นับจำนวนข้อมูล
    }

    source.close();  // ปิดไฟล์หลังจากอ่านข้อมูลเสร็จ

    // คำนวณค่าเฉลี่ย
    float mean = sum / count;

    // คำนวณส่วนเบี่ยงเบนมาตรฐาน
    float stddev = sqrt((sum_of_square / count) - (mean * mean));

    // แสดงผลลัพธ์
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3) << defaultfloat;  // กำหนดให้แสดงผลลัพธ์ได้ 3 ตำแหน่งทศนิยม
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << stddev << "\n";

    return 0;
}