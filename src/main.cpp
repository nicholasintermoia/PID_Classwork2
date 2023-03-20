#include "control_loop.h"

using namespace std;

//the goal is to implement a simple PID controller, 
//running on input value to reach the desired one

// Sense: read a value from keyboard
// Plan:  generate the correct input
// Act:   set the input

int main(int argc, char** argv) {
    float initial_controller_value;
    float xdes;
    if( argc >1 ){
        initial_controller_value=atof(argv[1]);
    }else initial_controller_value=0.0;

    cout<<"inserisci riferimento"<<endl;
    cin>> xdes;

    CONTROLLER c(0.4,initial_controller_value,0.4,0.002,xdes);
    //c.set_xdes();
    /*c.system_start();
    cout<<"Imposta un valore di riferiemnto: ";
    cin>>xdes;
    c.set_xdes(xdes);
    cout<<"\n";
    c.loop();*/
    //c.run();

    while (true){
        //cout<<"inserisci riferimento"<<endl;
        cin>>xdes;
        c.set_xdes(xdes);
    }
    
    return 0;
}
