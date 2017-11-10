import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Component.onCompleted: {
         test.init()
    }

    Item{
        id:layout1
        width: parent.width/3
        height: parent.height

        Rectangle
        {
            id:bg1
            anchors.fill: parent
            color:"yellow"
            opacity: 0.3
        }

        Rectangle
        {
            id: button1
            objectName: "button1"
            width: 100
            height: 75
            color: btn1MouseArea.pressed ? "yellow" : "gray"
            anchors.centerIn:parent

            Text
            {
                id:btn1Text
                text:"button1"
                color: btn1MouseArea.pressed ? "white" : "black"
                anchors.fill:parent
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
            }

            MouseArea
            {
                id:btn1MouseArea
                anchors.fill:parent
                onClicked:
                {
                    test.clickCount(button1.objectName);
                }
            }
        }
    }

    Item{
        id:layout2
        width: parent.width/3
        height: parent.height
        anchors.left: layout1.right

        Rectangle
        {
            id:bg2
            anchors.fill: parent
            color:"green"
            opacity: 0.3
        }

        Text
        {
            id:eventText
            width: layout2.width
            height: 100
            text:btn1MouseArea.pressed ? "button1" : btn2MouseArea.pressed ? "button2" : btn3MouseArea.pressed ? "button3" : ""
            y:button2.y/2
            horizontalAlignment: Text.AlignHCenter

        }


        Rectangle
        {
            id: button2
            objectName: "button2"
            width: 100
            height: 75
            color: btn2MouseArea.pressed ? "blue" : "gray"
            anchors.centerIn:parent

            Text
            {
                id:btn2Text
                text:"button2"
                color: btn2MouseArea.pressed ? "white" : "black"
                anchors.fill: parent
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
            }

            MouseArea
            {
                id:btn2MouseArea
                anchors.fill:parent
                onClicked:
                {
                    test.clickCount(button2.objectName);
                }
            }
        }
    }

    Item{
        id:layout3
        width: parent.width/3
        height: parent.height
        anchors.left: layout2.right

        Rectangle
        {
            id:bg3
            anchors.fill: parent
            color:"blue"
            opacity: 0.3
        }


        Rectangle
        {
            id: button3
            objectName: "button3"
            width: 100
            height: 75
            color: btn3MouseArea.pressed ? "red" : "gray"
            anchors.centerIn:parent

            Text
            {
                id:button3Text
                text:"button3"
                color: btn3MouseArea.pressed ? "white" : "black"
                anchors.fill:parent
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
            }

            MouseArea
            {
                id:btn3MouseArea
                anchors.fill:parent
                onClicked:
                {
                    test.clickCount(button3.objectName);
                }
            }
        }

    }
}






