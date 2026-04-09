#ifndef DRIVER_ICM42670P_H
#define DRIVER_ICM42670P_H

#include <Wire.h>
#include <ICM42670P.h>


#include "../Config/flightConfig.h"
#include <math.h>


class Driver_ICM42670 {
    public:
        
        Driver_ICM42670();
    
        bool init();
        
        void update();    

        float getRawDiffX() const;
        float getRawDiffZ() const;

        float getAccelMag() const;
    
    private:

        ICM42670 mpu;
    
        double baselineX, baselineZ; //, baselineY; // Not used in this version but can be added later for more control
        double raw_diff_x, raw_diff_z; //, raw_diff_y; // Not used in this version but can be added later for more control

        double accelMag;

};


#endif