﻿#include "footstep.h"

namespace cnoid{
namespace vnoid{

Step::Step(double _stride, double _sway, double _spacing, double _turn, double _climb, double _duration, int _side){
    stride   = _stride  ;
    sway     = _sway    ;
	spacing  = _spacing ;
	turn     = _turn    ;
	climb    = _climb   ;
	duration = _duration;
    side     = _side    ;
    
    for(int i = 0; i < 2; i++){
		foot_pos   [i] = Vector3(0.0, 0.0, 0.0);
		foot_ori   [i] = 0.0;
		foot_vel   [i] = Vector3(0.0, 0.0, 0.0);
		foot_angvel[i] = 0.0;
	}
	zmp = Vector3(0.0, 0.0, 0.0);
	dcm = Vector3(0.0, 0.0, 0.0);
}

}
}