#include<stdio.h>
struct SACH {
	char masach[10];
	char tieude[50];
	char tacgia[30];
	int  namxb;
	float giaban;
	int sotrang;
	char nhaxb[30];
	char loaisach[20];
	};
	
	typedef struct SACH SACH;
	void nhap1Sach (SACH *s);
	void xuat1Sach (SACH s);
	void nhapNSach (SACH a[], int n);
	void xuatNSach (SACH a[], int n);
	
	int main () {
		int n; 
		printf("nhap so luong sach: ");
		scanf("%d", &n);
		
		SACH ds[100];
		nhapNSach (ds, n);
		xuatNSach (ds, n); 
		return 0;
		}
		
		void nhap1Sach (SACH *s)
		{
		
		fflush(stdin);
		printf("\n nhap ma sach: ");
		gets(s->masach);
		printf("\n nhap tieu de: ");
		fflush(stdin);
		gets(s->tieude);
		printf("\n nhap ten tac gia: ");
		fflush(stdin);
		gets(s->tacgia);
		printf("\n nhap nam xuat ban: ");
		scanf("%d", &s->namxb);
		printf("\n nhap gia ban: ");
		scanf("%f", &s->giaban);
		printf("\nhap so trang: ");
		fflush(stdin);
		scanf("%d", &s->sotrang);
		fflush(stdin);
		printf("\n nhap nha xuat ban: ");
		gets(s->nhaxb);
		printf("\n nhap loai sach: ");
		fflush(stdin);
		gets(s->loaisach);
	}
	
	void xuat1Sach(SACH s)
	
	{
		printf("\nMa sach:   %s", s.masach);
		printf("\nTieu de:   %s", s.tieude);
		printf("\nTac gia:   %s", s.tacgia);
		printf("\nNam xuat ban:   %d", s.namxb);
		printf("\nGia ban:   %g", s.giaban);
		printf("\nSo trang:  %d", s.sotrang);
		printf("\nNha xuat ban:   %s", s.nhaxb);
		printf("\nLoai sach: %s\n", s.loaisach);
	}
	void nhapNSach(SACH a[], int n)
{
	int i;
    for (i = 0; i < n; i++) {
        printf("\n Nhap sach thu %d \n", i + 1);
        nhap1Sach(&a[i]);
    }
}

void xuatNSach(SACH a[], int n)
{
	int i;
    for ( i = 0; i < n; i++) {
        printf("\n Sach thu %d \n", i + 1);
        xuat1Sach(a[i]);
    }
}
		
		
