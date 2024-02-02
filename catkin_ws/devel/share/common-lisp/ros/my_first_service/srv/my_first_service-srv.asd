
(cl:in-package :asdf)

(defsystem "my_first_service-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "addTwoInt" :depends-on ("_package_addTwoInt"))
    (:file "_package_addTwoInt" :depends-on ("_package"))
  ))