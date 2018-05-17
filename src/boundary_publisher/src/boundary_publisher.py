#!/usr/bin/env python
import rospy
from geometry_msgs.msg import PointStamped


header = {0, "now", "/map"}
point = {1.0, -1.0, 0.0}

def talker():

    pub = rospy.Publisher('/clicked_point', PointStamped)
    rospy.init_node('Boundary_Points_Publisher')
    rospy.loginfo((1.0,-1.0,0.0))
    pub.publish(['header','point'])
    rospy.sleep(0.2)

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
