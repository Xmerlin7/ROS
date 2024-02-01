import rospy
import cv2
from std_msgs.msg import String
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
import sys
bridge = CvBridge()

def image_callback(ros_image):
    print("got an image")

    try:
        cv_image = bridge.imgmsg_to_cv2(ros_image, 'bgr8')
    except CvBridgeError as e:
        print(e)

    cv2.imshow("image_viewer", cv_image)
    cv2.waitKey(30)  # Adjust display duration as needed

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
