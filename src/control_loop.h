#include <iostream>
#include "boost/thread.hpp"

using namespace std;

class CONTROLLER {
    public:
        CONTROLLER();
        
        void loop();                //Main loop function        
        void system_start();       //start the system
        void set_xdes(double x);   //member to set the desired value

    private:
};
