#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;  /* number of boxes with screws */
    int k;  /* number of screws needed to make a table */
    int s;  /* number of tables to be made */
    int needed;
    int brought;
    int brought_boxes;
    
    int boxes[1000];
    
    cin >> n >> k >> s;
    for(int i = 0; i < n; ++i)
        cin >> boxes[i];
    
    sort(boxes, boxes+n);
    
    needed = s * k;
    brought = 0;
    brought_boxes = 0;
    
    for(int i = n-1; i >= 0; --i)
    {
        brought_boxes += 1;
        brought += boxes[i];
        if(brought >= needed) break;
    }
    
    cout << brought_boxes ;

    return 0;
}
    
