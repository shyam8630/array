// #include<stdio.h>
// int main(){
//     int n;
//     int a[n];
//     int i;
//     scanf("%d",&n);
//     for(i=0;i<n; i++){
//         printf("Enter the value of a[%d]=",i);
//         scanf("%d",&a[i]);
    
//     printf("%d",a[i]);
//     }
//    return 0;
// }


// #include<stdio.h>
// void main(){
//     int x[3][3];
//     int i,j;
//     for(i=0; i<=2; i++){
//         for(j=0; j<=2; j++)
//         {
//             scanf("%d",&x[i][j]);
//         }
//     }
//       for(i=0; i<=2; i++){
//         for(j=0; j<=2; j++){
//        printf("%d ",x[i][j]);
//         }
//         printf("\n");
// }
// }
   

// #include<stdio.h>
// int main()
// {
//     int a[4],b[4],c[4],i;
//     for(i=0; i<=3; i++)
//     {
//         printf("enter the value of a:");
//         scanf("%d",&a[i]);
//     }

//     for(i=0; i<=3; i++)
//     {
//         printf("enter the value of b:");
//         scanf("%d",&b[i]);
//     }

//     for(i=0; i<=3; i++)
//     {
//         c[i]=a[i]-b[i];
//         printf("c[%d]=%d\n",i,c[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int a[100],n,i,max;
//     printf("enter the size of the array:");
//     scanf("%d",&n);
//     for(i=0; i<n; i++)
//     {
//         printf("enter the value of an array:");
//         scanf("%d",&a[i]);
//     }
//     max=0;
//     for(i=0; i<n; i++)
//     {
//         if(a[i]>max)
//         {
//             max=a[i];
//         }
//     }
//     printf("maximum value=%d",max);
//     return 0;
// }


//  #include<stdio.h>
//  int main()
//  {
//      int a[100],n,i,min,max;
//      printf("enter the size of the array:");
//      scanf("%d",&n);
//      for(i=0; i<n; i++)
//      {
//          printf("enter the value of an array:");
//          scanf("%d",&a[i]);
//      }
//      min=0;
//      max=0;
//      for(i=1; i<n; i++)
//      {
//          if(a[i]<min)
//          {
//              min=a[i];
//          }
//          if(a[i]>max)
//          {
//             max=a[i];
//          }
//      }
//     printf("minimum value=%d\n,maximum value=%d\n",min,max);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int a[100],n,i,j,temp;
//     printf("enter the size of an array:");
//     scanf("%d",&n);
//     for(i=0; i<n; i++)
//     {
//         printf("enter the value of an array:");
//         scanf("%d",&a[i]);
//     }
//     for(i=0; i<n; i++)
//     {
//         for(j=i+1; j<n; j++)
//         {
//             if(a[i]<a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     for(i=0; i<n; i++)
//     {
//        printf("%d",a[i]);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int a[100],n;
//     printf("enter the size of array:");
//     scanf("%d",&n);
//     int i,sum=0;
//     for(i=0; i<n; i++)
//     {
//         printf("enter the value of array:");
//         scanf("%d",&a[i]);
//     }
//     for(i=0; i<n; i++)
//     {
//         sum=sum+a[i];
//     }
//     printf("%d\n",sum);
//     return 0;
// // }

// #include<stdio.h>
// int main()
// {
//     int n,c=0;
//     printf("enter the sixe of an array:");
//     scanf("%d",&n);
//     int a[n],i;
//     for(i=0; i<n; i++)
//     {
//         printf("enter the value of array:");
//         scanf("%d",&a[i]);
//     }
//     for(i=0; i<n; i++)
//     if(a[i]>60)
//     c++;
//     printf("%d",c);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
// int a[100],n,i,j,temp;
//     printf("enter the size of an array:");
//     scanf("%d",&n);
//     for(i=0; i<n; i++)
//     {
//         printf("enter the value pf array:");
//         scanf("%d",&a[i]);
//     }
//     for(i=0; i<n; i++)
//     {
//         for(j=i+1; j<n; j++)
//         {
//             if(a[i]>a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     for(i=0; i<n; i++)
//     {
//         printf("%d",&a[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// void main()
// (
//     int n,m;
//     printf("enter rows:");
//     scanf("%d",&n);
//     printf("ennter coloums:");
//     scanf("%d",&m);
//     int x[m][n];
//     int i,j;
//     for(i=0; i<n; i++)
//     {
//         for(j=0; j<m; j++)
//         {
//             printf("enter any eliment:");
//             scanf("%d",&x[i][j]);
//         }
//     }
//     for(i=0; i<n; i++)
//     {
//         for(j=0; j<m; j++)
//         {
//             printf("%d\t",x[i][j]);
//         }
//         printf("\n")
//     }

// )


#include<stdio.h>
void main()
{
    int a,b,i,j;
    float sum=0,avg;
    printf("enter rows=");
    scanf("%d",&a);
    printf("enter column=");
    scanf("%d",&b);
    int x[a][b];
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("enter eliment=");
            scanf("%d",&x[a][b]);
        }
    }
     for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
          sum=sum+x[a][b];        
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
           
        }     
}
}