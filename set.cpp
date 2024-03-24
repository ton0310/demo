#include <bits/stdc++.h>
#include <set>
//size
//set
//find
//count
//erase
//multiset<int>

using namespace std;
int main() {
//	int n ; cin >> n;
// set<int> v;
// for(int i=0; i<n ;i++)
// {
// 	int x;
//    cin >> x;	
//    v.insert(x);
// 
// }
// 
// cout << " Co "<< v.size() << " phan tu khac nhau trong mang" << endl;
// for( int a : v)
// {
//    cout << " cac phan tu khac nhau la : " << a << endl;
// 
// }
// for(int i=0; i<10 ;i++)
// {
//     v.insert(i);	
// 
// 
// }
// cout << v.size() << endl;
// if(v.count(5) !=0)
// {
//   cout << "F";
// 
// }
 //  v.erase(5); //xoa pha tu muon xoa
//   for(int x : v){
//     cout << x << " ";
//   }
//   cout << endl;
//   
//   cout << endl;
//   v.erase (v.find(5));
//   for(int x : v)
//   {
//      cout << x << " ";
//   
//   }
//   cout << endl;
//   cout<< *v.begin()<<endl; // truy cap den phan tu dau tien bang iterrator 
//    cout<< *v.rbegin()<<endl;// truy cap den phan tu cuoi cung

// multiset
 // n =10 ; k=3
//  i -> 1 2 3 ,1 4 5, 1 8 9, 10
// out : 3 3 4 5 5 8 9 10

   int n,k;
   cin >> n >> k;
   int a[n];
   for(int &x: a) cin >> x;// nhap so pt n vào mang a 
   multiset<int> ms;
   for(int i=0 ; i <k ;i++)// them cac phan tu i vao multiset
   {
     ms.insert(a[i]);
   }  
    for(int i= k ; i <n;i++)// tim phan tu lon nhat tron cua so co kich thuoc la 3 pt
	
	{
	  cout<< *ms.rbegin()<< " " ;//tim phan tu k lon nhat trong cua so voi moi 3 pt trong pt cuoi cung cua multiset
	  ms.erase(ms.find(a [i - k]));// xoa di phan tu dau tien cua cua so sau khi da tim dc phan tu lon nhat
	  ms.insert (a[i]) ;
	
	}
	cout << *ms.rbegin()<< endl;



  return 0;
}
