#!/usr/bin/env python3

import rospy
from std_msgs.msg import String, Int16

def my_callack(my_string):
    rospy.loginfo("I heard %s", my_string.data)
    
def listner():
 
    rospy.init_node('talker', anonymous=True)
    rospy.Subscriber('chatter', String, my_callack)
    rate = rospy.Rate(10)
    while not rospy.is_shutdown():
        hello_str = "hello, world ! %s" % rospy.get_time()
        rospy.loginfo(hello_str)
        rate.sleep()

if __name__ == '__main__':
    try:
        listner()
    except rospy.ROSInterruptException:
        pass        

