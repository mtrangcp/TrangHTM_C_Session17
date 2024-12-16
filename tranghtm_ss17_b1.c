#include <stdio.h>

void cn1( int *arr, int *n);
void cn2( int *arr, int n );
void cn3( int *arr, int n );
void cn4( int *arr, int n );
void cn5( int *arr, int n );

int main( ){
	int arr[50] ;
	int choice, check = -1, n;
	
	do{
		printf("\n---------Menu------------");
		printf("\n1. Nhap vao so ptu va gia tri ");
		printf("\n2. Hien thi mang");
		printf("\n3. Tinh do dai mang");
		printf("\n4. Tinh tong cac ptu trong mang ");
		printf("\n5. Hien thi max");
		printf("\n6. Thoat");
		printf("\n Lua chon cua ban: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:{
				check = 1;
				cn1(arr, &n);
				break;
			}
			case 2:{
				if ( check == -1 ){
					printf("\nMang rong, vui long chon cn1!");
				}else{
					cn2(arr, n);
				}
				break;
			}
			case 3:{
				if ( check == -1 ){
					printf("\nMang rong, vui long chon cn1!");
				}else{
					cn3(arr, n);
				}
				break;
			}
			case 4:{
				if ( check == -1 ){
					printf("\nMang rong, vui long chon cn1!");
				}else{
					cn4(arr, n);
				}
				break;
			}
			case 5:{
				if ( check == -1 ){
					printf("\nMang rong, vui long chon cn1!");
				}else{
					cn5(arr, n);
				}
				break;
			}
			case 6:{
				printf("\nBan chon thoat!");
				break;
			}
			default:{
				printf("\nVui long chon dung menu(1-6)!");
				break;
			}
		}
	}while (choice != 6 );
	
	return 0;
}

void cn1( int *arr, int *n){
	printf("\n Nhap so luong ptu: ");
	scanf("%d", &(*n));
	for ( int i = 0; i< *n ; i++){
		printf("Nhap ptu thu %d: ", i+1);
		scanf("%d", &(*(arr+i)) );
	}
}

void cn2( int *arr, int n ){
	printf("\nPhan tu trong mang: ");
	for ( int i = 0; i< n ; i++){
		printf("\t%d", *(arr+i));
	}
}

void cn3( int *arr, int n ){
	printf("\nDo dai mang: %d", n);
}

void cn4( int *arr, int n){
	int sum = 0;
	for ( int i = 0; i< n ; i++){
		sum += *(arr+i) ;
	}
	printf("\nTong cac ptu trong mang: %d", sum);
}

void cn5( int *arr, int n){
	int max = *arr ;
	for ( int i = 0; i< n ; i++){
		if ( *(arr+i) > max ){
			max = *(arr+i);
		}
	}
	printf("\nMax: %d", max);
}

