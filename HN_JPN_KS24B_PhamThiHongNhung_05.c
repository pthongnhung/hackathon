#include<stdio.h>
int main(){
	int length=0, choice;
	int array[100];
	int i, j, newElement, deleteValue,searchValue,flag=-1;
	do{
	printf("\n    MENU\n");
	printf("1.Nhap phan tu va gia tri cho mang \n");
	printf("2.In ra cac gia tri phan tu trong mang \n");
	printf("3.Dem so luong cac so hoan hao trong mang \n");
	printf("4.Tim gia tri nho thu 2 trong mang \n");
	printf("5.Them mot phan tu vao vi tri dau tien trong mang \n");
	printf("6.Xoa phan tu tai mot vi tri cu the \n");
	printf("7.Sap xep mang theo thu tu giam dan \n");
	printf("8.Tim kiem phan tu trong mang");
	printf("9.Sap xep lai mang va hien thi ra toan bo phan tu trong mang so chan dung truoc, le dung sau \n");
	printf("10.Dao nguoc vi tri phan tu trong mang va hien thi ra toan bo phan tu co trong mang \n");
	printf("11.Thoat \n");
	printf("Moi ban nhap lua chon: ");
	scanf("%d", &choice);
	   switch(choice){
	   	case 1:
	   		printf("Moi ban nhap phan tu cua mang: ");
	   		scanf("%d", &length);
	   		if(length<0 || length >100){
	   			printf("Phan tu mang khong hop le \n");
	   			continue;
		   }else{
		   	  printf("Nhap gia tri cho mang \n");
		   	  for(i=0;i<length;i++){
		   	  	printf("array[%d]=", i);
		   	  	scanf("%d", &array[i]);
				 }
		   }
		   break;
		   case 2:
		   	if(length == 0){
		   		printf("Mang rong \n");
	    	}else{
	    		printf("Cac gia tri phan tu trong mang la \n");
	    		for(i=0;i<length;i++){
	    			printf("array[%d] =%d\n",i,array[i]);
				}
			}
		   break;
		   case 3:
		   break;
		   case 4:
		   break;
		   case 5:
		   	if(length == 0){
		   		printf("khong co phan tu nao ton tai trong mang \n");
		   		continue;
	    	}else{
	    		printf("Moi ban nhap phan tu can them vao vi tri dau tien trong mang ");
	    		scanf("%d", &newElement);
	    		int addIndex=0;
	    		length=length+1;
	    			for(i=length-1;i>=addIndex;i--){
						array[i]=array[i-1];
					}
					array[addIndex]=newElement;
			    printf("Mang moi duoc them phan tu la \n");
				 for(i=0;i<length;i++){
				 printf("array[%d] = %d \n", i,array[i]); 
		       	}
		     }
		   break;
		   case 6:
	    		printf("Ban muon xoa phan tu 0 vi tri nao trong mang: ");
			     scanf("%d", &deleteValue);
				 if(deleteValue<0 || deleteValue>length-1){
				 	printf("Nam ngoai khoang cua mang!!");
					 continue ; 
				 }else{
				 	length = length-1; 
				 	for(i=deleteValue;i<length;i++){
				 		array[i] = array[i+1]; 
					 } 
				 }
				 printf("Mang moi duoc cap nhat \n");
				 for(i=0;i<length;i++){
					 printf("array[%d]=%d \n", i,array[i]);  
				 } 
		   break;
		   case 7:
		   	 
		   break;
		   case 8:
	        	if(length == 0){
		   		printf("Mang rong \n");
	        	}else{
	    		 printf("Moi ban nhap phan tu can tim kiem: ");
			     scanf("%d", &searchValue);
		        	for(i=0;i<length;i++){
			        	if(searchValue==array[i]){
				    	  flag = i; 
				    	printf("Phan tu ban tim kiem nam o vi tri %d \n",i); 
			        	}
		        	} 
		    	if(flag==-1){
			    	printf("Khong ton tai phan tu ban tim kiem \n"); 
	        	}
	    	}
		   break;
		   case 9:
		   break;
		   case 10: 	
		   break;
		   case 11:
		   	printf("Thoat chuong trinh \n");
		   	return 0;
		   break;
		   default:
		   printf("Loi chuong trinh!!");
		   break;
	   }
	   
	}while(choice!=11);
	return 0;
}

