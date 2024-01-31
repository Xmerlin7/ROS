#!/usr/bin/env python3
import rospy
from geometry_msgs.msg import Twist

def velocity_recieved_callback(robot_velocity):
    rospy.loginfo("The robot velocity is ({}, {})".format(robot_velocity.linear.x, 
                   robot_velocity.angular.z))
    robot_velocity.linear.x = robot_velocity.linear.x/4
    robot_velocity.angular.z = robot_velocity.angular.z/4
    velocity_pub.Publish(robot_velocity)

def pioneer_init():
    rospy.init_node('pioneer_interface', anonymous=True)

    rospy.Subscriber("/turtle/cmd_vel", Twist, velocity_recieved_callback)
    global velocity_pub
    velocity_pub =rospy.Publisher('/pioneer/cmd_vel', Twist, queue_size=10)
    rospy.spin()

if __name__ == '__main__':
    pioneer_init()