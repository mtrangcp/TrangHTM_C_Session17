#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cn1( char *arr, int *n);
void cn2( char *arr, int n );
void cn3( char *arr, int n );
void cn4( char *arr, int n );
void cn5( char *arr, int n );
void cn6( char *arr, int n );

int main( ){
	char arr[30] ;
	int choice, check = -1, n;
	
	do{
		printf("\n---------Menu------------");
		printf("\n1. Nhap vao chuoi ");
		printf("\n2. In ra chuoi dao nguoc ");
		printf("\n3. Dem so luong tu trong chuoi ");
		printf("\n4. So sanh chuoi ");
		printf("\n5. In hoa tat ca chu cai ");
		printf("\n6. Nhap chuoi va them vao chuoi ban dau ");
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
				if ( check == -1 ){
					printf("\nMang rong, vui long chon cn1!");
				}else{
					cn6(arr, n);
				}
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
	}while (choice != 7 );
	
	return 0;
}

void cn1( char *arr, int *n){
	printf("\n Nhap so luong ptu(1 - 20): ");
	scanf("%d", &(*n));
	while( (*n) > 20 || (*n) <1 ){
		printf("\n Nhap so luong ptu(1 - 20): ");
		scanf("%d", &(*n));
	}
	fflush(stdin);
	
	for ( int i = 0; i< *n ; i++){
		printf("Nhap ky tu thu %d: ", i+1);
		scanf("%c", &(*(arr+i)) );
		fflush(stdin);
	}
	printf("\nChuoi vua nhap: ");
	for ( int i  = 0; i< *n ;i++){
		printf("%c", *(arr+i));	
	}
}

void cn2( char *arr, int n ){
	char reverseString[30];
	int j = 0;
	
	for (int i = n-1 ; i >=0 ; i--){
		reverseString[j++] = *(arr+i) ;
	}
	printf("\nChuoi dao nguoc: ");
	for ( int i = 0; i< n ; i++){
		printf("%c", reverseString[i] );
	}
}

void cn3( char *arr, int n ){
	int count = 0;
	for ( int i =1; i< n; i++){
		if ( isspace(*(arr+i)) != 0 && isspace(*(arr+i-1)) == 0 )  count++;
	}
	printf("\n Chuoi co %d tu!", count+1);
}

void cn4( char *arr, int n){
	char input[30];
	
	printf("\nNhap chuoi bat ky: ");
	fgets(input, 30, stdin);
	input[strlen(input)-1] = '\0';
	
	if ( n < strlen(input) ){
		printf("\n Chuoi 1 ngan hon chuoi 2!");
	}else if ( n == strlen(input) ){
		printf("\n Chuoi 1 bang chuoi 2!");
	}else{
		printf("\n Chuoi 1 dai hon chuoi 2!");
	}
}

void cn5( char *arr, int n){
	printf("\nKet qua: ");
	for ( int i  = 0; i< n ;i++){
		*(arr+i) = toupper(*(arr+i)) ;
		printf("%c", *(arr+i));	
	}
}

void cn6( char *arr, int n){
	char input[10];

    printf("\nNhap chuoi bat ky: ");
    fgets(input, 10, stdin);
    input[strlen(input) - 1] = '\0'; 

    strcat(arr, input);

    printf("\nChuoi sau khi noi: %s\n", arr);
}

