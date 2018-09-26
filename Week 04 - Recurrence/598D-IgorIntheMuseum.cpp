#include<bits/stdc++.h>
using namespace std;


int answ=0;
int keyCount=0;
char cells[1000][1000];             //THE ORIGINNAL CELL
int visitedCell[1000][1000]={0};    //VIEW CELL IS VISITED OR NOT
int ansCell[1000000]={0};           //WILL LIST ANSWERS

void floodFillUtil(int x, int y, int maxX, int maxY)
{
    if (x<0 || x>=maxX || y<0 || y>=maxY) {
        return;
    }
    if (visitedCell[x][y] != 0) {
        return;
    }
    if (cells[x][y]=='*') {
        answ++;
        return;
    }
    visitedCell[x][y]=keyCount;
    floodFillUtil(x+1, y, maxX, maxY);
    floodFillUtil(x-1, y, maxX, maxY);
    floodFillUtil(x, y+1, maxX, maxY);
    floodFillUtil(x, y-1, maxX, maxY);
    return;
}

int main()
{
    int rowNum, colNum, startPosNum;
    int rowLoc, colLoc;
    cin>>rowNum>>colNum>>startPosNum;
    for (int i=0; i<rowNum; i++)
    {
        for (int j=0; j<colNum; j++)
        {
            cin>>cells[i][j];
        }
    }
    for (int i=0; i<rowNum; i++)
    {
        for (int j=0; j<colNum; j++)
        {
            if (cells[i][j]=='.' && visitedCell[i][j]==0)
            {
                keyCount++;
                answ=0;
                floodFillUtil(i, j, rowNum, colNum);
                ansCell[keyCount]=answ;
            }
        }
    }
    for (int x=0; x<startPosNum; x++)
    {
        cin>>rowLoc>>colLoc;
        cout<<ansCell[visitedCell[rowLoc-1][colLoc-1]]<<endl;
    }

    return 0;
}
