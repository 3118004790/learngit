#include"LinkStack.h"
#include<stdio.h> 
#include<stdlib.h>
void main()  {
	int chose=0;
	int type=0;
	int length;
	ElemType data;
	ElemType *data2;
    ElemType *e;
	LinkStack *s;
	
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
	    		initStack(*s);
	    		break;
			}
			case 2:  {
			    isEmptyStack(s);
			    break;
			}
		    case 3:  {
			    getTopStack(s,e);
			    printf("%d",* e);
			    break;
			}
		    case 4:  {
		    	clearStack(s);
				break;
			}
		    case 5:  {
			    destroyStack(s);
				break;
		    }
		    case 6:  {
		    	stackLength(s,&length);
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
		    			    pushStack(s,data);
						    break;
					    }
		    		    case 2:  {
		    			    scanf("%f",&data); 
		    			    pushStack(s,data);
						    break;
					    }
					    case 3:  {
						    scanf("%c",&data); 
						    pushStack(s,data);
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
			    popStack(s,data2);
			    printf("%d",*data2); 
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
