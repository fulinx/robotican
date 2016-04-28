//
// Created by sub on 13/04/16.
//

#ifndef ROBOTICAN_GUI_RearCamListener_H
#define ROBOTICAN_GUI_RearCamListener_H
#include "listeners/Listener.h"
#include <sensor_msgs/Image.h>

class RearCam : public Listener
{
public:
    RearCam();
    long int getLastSignal();
    void subscribe();

private:

    ros::NodeHandle _nHandle;
    ros::Subscriber _sub;
    std::string _topicName;
    long int _signalTime;

    void _chatterCallback(const sensor_msgs::Image::ConstPtr& msg);
};


#endif //ROBOTICAN_GUI_RearCamListener_H
