#include <iostream>
using namespace std;
                                                   //  1 . program for count nagative number in array 

int main(){
	int arr[6];
	int i ,count = 0;
	
	cout<<"enter a elemnt of an array :";
	
	for(i=0;i<6;i++){
	cin>>arr[i];
	}
	
	cout<<"the array is ";
	
	for(i=0;i<6;i++){
	cout<<arr[i];
		
		if(arr[i] < 0)
		{
			count++;
		}
	}
    cout<<endl;
	cout<<"the total negative numbers are "<<count;
	return 0;
}

                                                           //  2 . program for max number in array 
int main()
{
	int arr1[5];
	
	int i,maximum;
	
	cout<<"enter a elemnt of first  array :";
    
    for(i=0;i<6;i++){
		cin>>arr1[i];
	}
	
	cout<<"the array one is ";
	
	for(i=0;i<6;i++){
		cout<<arr1[i];
    }
    
    maximum = arr1[0];
    for(i = 0;i<=5;i++){
    	if(maximum < arr1[i])
    	{
    		maximum = arr1[i];
		}
	}
	cout<<endl;
	cout<<"the maxmum number is "<<maximum;
	return 0;
}

//                                              //  3  .  program to merge two sorted array im third arra

    int main()
{
	int size1,size2,size3,i;
	cout<<"enter a size of array 1 :";
	cin>>size1;
	
	int arr1[size1];
	
	cout<<"enter a elemnt of first  array :";
    
    for(i=0;i<size1;i++){
	cin>>arr1[i];
	}
	
	cout<<"the array one is ";
	
	for(i=0;i<size1;i++){
		cout<<arr1[i];
    }
   cout<<endl;
    cout<<"enter a size of array 2 :";
	cin>>size2;
	
	int arr2[size2];
    cout<<"enter a elemnt of second array :";
    
    for(i=0;i<size2;i++){
		cin>>arr2[i];
	}
	
	cout<<"the array second  is ";
	
	for(i=0;i<size2;i++){
		cout<<arr2[i];
    }
    cout<<endl;
    size3 = size1+size2;
    int arr3[size3];
    
         for(i = 0;i<=size3;i++){
         	arr3[i] = arr1[i];
		 }
		 
         for(i = 0;i<=size3;i++){
         	arr3[size1+i] = arr2[i];
		 }
		 cout<<"array three is :";
		 
		  for(i = 0;i<size3;i++){
		 cout<<arr3[i];
		 }
		 return 0;
	}
//
////                                               program  for search   no   6

int Searching(int arr[],int n,int p)
{
	int i ;
	for(i = 0;i<n;i++)
	{
		if(arr[i] == p)
		{
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[] = {5,8,3,9,7,1};
	int n = 6;
	
	int p;
	cout<<"enter a number you search :";
	cin>>p;
	
	int s = Searching(arr,n,p);
	if(s != -1)
	{
     	cout<<"position is"<<s;
}
else{
	cout<<"element not found"<<s;
}
	   return 0;
}

////                                        program for count duplicate num in array  no  9
//
int main(){
	
	int arr[] = {3,1,3,4,1,4,4,5,4,4};
	int s = 10;
	
    int i,j,count = 0;
    
    for(i=0;i<s;i++)
    {
    	for(j=i+1;j<s;j++)
    	{
    		if(arr[i] == arr[j]){
    		count++;
    	    break;
           }
		}
	}
	
	cout<<"duplicates are "<<count;
	return 0;
}
//
//                                       //program to printall uniq values in array  no  7
//                                    
int main(){
   
     int arr[] = {1,4,5,2,8,9,0};
     int n = 7;
      for(int i=0;i<n;i++)
     {
          cout<<arr[i];
     }
     int count;
     for(int i=0;i<n;i++)
     {
         count=0;
         for(int j=0;j<n;j++)
         {
             if(i!=j&&arr[i] == arr[j])
             {
                 count=1;
             }
            
         }
          if(count!=1)
             {
                 cout<<"uniq value is "<<arr[i];
                 cout<<endl;
             }
     }
     return 0;
}

//                                          program to count frequancy of elemnt in array 
int main()
{
	int arr[] = {10,20,70,70,40,10,10,20};
	int n = 8;
	int i,j,count,x;
	for(i=0;i<n;i++)
	{
		x = arr[i];
		count = 0;
		if(x == -1)continue;
		for(j=0;j<n;j++)
		{
			if(arr[j] == x)
			{
				count++;
				arr[j]= -1;
			}
		}
		cout<<"frequancy of "<<x<<"is"<<count<<endl;
	}
	return 0;
}

//                                               program to print the rhombhus pattern    

int main()
{
	int i,j,p;
     int rows = 5;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows-i-1;j++)
		{
		    cout<<" ";
		}
		for(p=0;p<rows;p++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

//                                    program to print  right  triangle

int main()
{
	int i,j;
	int rows = 5;
	
	for(i=0;i<rows;i++)
	{
	
		for(j=0;j<=i;j++)
	{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

//                                               program to print the half diamond pattern 

int main()
{
	int i,j;
	int rows = 5;
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	for(i=1;i<rows;i++)
	{
		for(j=0;j<rows-i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

//                                  program  to print the diamond pattrn 

int main()
{
	int i,j,p;
	int rows =5;
	
	for(i=0;i<2;i++)
	{
		for(j=1;j<=rows;j++)
		{
		  cout<<j;
		}
		cout<<endl;
		for(p=rows;p>0;p--)
		{
			cout<<p;
		}
		cout<<endl;
		
	}
	return 0;
}

//                               program to print the  number   pattern 

int main()
{
	int i,j,p;
	int rows =5;
	int colm =5;
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=colm;j++)
		{
			if(i == 1 || i == rows || j== 1|| j==colm)
			{
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
	return 0;
}

//                                             program for heap insertion 

void print(int a[],int n)
{
	int i;
	cout<<"Heap array elements are:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Insertion(int a[], int n,int val,int i)
{
	a[i] = val;
	int f = i;
	int s = i;
	
	while(f != 0 && a[(f-1)/2] < val)
	{
		int temp = a[(f-1)/2];
		a[(f-1)/2] = a[s];
		a[s] = temp;
		
		f = (f-1)/2;
		s = (s-1)/2;
	}
	print(a,n);
}
int main()
{
	int n;
	cout<<"enter a size of array :";
	cin>>n;
	int a[n]= {0};
	
	int val;
	for(int i=0;i<n;i++)
	{
		cout<<"enter a elemnt to insert :";
        cin>>val;
	    Insertion(a,n,val,i);
	  cout<<endl;
    }
  
return 0;
}
