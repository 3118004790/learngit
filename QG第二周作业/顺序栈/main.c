#include"SqStack.h"
#include<stdio.h> 
#include<stdlib.h>
void main()  {
	int chose=0;
	int type=0;
	int length;
	int size;
	ElemType data;
	ElemType *data2;
    ElemType * e;
	struct SqStack *s;
	
	while(chose!=9)  {
		printf("*********************\n");
        printf("* 1.   初始化栈     *\n");
     	printf("* 2. 判断栈是否为空 *\n");
	    printf("* 3.  得到栈顶元素  *\n");
	    printf("* 4.    清空栈      *\n");
	    printf("* 5.    销毁栈      *\n");
	    printf("* 6.   检测栈长度   *\n");
	    printf("* 7.     入栈       *\n");
	    printf("* 8.     出栈       *\n");
	    printf("* 9.   退出程序     *\n");
	    printf("*********************\n");
	    scanf("%d",&chose);
	    
	    switch(chose)  {
	    	case 1:  {
	    		scanf("%d",&size); 
	    		Status initStack(s,size);
	    		break;
			}
			case 2:  {
			    Status isEmptyStack(s);
			    break;
			}
		    case 3:  {
			    Status getTopStack(s,e);
			    printf("%d",* e);
			    break;
			}
		    case 4:  {
		    	Status clearStack(s);
				break;
			}
		    case 5:  {
			    Status destroyStack(s);
				break;
		    }
		    case 6:  {
		    	scanf("%d",&length);
		    	Status stackLength(s,length);
				break;
			}    
		    case 7:  {
				while(type!=1||type!=2||type!=3)  {
					printf("*********************\n");
		    	    printf("* 1.     整型       *\n");
		    	    printf("* 2.    浮点型      *\n");
		    	    printf("* 3.    字符型      *\n");
		    	    printf("*********************\n");
					scanf("%d",&type);
					switch(type)  {
						case 1:  {	
		    			    scanf("%d",&data);
		    			    Status pushStack(s,data);
						    break;
					    }
		    		    case 2:  {
		    			    scanf("%f",&data); 
		    			    Status pushStack(s,data);
						    break;
					    }
					    case 3:  {
						    scanf("%c",&data); 
						    Status pushStack(s,data);
						    break;
					    default:  {
						    printf("请重新输入1~3间的数字\n");
						    break;
					        }  
					    }  			
				    }  		    	
				} 
				break;  
		    }
		    case 8:  {
			    Status popStack(s,data2);
			    printf("%d",*data2)
			    break;
	        }
	        case 9: {
				break;
			}
	        default:  {
	        	printf("请重新输入1~9间的数字\n"); 
				break;
			}
	    }	
	}
}
