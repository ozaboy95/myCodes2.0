/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include "bits/stdc++.h"

using namespace std;

int main()
{   
    //sorting
    int n=10;
    int arr[10]={12,88,4,67,23,6,90,90,61,83};
    int brr[10]={34,78,54,90,12,45,76,2,5,9};
    //           0  1  2  3  4  5  6  7 8 9
    
    cout<<"-----sorting-----"<<endl;
    sort(arr,arr+n); //chadata kram ma sort kare
    sort(brr+2,brr+5);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    
    vector<int> oza={23,45,78,91,7,2,11,11,65,-30};
    sort(oza.begin(),oza.end());
    for(auto x:oza){
        cout<<x<<" ";
    }
    cout<<endl;
    
    
    //reverse
    cout<<"-----reverse-----"<<endl;
    reverse(arr,arr+n);
    reverse(oza.begin(),oza.end());
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     for(auto x:oza){
        cout<<x<<" ";
    }
    cout<<endl;
    
    //max or min element   
    cout<<"-----max or min element-----"<<endl;
    int max_arr= *max_element(arr,arr+n);
    int min_arr= *min_element(arr,arr+n);
    int max_oza= *max_element(oza.begin(),oza.end());
    int mini_oza= *min_element(oza.begin(),oza.end());
    
    cout<<" max element of arr :"<<max_arr<<endl<<" mini element of arr :"<<min_arr<<endl;
    cout<<" max element of oza :"<<max_oza<<endl<<" mini element of oza :"<<mini_oza<<endl;
    
    
    //sum
      cout<<"-----sum-----"<<endl;
    cout<<"sum of arr :"<<accumulate(arr,arr+n,0)<<endl;
    cout<<"sum of oza :"<<accumulate(oza.begin(),oza.end(),0)<<endl;
    
    
    //count
    cout<<"-----count-----"<<endl;
    cout<<"count of key=90 in arr : "<<count(arr,arr+n,90)<<endl;
    cout<<"count of key=11 in arr : "<<count(oza.begin(),oza.end(),11)<<endl;
    
    //find
    cout<<"-----find-----"<<endl;
    //findinf first occurance of key
    cout<<"90 is occured at 1st time : "<<find(arr,arr+n,90)-arr<<endl;
    cout<<"11 is occured at 1st time : "<<find(oza.begin(),oza.end(),11)-oza.begin()<<endl;//ahiya jo na made to find vec.end() return kare
    
    cout<<endl<<endl<<endl;
    
    
    //binary search
    //sorted item par lage
    //O(logn)
    
    int harsh[10]={1,2,3,4,5,8,12,33,90,101};
    
    cout<<"------binary_search-----"<<endl;
    bool b1=binary_search(harsh,harsh+n,12); //key made to true
    bool b2=binary_search(harsh,harsh+n,13);    // na made to false
    cout<<b1<<" "<<b2<<endl;
    
    cout<<"------lower_bound-----"<<endl;
    //sorted array ma j chale
    cout<<harsh[lower_bound(harsh,harsh+n,12)-harsh]<<endl;
    cout<<harsh[lower_bound(harsh,harsh+n,33)-harsh]<<endl;
    cout<<harsh[lower_bound(harsh,harsh+n,2)-harsh]<<endl;
    cout<<harsh[lower_bound(harsh,harsh+n,101)-harsh]<<endl;
    //as per observation element jya hoy e index ape
    
    cout<<"------upper_bound-----"<<endl;
    //potana thi ek index agad no element matlab 
    //just incresed element ape array ma
    cout<<harsh[upper_bound(harsh,harsh+n,12)-harsh]<<endl;
    cout<<harsh[upper_bound(harsh,harsh+n,33)-harsh]<<endl;
    cout<<harsh[upper_bound(harsh,harsh+n,2)-harsh]<<endl;
    cout<<harsh[upper_bound(harsh,harsh+n,101)-harsh]<<endl;//last index vada element no upper_bound garabage value made kem ke eni agad no koi value chhe j nahi
    
    
    
    //finding element in sorted array O(logn)
    cout<<"----finding element in sorted array O(logn)---"<<endl;
    int index=lower_bound(harsh,harsh+n,12)-harsh;
    if(index!=n && harsh[index]==12){                   
        cout<<"found 12 at : "<<index<<endl;
    }else{
        cout<<" NOT FOUND 12"<<endl;
    }
    
    //finding the last occurance of element
    cout<<"----finding the last occurance of element in sorted array O(logn)---"<<endl;
    vector <int> hv={2,6,7,8,8,9,10};
    int ind=upper_bound(hv.begin(),hv.end(),8)-hv.begin();
    ind-=1;
    if(hv[ind]==8 && ind>=0){
        cout<<"last occurance 0f 8 at :"<<ind<<endl;
    }else{
        cout<<"doesn't exist"<<endl;
    }
    
    //O(logn)
    //frequency of element in sorted array/vector
    // upper_bound-lower_bound
    cout<<"-------frequency of element in sorted array/vector----------"<<endl;
    cout<<"fre of 8 in hv vector :"<<(upper_bound(hv.begin(),hv.end(),8)-hv.begin())-(lower_bound(hv.begin(),hv.end(),8)-hv.begin())<<endl;
    
    cout<<endl<<endl<<endl;
    //next_permutation
    //string s="def";
    /*
        def
        dfe
        edf 
        efd
        fde 
        fed
    */
    
    string str="edf";
    cout<<"--------next_permutation----------"<<endl;
    cout<<"original string -> "<<str<<endl;
    cout<<next_permutation(str.begin(),str.end())<<endl;//string e next_permutation ma feravay jay to true ape
    cout<<"next_permutation string -> "<<str<<endl;
    
    
    cout<<"-------printing all combination--------"<<endl;
    //O(n!)
    string str2="mnl";
    sort(str2.begin(),str2.end());
    do{
        cout<<str2<<endl;
    }while(next_permutation(str2.begin(),str2.end()));
    
    cout<<endl;
    //previous_permutation
    cout<<"previous_permutation :"<<prev_permutation(str2.begin(),str2.end())<<endl;
    //string e prev_permutation ma feravay jay to true ape
    return 0;
    
}