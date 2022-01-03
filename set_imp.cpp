#include "set_header.h"
void Set::createSet()
{
    for(int i=0;i<9;i++)
    {
        set[i]=0;
    }
    cout<<"\nSet with 8 vertices created.\n\n";
}
void Set::setUnion(int s[], int root1, int root2)
{
    s[root2] = root1;
    cout<<"\nUnion created.\n\n";
}
int Set::find(int s[], int x)
{
    if(set[x] <= 0)
        return x;
    else
        return find(s,s[x]);
}
void Set::display()
{
    cout<<"Set : | ";
    for(int i=1;i<9;i++)
        cout<<set[i]<<" | ";
    cout<<endl<<"      | ";
    for(int i=1;i<9;i++)
        cout<<i<<" | ";
    cout<<"\n\n";
}