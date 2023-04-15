////
////  22.cpp
////  C++_Primer_Plus
////
////  Created by 陈斌斌 on 2023/3/13.
////
//
//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    char animal[20] = "bear";
//    const char *bird = "wren";
//    char *ps;
//    
//    cout << animal << " and " << bird << endl;
//    
//    cout << "Enter a kind of animal: ";
//    cin >> animal;
//    
//    cout << animal << endl;
//    ps = animal;
//    cout << ps << "!\n";
//    cout << "before using strcpy():\n";
//    cout << animal << " at " << (int *) animal << endl;
//    cout << ps << " at " << (int *) ps << endl;
//    
//    ps = new char[strlen(animal) + 1];
//    strcpy(ps, animal);
//    cout << "After using strcpy():\n";
//    
//    cout << animal << " at " << (int *) animal << endl;
//    cout << ps << " at " << (int *) ps << endl;
//    
//    delete []ps;
//    
//    return 0;
//}
