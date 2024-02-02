from my_first_service.srv import addTwoInt
from my_first_service.srv import addTwoIntRequest
from my_first_service.srv import addTwoIntResponse
import time
import rospy
def handle_add(req):
    print("sum is [%s + %s = %s]" % (req.a, req.b, (req.a + req.b)))
    time.sleep(5) #5sec delay
    sum_responce = addTwoIntResponse(req.a, req.b)
    return (sum_responce)

def addTwoInt_server():
    rospy.init_node('add_two_ints_server')
    s =rospy.Service('add_two_ints', addTwoInt, handle_add)
    print ("please insert to numbers to be added")
    rospy.spin()

if __name__ == '__main':
    addTwoInt_server()
    