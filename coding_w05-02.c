#include <stdio.h>     // เรียกใช้ไลบรารีมาตรฐานสำหรับการแสดงผลทางหน้าจอ

int main() {        //เริ่มต้นฟังก์ชันหลักของโปรแกรม
    char name[30]; //ประกาศตัวแปรชื่อ
    int age;       // ประกาศตัวแปรอายุ
    float height;  // ประกาศตัวแปรส่วนสูง
    char subject;  // ประกาศตัวแปรวิชา
    float grade;   // ประกาศตัวแปรเกรด
    char gradeLetter;// ประกาศตัวแปรเกรดตัวอักษร

    printf("Enter your name, age, height, subject, grade, and grade letter (separated by spaces): ");//แสดงข้อความกำกับว่าต้องใส่ข้อมูลอะไรบ้าง
    scanf("%29s %d %f %c %f %c", name, &age, &height, &subject, &grade, &gradeLetter);               //รับค่าจากผู้ใช้โดยใช้ scanf

    printf("%s is %d year old and %.1f centimeters tall.\n", name, age, height);                       //แสดงผลออกมาบนบรรทัดที่1 ชื่่อ,อายุ และส่วนสูงตามลำดับ
    printf("in subject %c, %s got %.2f which is symbolized as %c.\n", subject, name, grade, gradeLetter);//แสดงผลออกมาบนบรรทัดที่2




    return 0;     // คืนค่า 0 เพื่อแสดงว่าโปรแกรมทำงานสำเร็จ
}