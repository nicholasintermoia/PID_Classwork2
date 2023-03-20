#include "control_loop.h"

using namespace std;

//the goal is to implement a simple PID controller, 
//running on input value to reach the desired one
//we have implemented a transfer function to simulate a system which can be controlled
//by our PID

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
  
    while (c.get_q()){
        cin>>xdes;
        c.set_xdes(xdes);
    }

    return 0;
}
