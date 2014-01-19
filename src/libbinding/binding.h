
/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2013-2014, 
 *  Author : Praveen Ramanujam (praveen.ramanujam@locomotec.com) 
 *  Hocschule Bonn-Rhein-Sieg
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redstributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of the Hochschule Bonn-Rhein-Sieg nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *********************************************************************/

#include "../../youbot_driver/youbot/YouBotBase.hpp"
#include "../../youbot_driver/youbot/YouBotManipulator.hpp"
#include "youbot_int.h"

namespace YOUBOTPYTHON{
using namespace boost::python;

class PyRobotArm;

class Arm {
public:
	Arm();
	bool startcalib();
	bool SetJointValues(const object& o);
	bool EnableTorqueMode();
	object GetJointValues();
	object GetJointTorqueValues();
	bool SetJointTorqueValues(const object& o);
	youbot::YouBotManipulator *youBotArm;  
	virtual ~Arm();
};

class Base{

public:
	Base(){};
	bool startcalib(){};
	bool setVelocity(){};
};


class Robot{

public:
	Robot(){
	arm = NULL;};
	virtual ~Robot(){};
	Arm *arm;
	
	

};




} /* namespace YOUBOTPYTHON */
