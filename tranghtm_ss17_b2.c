#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cn1( int *arr, int *n);
void cn2( int *arr, int n );
void cn3( int *arr, int n );
void cn4( int *arr, int n );
void cn5( int *arr, int n );

int main( ){
	char arr[50] ;
	int choice, check = -1, n;
	
	do{
		printf("\n---------Menu------------");
		printf("\n1. Nhap vao chuoi ");
		printf("\n2. In ra chuoi ");
		printf("\n3. Dem so luong ky tu chu cai ");
		printf("\n4. Dem so luong ky tu chu so ");
		printf("\n5. Dem so luong ky tu dac biet ");
		printf("\n6. Thoat");
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
	fflush(stdin);
	
	for ( int i = 0; i< *n ; i++){
		printf("Nhap ky tu thu %d: ", i+1);
		scanf("%c", &(*(arr+i)) );
		fflush(stdin);
	}
}

void cn2( int *arr, int n ){
	printf("\nKy tu trong mang: ");
	for ( int i = 0; i< n ; i++){
		printf("\t%c", *(arr+i));
	}
}

void cn3( int *arr, int n ){
	int count = 0;
	for ( int i = 0; i< n ; i++){
		if( isalpha(*(arr+i)) ) count++;
	}
	printf("\nSo ky tu chu cai trong mang: %d", count);
}

void cn4( int *arr, int n){
	int count = 0;
	for ( int i = 0; i< n ; i++){
		if( isdigit(*(arr+i)) ) count++;
	}
	printf("\nSo ky tu chu so trong mang: %d", count);
}

void cn5( int *arr, int n){
	int countA = 0, countD = 0;
	for ( int i = 0; i< n ; i++){
		if( isalpha(*(arr+i)) ) {
			countA++;
		}else if ( isdigit(*(arr+i)) ){
			countD++;
		}
	}
	printf("\nSo ky tu dac biet trong mang: %d", n-countA-countD);
}

