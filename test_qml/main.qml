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

        Text
        {
            id:eventText
            width: layout1.width
            height: 100
            text: btn1MouseArea.pressed ? "InsertData: "+button1.objectName : btn2MouseArea.pressed ? "InsertData: "+button2.objectName : ""
            y:button1.y/2
            horizontalAlignment: Text.AlignHCenter

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
                    test.addItem("button1")
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
                    test.addItem("button2")
                }
            }
        }

        Rectangle
        {
            id:removeButton
            width: 100
            height: 75
            color: removeMouseArea.pressed ? "yellow" : "black"
            anchors.horizontalCenter:  parent.horizontalCenter

            Text
            {
                id:removeText
                text:"remove"
                color: "white"
                anchors.fill: parent
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
            }
            MouseArea
            {
                id:removeMouseArea
                anchors.fill:parent
                onClicked:
                {
                    test.removeCount();
                    test.removeItem();
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

        ListView
        {
            id:list
            model:test
            width: parent.width
            height: parent.height
            delegate:
                Component{
                Rectangle{
                    width: list.width
                    height: list.height/10
                    border.color: "black"
                    Text{
                        text: test.getData()
                        anchors.verticalCenter : parent.verticalCenter
                        anchors.left: parent.left
                        anchors.leftMargin: 30
                    }
                }
            }
        }
    }
}






