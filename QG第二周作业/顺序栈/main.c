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
        printf("* 1.   ��ʼ��ջ     *\n");
     	printf("* 2. �ж�ջ�Ƿ�Ϊ�� *\n");
	    printf("* 3.  �õ�ջ��Ԫ��  *\n");
	    printf("* 4.    ���ջ      *\n");
	    printf("* 5.    ����ջ      *\n");
	    printf("* 6.   ���ջ����   *\n");
	    printf("* 7.     ��ջ       *\n");
	    printf("* 8.     ��ջ       *\n");
	    printf("* 9.   �˳�����     *\n");
	    printf("*********************\n");
	    scanf("%d",&chose);
	    
	    switch(chose)  {
	    	case 1:  {
	    		scanf("%d",&size); 
	    		initStack(s,size);
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
		    	scanf("%d",&length);
		    	stackLength(s,length);
				break;
			} 
			   
		    case 7:  {
				while(type!=1||type!=2||type!=3)  {
					printf("*********************\n");
		    	    printf("* 1.     ����       *\n");
		    	    printf("* 2.    ������      *\n");
		    	    printf("* 3.    �ַ���      *\n");
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
						    printf("����������1~3�������\n");
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
	        	printf("����������1~9�������\n"); 
				break;
			}
	    }	
	}
}
