#!/usr/bin/env python3

import rospy
from std_msgs.msg import String
from first_pkg.msg import V2V


def talker():
    pub = rospy.Publisher('chatter', String, queue_size=10)
    car_pub = rospy.Publisher('car_chn', V2V, queue_size=10)
    car_info = V2V()
    car_info.name = "keya"
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(10)
    while not rospy.is_shutdown():
        hello_str = "hello, world ! %s" % rospy.get_time()
        rospy.loginfo(hello_str)
        pub.publish(hello_str)
        pub.publish(car_info)
        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass        

