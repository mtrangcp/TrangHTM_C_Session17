#include <stdio.h>

void cn1( int *arr, int *n);
void cn2( int *arr, int n );
void cn3( int *arr, int n );
void cn4( int *arr, int n );
void cn5( int *arr, int n );
void cn6( int *arr, int n );
int checkNT( int a );

int main( ){
	int arr[50] ;
	int choice, check = -1, n;
	
	do{
		printf("\n---------Menu------------");
		printf("\n1. Nhap vao so ptu va gia tri ");
		printf("\n2. In so chan ");
		printf("\n3. In so nguyen to");
		printf("\n4. Dao nguoc mang ");
		printf("\n5. Sap xep mang");
		printf("\n6. Tim kiem");
		printf("\n7. Thoat");
		printf("\n Lua chon cua ban: ");
		scanf("%d", &choice);
		fflush(stdin);
		
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
				cn6(arr, n);
				break;
			}
			case 7:{
				printf("\nBan chon thoat!");
				break;
			}
			default:{
				printf("\nVui long chon dung menu(1-7)!");
				break;
			}
		}
		fflush(stdin);
	}while (choice != 7 );
	
	return 0;
}
int checkNT( int a ){
	if ( a < 2 ) return -1;
	for ( int i = 2; i*i <= a; i++){
		if ( a % i == 0) return -1;
	}
	return 1;
}

void cn1( int *arr, int *n){
	printf("\n Nhap so luong ptu: ");
	scanf("%d", &(*n));
	for ( int i = 0; i< *n ; i++){
		printf("Nhap ptu thu %d: ", i+1);
		scanf("%d", &(*(arr+i)) );
	}
	printf("\nMang vua nhap: ");
	for ( int i = 0; i< *n ; i++){
		printf("\t%d", *(arr+i));
	}
}

void cn2( int *arr, int n ){
	printf("\nPhan tu chan trong mang: ");
	for ( int i = 0; i< n ; i++){
		if ( *(arr+i) % 2 == 0 ) printf("\t%d", *(arr+i));
	}
}

void cn3( int *arr, int n ){
	printf("\nPhan tu la so nguyen to trong mang: ");
	for ( int i = 0; i< n ; i++){
		if ( checkNT(*(arr+i)) == 1 ) {
			printf("\t%d", *(arr+i));
		}
	}
}

void cn4( int *arr, int n){
	int i = 0, j = n - 1;
    while (i < j) {
        int temp = *(arr+i);
        *(arr+i) = *(arr+j);
        *(arr+j) = temp;
        i++;
        j--;
    }
    printf("\nMang doa nguoc: ");
	for ( int i = 0; i< n ; i++){
		printf("\t%d", *(arr+i));
	}
}

void cn5( int *arr, int n){
	char input;
	printf("\na. Tang dan ");
	printf("\nb. Giam dan ");
	
	do{
		printf("\nLua chon cua ban: ");
		scanf("%c", &input);
	}while( input != 'a' && input != 'b');
	
	if ( input == 'a' ){
		for ( int i = 0; i< n-1 ; i++){
			for ( int j = 0; j< n-i-1 ; j++){
				if ( *(arr+j) > *(arr+j+1) ){
					int temp = *(arr+j) ;
					*(arr+j) = *(arr+j+1) ;
					*(arr+j+1) = temp ;
				}	
			}
		}
	}else{
		for ( int i = 0; i< n-1 ; i++){
			for ( int j = 0; j< n-i-1 ; j++){
				if ( *(arr+j) < *(arr+j+1) ){
					int temp = *(arr+j) ;
					*(arr+j) = *(arr+j+1) ;
					*(arr+j+1) = temp ;
				}	
			}
		}
	}
	printf("\nKet qua sort: ");
	for ( int i = 0; i< n ; i++){
		printf("\t%d", *(arr+i));
	}
}

void cn6( int *arr, int n){
	int input ;
	int location[50], k = 0, count = 0;
	printf("\nNhap ky tu muon tim: ");
	scanf("%d", &input);
	for ( int i = 0; i< n ; i++){
		if ( *(arr+i) == input ){
			location[k++] = i+1;
			count = 1;
		}
	}
	if ( count == 0){
		printf("\n Ky tu can tim khong co trong mang!");
	}else{
		printf("\nky tu can tim o vi tri: ");
		for( int i = 0; i< k; i++){
			printf("\t%d", location[i]);
		}
	}
}
