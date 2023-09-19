#include <iostream>
#include <getopt.h>

using namespace std;

int main(int argc, char *argv[]){
    string s1 = "Введите один из параметров:\n -a — cложение всех введенных значений\n -s — вычитание из первого операнда всех остальных\n -h — вывод справки\n ";
    if (argc==1){
        cout<< s1 << endl;
    }        
    int opt, i, res_sum,x_for_sum, b, a;
    while ((opt = getopt (argc, argv, "a:s:h")) != -1){
        switch (opt){
            case 'h':
                cout<< s1;
            break;
            case 'a':
            	res_sum = 0;		
                for(i=2; i<argc; i++){
                    x_for_sum = strtol(argv[i], NULL, 10);
                    res_sum += x_for_sum;
                }
                cout<< "Результат: "<< res_sum <<endl;
                break;
            
            case 's':
                b = 0;
                for(i=2; i<argc; i++){
                    int s;
                    s = strtol(argv[i], NULL, 10);
                    b -= s;
                }
                a = strtol(argv[2], NULL, 10);
                cout<< "Результат: "<< a*2 + b <<endl;
                break;
        }
    }
}
