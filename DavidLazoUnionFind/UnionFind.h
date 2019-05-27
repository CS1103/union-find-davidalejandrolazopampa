//
// Created by David Lazo on 26/05/2019.
//

#ifndef DAVIDLAZOUNIONFIND_UNIONFIND_H
#define DAVIDLAZOUNIONFIND_UNIONFIND_H

#include <iostream>
#include <vector>
#include <stack>
#include <deque>

class UnionFind {
    int  *PADRE;
    int nodlazo;
public:
    UnionFind(int nn)
    {
        PADRE = new int[nn];
        this->nodlazo = nn;
        makeSet();
    }
    void makeSet()
    {
        for (int c = 0; c < nodlazo; c++)
        {
            PADRE[c] = c;
        }
    }
    int find(int x2)
    {
        if ( x2==PADRE[x2]) {
            return  x2;
        }
        else return find(PADRE[x2]);
    }
    void UnionDavid( int x1 , int y1 ){
        int x1root = find( x1 );
        int y1root = find( y1 );
        PADRE[ x1root ] = y1root;
    }
};

#endif //DAVIDLAZOUNIONFIND_UNIONFIND_H
