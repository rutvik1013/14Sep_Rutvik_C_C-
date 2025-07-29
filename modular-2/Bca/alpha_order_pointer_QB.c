//  Write a c program to sort a list in alphabetic order using pointers
#include<stdio.h>
#include<string.h>
#define size 100
#define max_length 100


int main(){
    int i,j,n;
    char *name[size];
    char a[size][max_length];
    char *temp;
    // Enter number of Names in an array
    printf("Enter the Number of Names in an Array:");
    scanf("%d",&n);
    getchar();
    
    // input names 
    for(i=0;i<n;i++){
      printf("Name %d: ", i + 1);
        fgets(a[i],max_length,stdin);
        
       a[i][strcspn(a[i], "\n")] = '\0';
        
        name[i]=a[i];
        
        
        
    }
    // sorting the name using pointers
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
             if (strcmp(name[i], name[j]) > 0){
                // swipping the pointers
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
                
            }
        }
    }
    // Displaying the sort names
    printf("\n Names in Alphabetic Order:\n ");
    for(i=0;i<n;i++){
        printf("%s\n",name[i]);
        
    }
    return 0;
    
}
