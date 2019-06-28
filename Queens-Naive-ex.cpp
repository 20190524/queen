#include <iostream>
#include <stdlib.h>

using namespace std;


//éœ€è¦å¡«ç©º
bool isValid(int i1, int i2, int i3, int i4, int i5, int i6, int i7, int i8){
	int a[8]={i1,i2,i3,i4,i5,i6,i7,i8};
	for(int i=0;i<8;i++){
		for(int j=0;j<8,j!=i;j++){        //°¤¸öËÑË÷Ã¿Ò»¸ö»Êºó£¬¿´¿´ÆäËû»ÊºóÊÇ·ñÔÚÆä¹¥»÷·¶Î§ÄÚ 
			if(a[j]==a[i])return false;
			if((a[j]-a[i])==j-i)return false;
			if((a[j]-a[i])==i-j)return false;
//			else return true;
		}
		
	}
    return true;
}

int main(int argc, char *argv[])
{
    int Num = 0;
    for(int i1=1;i1<=8;i1++){
        for(int i2=1;i2<=8;i2++){
            for(int i3=1;i3<=8;i3++){
                for(int i4=1;i4<=8;i4++){
                    for(int i5=1;i5<=8;i5++){
                        for(int i6=1;i6<=8;i6++){
                            for(int i7=1;i7<=8;i7++){
                                for(int i8=1;i8<=8;i8++){
                                    if(isValid(i1,i2,i3,i4,i5,i6,i7,i8)){
                                        Num++;
                                        printf("solution %d: %d %d %d %d %d %d %d %d\n", Num, i1, i2, i3, i4, i5, i6, i7, i8);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
