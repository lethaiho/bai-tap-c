#include <stdio.h>

struct SINH_VIEN {
    char mssv[10];
    char hoten[30];
    int namsinh;
    float diem;
    char malop[10];
};

typedef struct SINH_VIEN SV;

void nhapSV(SV *a);
void xuatSV(SV a);
void nhapDSSV(SV a[], int n);
void xuatDSSV(SV a[], int n);

int main() {
    int n = 2;
    SV a[2];
    
    nhapDSSV(a, n);
    xuatDSSV(a, n);

    return 0;
}

// Nhap thông tin 1 sinh viên
void nhapSV(SV *a) {
    printf("Nhap MSSV: ");
    scanf("%s", a->mssv);

    printf("Nhap ho ten: ");
    scanf(" %[^\n]", a->hoten);   

    printf("Nhap nam sinh: ");
    scanf("%d", &a->namsinh);

    printf("Nhap diem: ");
    scanf("%f", &a->diem);

    printf("Nhap ma lop: ");
    scanf("%s", a->malop);
}

// Xuat 1 sinh viên
void xuatSV(SV a) {
    printf("MSSV: %s | Ho ten: %s | Nam sinh: %d | Diem: %.2f | Ma lop: %s\n", a.mssv, a.hoten, a.namsinh, a.diem, a.malop);
}

// Nhap danh sách sinh viên
void nhapDSSV(SV a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien %d:\n", i + 1);
        nhapSV(&a[i]);
    }
}

// Xuat danh sách sinh viên
void xuatDSSV(SV a[], int n) {
    int i;
    printf("\nDANH SACH SINH VIEN LOP TRI TUE NHAN TAO\n");
    for (i = 0; i < n; i++) {
        xuatSV(a[i]);
    }
}

