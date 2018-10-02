const byte Q3=1,H=2,T=3,Q=4,H3=5,D=6,F=7;
const float durations[] = {1,0.75,0.5,1/3.,0.25,1.5,2,4};

const char n1[] = 
  "0000000063V432322127#567763V4323"
  "221273343333171621273231212717162127"
  "32312127610101016101010166#5636"
  "7767071123123323332363443202"
  "31276#5567366#5636776707112312"
  "332333236344320231276#55673"
  "32314342323121273231434232312127";
const char o1[] = {
  0,0,0,0,0,0,0,0,-2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-2,-2,-2,-2,-2,-1,0,0,0,0,0,
  0,0,0,0,-1,0,0,0,0,0,0,0,0,-1,0,-1,0,0,0,-1,0,0,0,0,0,0,0,-1,0,-1,0,-1,0,0,0,-1,
  0,0,0,0,0,0,0,-1,-1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,
  -1,-1,-1,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,
  0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1
};
const byte d1[] = {
  0,0,0,0,0,0,0,0,0,0,H,Q,Q,0,H,Q,Q,H,H,H,Q,Q,0,0,0,H,Q,Q,0,
  H,Q,Q,H,H,H,Q,Q,Q,Q,Q,Q,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,
  H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,0,Q3,Q,H,0,H,
  0,Q3,Q,0,H,H,0,Q3,Q,H,0,H,0,Q3,Q,D,0,Q3,Q,H,0,H,0,Q3,Q,0,H,H,
  0,0,0,Q3,Q,0,Q3,Q,H,H3,0,Q3,Q,H,0,H,0,Q3,Q,0,H,H,0,Q3,Q,H,0,H,
  0,Q3,Q,D,0,Q3,Q,H,0,H,0,Q3,Q,0,H,H,0,0,0,Q3,Q,0,Q3,Q,H,H3,
  H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H,H
};

const char n2[] = 
  "66#56367767071123123323332363"
  "44320231276#5567366#5636776707"
  "112312332333236344320231276"
  "#556733212";
const char o2[] = {
  0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,
  1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,0,0,
  0,0,0,0,0,0,0,0,0
};
const byte d2[] = {
  0,Q3,Q,H,0,H,0,Q3,Q,0,H,H,0,Q3,Q,H,0,H,0,Q3,Q,D,0,Q3,Q,H,0,H,
  0,Q3,Q,0,H,H,0,0,0,Q3,Q,0,Q3,Q,H,H3,0,Q3,Q,H,0,H,0,Q3,Q,0,H,H,
  0,Q3,Q,H,0,H,0,Q3,Q,D,0,Q3,Q,H,0,H,0,Q3,Q,0,H,H,0,0,0,Q3,Q,
  0,Q3,Q,H,H3,D,D,D,D
};

const char n3[] =
  "634322127#56773"
  "63654322127#567763432322127#56773"
  "63654322127#567766666645434275"
  "666666454343210";
const char o3[] = {
  -1,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,
  -1,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,
  -1,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-2,-2,
  -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0
};
const byte d3[] = {
  0,0,0,0,H,Q,Q,H,H,Q,Q,H,H,H,
  0,0,H,Q,Q,0,H,Q,Q,H,H,H,Q,Q,0,0,0,H,Q,Q,0,H,Q,Q,H,H,H,Q,Q,H,H,
  0,0,H,Q,Q,0,H,Q,Q,H,H,H,Q,Q,0,0,0,H,0,H,H,H,H,Q,Q,H,H,H,H,
  0,0,H,0,H,H,H,Q,Q,H,Q,Q,H,H,H
};

const char n4[] = "66666";
const char o4[] = {-1,-1,-1,-1,-1};
const byte d4[] = {0,0,0,0,F};
