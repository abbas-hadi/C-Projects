//
//  main.cpp
//  Vector Lab 1
//
//  Created by Hadi Abbas on 10/10/16.
//  Copyright © 2016 Hadi Abbas. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;



void f (vector <int> &original)
{
    vector <int> lv;
    
    lv = original;
    
    cout << "Vector: ";
    for (unsigned int i = 0; i<lv.size(); i++)
    {
        cout << lv.at (i) << " ";
    }
    cout << endl;
    
    vector <int> lv2 (original);
    
    cout << "Vector: ";
    for (unsigned int i = 0; i<lv2.size(); i++)
    {
        cout << lv2.at (i) << " ";
    }
    cout << endl;
}



int main()
{
    vector <int> gv (10);
    
    for (unsigned int i = 0; i<gv.size(); i++)
    {
        gv.at(i) = pow (2,i);
    }
    
    /*gv.push_back (1);
    gv.push_back (2);
    gv.push_back (4);
    gv.push_back (8);
    gv.push_back (16);
    gv.push_back (32);
    gv.push_back (64);
    gv.push_back (128);
    gv.push_back (256);
    gv.push_back (512);*/
    
    f (gv);
    
    vector <int> vv;
    
    /* vv.push_back(1);
    
    for (unsigned int i = 1; i<vv.size(); i++)
    {
        vv.at(i) = (i+1)*(vv.at(i-1));
    } */
    
    
    vv.push_back(1);
    vv.push_back(2*1);
    vv.push_back(3*2*1);
    vv.push_back(4*3*2*1);
    vv.push_back(5*4*3*2*1);
    vv.push_back(6*5*4*3*2*1);
    vv.push_back(7*6*5*4*3*2*1);
    vv.push_back(8*7*6*5*4*3*2*1);
    vv.push_back(9*8*7*6*5*4*3*2*1);
    vv.push_back(10*9*8*7*6*5*4*3*2*1);
    
    f(vv);

                              

    
    return 0;

}





































//
//  main.cpp
//  Vector Lab 2
//
//  Created by Hadi Abbas on 10/11/16.
//  Copyright © 2016 Hadi Abbas. All rights reserved.
//



vector<int> f (vector <int> &v1, vector<int> &v2)
        {
            for (unsigned int i = 0; i<v1.size() || i <v2.size (); i++)
            {
                v1 [i] += v2[i];
            }
            return v2;
            
        }
