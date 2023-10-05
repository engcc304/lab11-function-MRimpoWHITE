/*
    จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
    
    หมายเหตุ: ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น
    153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 +  5^3 +  3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง)
    370 = 3^3 + 7^3 + 0^3

    Test Case:
        Enter Number:
            153
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            370
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            372
    Output:
        Not Pass.
*/

#include <stdio.h>

void cal(int number){

    int char1, char2, char3, char4, power = 3;
    int N = number ; 

    if (number > 999)
    {
        power = 4 ;
    }
    else if (number > 99)
    {
        power = 3 ;
    }
    else
    {
        power = 2 ;
    }
    
    
    

    char1 = number % 10;

    number /= 10 ;
    char2 = number % 10;

    number /= 10;
    char3 = number % 10;

    number /= 10 ;
    char4 = number ;

    int char11 = char1 , char22 = char2, char33 = char3, char44 = char4 ;


    for (int i = 1; i < power ; i++ )
    {
        char11 = char11*char1 ;
        char22 = char22*char2 ;
        char33 = char33*char3 ;
        char44 = char44*char4 ;
    }

    int output = char11 + char22 + char33 + char44 ;

    // printf( "%d\n" , output );

    if ( N == output )
    {
        printf( "Pass." ) ; 
    }
    else
    {
        printf( "Not Pass." );
    }
    

}

int main() {
    int number ; 
    printf ( "Enter Number:\n" ) ; 
    scanf ( "%d" , &number ) ;

    cal( number ) ;

    return 0 ;

}//end main function