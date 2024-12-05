#include <stdio.h>

int main() {
    int arr[100];
    int n = 0, choice, value, pos, find, index ,h;

    while (1) {
printf("\n=====Menu=====\n");
printf("1.Nhap so phan tu va gia tri cho mang\n");
printf("2.In ra gia tri cac phan tu trong mang theo dang(arr[0] = 1, arr[1] = 5...)\n");
printf("3.Dem so luong cac so hoan hao co trong mang. Biet so hoan hao la so co tong cac uoc bang chinh no\n");
printf("4.Tim gia tri lon thu hai trong mang, khong duoc sap xep mang\n");
printf("5.Them mot phan tu vao vi tri ngau nhien trong mang, phan tu moi them vao mang va vi tri them vao phai do nguoi dung nhap vao \n");
printf("6. Xoa phan tu tai mot vi tri cu the (nguoi dung nhap vi tri)\n");
printf("7. Sap xep cac mang theo thu tu tang dan( (Insertion sort\n");
printf("8. Cho nguoi dung nhap vao mot phan tu , tim kiem phan tu do co ton tai trong mang hay khong(Binary search)\n");
printf("9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so chan dung truoc, so le dung sau\n");
printf("10. Dao nguoc thu tu cua cac phan tu co trong mang \n");
printf("11. Exit\n");
printf("Your choice is :\n");
scanf("%d",&choice);

switch(choice){
          //Nhap so phan tu va gia tri cho mang
          case 1:
            printf("Nhap so phan tu: ");
            scanf("%d",&n);
            for(int i = 0; i < n; i++){
                printf("Phan tu thu %d : ", i + 1);
                scanf("%d",&arr[i]);
            }
            break;
            //In ra gia tri cac phan tu trong mang theo dang(arr[0] = 1, arr[1] = 5...)
          case 2:
          if(n == 0){
                printf("Array is empty ^ ^\n");
            }else{
            	for(int i = 0; i < n; i++){
                printf("Gia tri cac phan tu trong mang arr[%d] = %d ", i, arr[i]);
                if(i < h - 1){
                	printf(" , ");
				}
                    printf("\n");
                }
            }  
            break;
          // Dem so luong cac so hoan hao co trong mang. Biet so hoan hao la so co tong cac uoc bang chinh no
          case 3:
          // Them mot phan tu vao vi tri ngau nhien trong mang, phan tu moi them vao mang va vi tri them vao phai do nguoi dung nhap vao
          case 5:
            if(n < 100){
                printf("Them phan tu vao mang : ");
                scanf("%d",&value);
                arr[n] = value;
                n++;
            }else{
            printf("Mang da day khong the them phan tu");
            printf("Am soo sorry ^ ^");
            }            
            break;
            // Xoa phan tu tai mot vi tri cu the (nguoi dung nhap vi tri)
            case 6 :
            if(n == 0){
                printf("Array is empty ^ ^");
            }else{
                printf("Chon vi tri de xoa phan tu (0-%d) : ", n - 1);
                scanf("%d", &pos);
                if(pos >= 0 && pos < n){
                    for(int i = pos; i < n - 1; i++){
                        arr[i] = arr[i + 1];
                    }
                    n--;
                }else{
                    printf("Invalid position ^ ^");
                }
            }
            break;
             case 7:
            if(n == 0){
                printf("Array is emply ^ ^");
            }else{
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                         if (arr[i] > arr[j]){
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                for(int i = 0; i < n; i++){
                    printf("%d\t",arr[i]);
                }
            }
            break;
            case 8:
            if(n == 0){
                printf("Array is emply ^ ^");
            }else{
                printf("Phan tu can tim la : ");
                scanf("%d", &index);
                find = 0;
                printf("Vi tri cua phan tu can tim trong mang la : \n");
                for(int i = 0; i < n; i++){
                    if(arr[i] == index){
                        printf("Phan tu thu : %d xuat hien tai vi tri so : %d .", i, index);
                        find = 1;
                    }
                }
                if(!find){
                    printf("khong tim thay phan tu %d ",index);
                }
            }
            break;
            case 9:
            if(n == 0){
                printf("Array is emply ^ ^");
            }else{
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[n-1]);
                    }
                }
               for (int j = 0; j < n; j++) {
                    if (arr[j] % 2 != 0) {
                        printf("%d ", arr[n]);
                    }
                }
                break; // le
    
            case 11: 
            printf("Thoat chuong trinh\n");
            return 0;

}   
    }
}
}
