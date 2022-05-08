// $Id$

lc = 0.025 ;

a = .5;

Point(1) = {-a,-a,0,lc};
Point(2) = { a,-a,0,lc};
Point(3) = { a, a,0,lc};
Point(4) = {-a, a,0,lc};

Line(5) = {1,2};
Line(6) = {2,3};
Line(7) = {3,4};
Line(8) = {4,1};

Line Loop(9) = {5,6,7,8};
Plane Surface(10) = {9};

Physical Line(101) = {7};
Physical Line(102) = {5};
Physical Line(103) = {8};
Physical Line(104) = {6};

Physical Surface(201) = {10};
