bool isValid(char* s) {
    char *stack=(char *)malloc(sizeof(char)*(strlen(s)+1));
    int top=-1;
    stack[++top]=s[0];
    for(int i=1;s[i]!='\0';i++)
    {
        if(top!=-1)
        {
            if(stack[top]==s[i]-1||stack[top]==s[i]-2)
            {
                top--;
            }
            else{stack[++top]=s[i];}
        }
        else{stack[++top]=s[i];} 
    }
    if(top==-1){ return true;}
        else
        {
           return false;
        }
    
}