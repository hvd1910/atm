#include <stdio.h>
void main()
{
	int cardid, mapin,menu,tienrut,tiencon;
	int tien = 200;
	
	printf("\nCardid : ");
	scanf("%d", &cardid);
	printf("\nMa Pin : ");
	scanf("%d", &mapin);
	if (cardid == 2222 && mapin == 1111)
	{
		 printf("\n1 Rut tien");
	     printf("\n2 Chuyen khoan");
	     printf("\n3 Xem so du");
	     printf("\n4 Ket thuc");
	     printf("\nLua chon chuc nang : ");
	     scanf("%d", &menu);
	        	
	 switch (menu)
	 {
	 	case 1 :
	 		printf("\nRut tien");
	 	
			printf("\nNhap so tien muon rut :");
	 		scanf("%d",&tienrut);
	 		
	 		  if (tienrut <= 200)
	 		  {
	 		    printf("\nRut tien thanh cong : %d", tienrut );
	 		    tiencon = tien - tienrut;
	 		    printf("\nSo du con lai : %d",tiencon);	 		    
		      break;
	 		  }
	 		  else 
	 		    printf("\nTai Khoan Khong Du - Rut Tien That Bai");
	 		  break;  
	 		  
	 		
	 	case 2 :
	 		printf("\nChuyen khoan");
	 		break;
	 	case 3 :
	 		printf("\nXem so du");
	 		
	 		break;
	 	case 4 :
	 		printf("\nKet thuc");
	 		break;
	 	default :
	 		printf("\nTinh nang khong ho tro");
	 		break;
	 }
	 
	}	
	else
	   printf("\nTai khoan va mat khau sai");
}	   
	
	
	
	
