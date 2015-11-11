//
//  main.cpp
//  work3
//
//  Created by 20141105043dj on 15/11/11.
//  Copyright (c) 2015年 20141105043dj. All rights reserved.
//

#include <iostream>
using namespace std;
#define N 5
int main(){
    int *a;
    int i,j,temp;
    a=new int[N];
    if(a==0)
        exit(0);
    for (i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
        printf("%d\n",a[i]);
    delete a;
    return 0;
}

