import rospy
import cv2

from std_msgs.msg import String
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
import sys
bridge = CvBridge()

def image_callback(ros_image):
    print("got an image")
    global 

def main(args):
    rospy.init_node('image_viewer', anonymous=True)
    image_sub = rospy.Subscriber("/usb_cam/image_raw", Image, image_callback)

    try:
        rospy.spin()
    except KeyboardInterrupt:
        print("Shutting down")
        cv2.destroyAllWindows()
if __name__ == '__main__':
    main(sys.argv)

