import rospy
from std_msgs.msg import String
from first_pkg.msg import V2V

def talker():
    pub = rospy.Publisher('car_info', V2V, queue_size=10)
    rospy.init_node('talker', anonymous=True)

    rate = rospy.Rate(10)
    my_car_info = V2V()
    my_car_info.battery_level = 0.57
    my_car_info.id = 11
    my_car_info.name = "Lada 20105"
    while not rospy.is_shutdown():
        pub.publish(my_car_info)
        rate.sleep()

if __name__ == '__main__':
    try:
        #global frq
        #frq = rospy.get_param("frq")
        talker()
    except rospy.ROSInternalException:
        pass