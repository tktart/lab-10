#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
    ifstream source;
    ofstream dest;
    source.open("cheerbook.txt");
    dest.open("cheerbook_copy.txt");
    
    // กรอก Code เฉพาะส่วนนี้ ให้สอดคล้องกับโจทย์และ Code ส่วนอื่น ๆ 
    if (!source) {
        cerr << "ไม่สามารถเปิดไฟล์ cheerbook.txt ได้" << endl;
        return 1;
    }
    
    // เขียนข้อความในบรรทัดแรก
    dest << "-------------------- BOOM ---------------------\n";
    
    // คัดลอกข้อมูลจาก cheerbook.txt ไปยัง cheerbook_copy.txt
    string line;
    while (getline(source, line)) {
        dest << line << endl;
    }
    
    // เขียนข้อความในบรรทัดสุดท้าย
    dest << "-------------------- HA!! ---------------------\n";
    
    source.close();
    dest.close();
    return 0;
}