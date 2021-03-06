#include "RM_xyz.C"
#include <iostream>

void testRM()
{
 
//  double a1[3]={ -0.0001 , -0 , -0};
//  double a2[3]={ -0 , -0.0001 , 0};
//  double a3[3]={ -0 , -0 , -0.0001};
//  vector<std::vector<double> > RM1, RM2, RM3;
//  RM_CLHEP(a1,RM1);
//  RM_CLHEP(a2,RM2);
//  RM_CLHEP(a3,RM3);
 
 
 
 double a1[3]={ 1.4/1000., 0.5/1000., 0.0/1000.};
 double a2[3]={-1.7/1000., 0.4/1000., 0.6/1000.};

 // *2 Create and get rotation matrix.
 vector<std::vector<double> > RM1;
 RM_ES(a1,RM1);
 
 vector<std::vector<double> > RM2;
 RM_ES(a2,RM2);
 
 
 // *3 Input rotation matrix get two solutions of (phi, theta, psi) for CLHEP.
 
 std::cout << " #############   EE-  ############# " << std::endl;
 double euler_1_1[3];
 double euler_1_2[3];
 getAnglesCLHEP(RM1,euler_1_1,euler_1_2);

 std::cout << " #############   EE+  ############# " << std::endl; 
 double euler_2_1[3];
 double euler_2_2[3];
 getAnglesCLHEP(RM2,euler_2_1,euler_2_2);
 
 
 
 
 //// Conversion of ES and CLHEP  ------------------------
 // *1 Input (alpha, beta, gamma) from ES alignment tool representations.
 //double a[3]={0,0,0};
//  double a[3]={0.0014, 0.0005, 0};
//  double a[3]={0.001, 0, 0};
//  
//  // *2 Create and get rotation matrix.
//  vector<std::vector<double> > RM;
//  RM_ES(a,RM);
//  
//  // *3 Input rotation matrix get two solutions of (phi, theta, psi) for CLHEP.
//  double a1[3];
//  double a2[3];
//  getAnglesCLHEP(RM,a1,a2);
//  
//  // *4 Valiate the two solutions can provide the same roation matrix.
//  vector<std::vector<double> > RM1, RM2;
//  RM_CLHEP(a1,RM1);
//  RM_CLHEP(a2,RM2);
 
 ////// Only try rotation maxtrix of CLHEP  ------------------
 //double a3[3]={ -0 , -0.0001 , 0};
 //vector<std::vector<double> > RM3;
 //RM_CLHEP(a3,RM3);
}