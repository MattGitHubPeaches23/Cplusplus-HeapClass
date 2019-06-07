// Copyright (c) 2019, Matthew Chalifoux.

#include "heapclass.cpp"

int main(int argc, char *argv[])
{
    Heap<int> test;
    srand(time(NULL));

//    char ans = '\0';
//    do{
//        cout << "[R]andom  [I]nsert  [P]op  e[X]it: " << endl;
//        cin >> ans;
//        if(ans == 'R' || ans == 'r'){
//            int num = 0;
//            num = rand()%1000;
//            cout << "Entering number " << num << endl;
//            test.insert(num);
//            cout << test;
//        }
//        else if(ans == 'I' || ans == 'i'){
//            int num;
//            cout << "Enter number to insert : ";
//            cin >> num;
//            cout << "Entering number " << num << endl;
//            test.insert(num);
//            cout << test;
//        }
//        else if(ans == 'P' || ans == 'p'){
//            if(!test.is_empty()){
//                cout << "popping " << test.Pop() << endl;
//                cout << test;
//            }
//        }
//        else if(ans == 'X' || ans == 'x'){
//            exit(1);
//        }
//    }while(ans != 'X' || ans != 'x');

    for(int i = 0; i < 100; ++i){
        int num = 0;
        num = rand()%1000;
        test.insert(num);
    }
    cout << "HOW MANY?? =========== " << test.how_many() << endl;
    while(!test.is_empty()){
        cout << test.Pop() << endl;
    }
    cout << "HOW MANY?? =========== " << test.how_many() << endl;
    cout << "Test****************" << endl << test;

//    cout << "Test****************" << endl << test;
//    Heap<int> test2(test);
//    cout << "Test2****************" << endl << test2;
//    test.insert(25);
//    Heap<int> test3;
//    test3 = test;
//    cout << "Test3**************" << endl << test3;
//    cout << "Test2****************" << endl << test2;


    return 0;
}
