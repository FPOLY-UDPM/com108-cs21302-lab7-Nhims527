/******************************************************************************
 * Họ và tên: [Trần Quốc Cường]
 * MSSV:      [PS48626]
 * Lớp:       [CS21302-COM108]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


#include <stdio.h>

int main() {

    char s[100];
    printf("Xin moi nhap vao chuoi: ");
    fgets(s, 100, stdin);

    int i = 0;
    int n = 0;   
    int p = 0;

    while(s[i] != '\0') {

        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }

        if(s[i] >= 'a' && s[i] <= 'z') {

            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' 
               || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
                n++;
            } else {
                p++;
            }
        }

        i++;
    }

    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", s, n, p);

    return 0;
}
