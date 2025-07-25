#include <stdio.h>    // สำหรับฟังก์ชัน input/output
#include <string.h>  


typedef struct {  
    char name[2]; // ชื่อประกาศตัวแปร
    int age;      // อายุ
    float height_cm; // ส่วนสูง (เซนติเมตร)
    float weight_kg; // น้ำหนัก (กิโลกรัม)
    char grade_code[2]; // รหัสเกรด
} Student;

int main() {
    
    Student students[] = {
        {"A", 18, 170.0, 65.5, "A"},//ข้อมูลของนักเรียน
        {"T", 18, 168.2, 80.5, "B"},//ข้อมูลของนักเรียน
        {"K", 18, 172.8, 62.8, "C"},//ข้อมูลของนักเรียน
    };


    int num_students = sizeof(students) / sizeof(students[0]);//คำนวณจำนวนของนักเรียน

    printf("+-------+-----+----------+-----------+-----------+\n");//เส้นขอบตางราง
    printf("| Name  | Age |Height(cm)| Weight(kg)|Grade Code |\n");//เส้นขอบตางราง
    printf("+-------+-----+----------+-----------+-----------+\n");//เส้นขอบตางราง

    for (int i = 0; i < num_students; i++) {//ลูปข้อมูลตามสูตร ที่ i<num_students โดย i=0
        // แสดงผลข้อมูลของนักเรียนแต่ละคน
        // ใช้ %s สำหรับชื่อ, %d สำหรับอายุ, %.1f สำหรับส่วนสูงและน้ำหนัก, และ %s สำหรับรหัสเกรด
    printf("| %s     | %d  | %.1f    | %.1f      | %s         |\n",//ตัวแปรที่ใช้ในการแสดงผล และ ขอบตาราง
               students[i].name,// ชื่อของนักเรียน
               students[i].age,// อายุของนักเรียน
               students[i].height_cm,// ส่วนสูงของนักเรียน
               students[i].weight_kg,// น้ำหนักของนักเรียน
               students[i].grade_code);// รหัสเกรดของนักเรียน
               printf("+-------+-----+----------+-----------+-----------+\n");//เส้นขอบตางราง
    }
    return 0;
}