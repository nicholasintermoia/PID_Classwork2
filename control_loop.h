#include <iostream>
#include "boost/thread.hpp"
#include <fstream>
#include <unistd.h>

using namespace std;

class CONTROLLER {
    public:
        CONTROLLER(const float &,const float &,const float &,const float &,float);
        
        void loop();                //Main loop function        
        void system_start();       //start the system
        void set_xdes(float);   //member to set the desired value
        void run();

    private:

        float _Kp;
        float _Ki;
        float _Kd;
        float _initial_value;
        float _cmd;
        float _xdes;
};
