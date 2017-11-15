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
        width: parent.width/4
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
                    if( test.currentStatus() == false )
                    {
                        test.clickCount(button1.objectName);
                        test.addItem("button1 No."+test.btn1Count())
                    }
                    else
                    {
                        test.setSubData("button1 No."+test.subBtn1Count())
                    }
                }
            }
        }
    }

    Item{
        id:layout2
        width: parent.width/4
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
                    if( test.currentStatus() == false )
                    {
                        test.clickCount(button2.objectName);
                        test.addItem("button2 No."+test.btn2Count())
                    }
                    else
                    {
                        test.setSubData("button2 No."+test.subBtn2Count())
                    }
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
                    if( test.currentStatus() == false )
                    {
                        test.removeCount();
                        test.removeItem();
                    }
                    else
                    {
                        test.removeSubData();
                    }
                }
            }
        }
    }

    Item{
        id:layout3
        width: parent.width/4
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
            id:mainList
            model:test
            width: parent.width
            height: parent.height
            delegate:
                Component{

                Rectangle{
                    width: mainList.width
                    height: mainList.height/10
                    border.color: "black"
                    color: listItemMouseArea.pressed ? "gray" : "white"

                    Text{
                        text: test.getData()
                        anchors.verticalCenter : parent.verticalCenter
                        anchors.left: parent.left
                        anchors.leftMargin: 30
                    }

                    MouseArea{
                        id:listItemMouseArea
                        width: parent.width
                        height: parent.height
                        anchors.fill: parent
                        onClicked:
                        {
                            if( test.currentStatus() == false )
                            {

                                mainList.currentIndex = index
                                test.changedStatus(true)
                                print("ItemIndex: ",mainList.currentIndex)
                                test.setCurrentIndex(mainList.currentIndex)
                            }
                            else
                            {
                                if( mainList.currentIndex != index )
                                {
                                    mainList.currentIndex = index
                                    test.setCurrentIndex(mainList.currentIndex)
                                    print("true")
                                }
                                else
                                {
                                    test.changedStatus(false)
                                }
                            }
                        }
                    }

                }
            }
        }
    }

    Item{
        id:layout4
        width:parent.width/4
        height:parent.height
        anchors.left: layout3.right

        Rectangle
        {
            id:bg4
            anchors.fill:parent
            color:"orange"
            opacity:0.3
        }

        ListView
        {
            id:subList
            model:test.returnSub()
            width: parent.width
            height: parent.height
            delegate:
                Component{
                Rectangle{
                    width: subList.width
                    height: subList.height/10
                    border.color: "black"
                    color: listItemMouseArea.pressed ? "gray" : "white"

                    Text{
                        text: test.returnSub()
                        anchors.verticalCenter : parent.verticalCenter
                        anchors.left: parent.left
                        anchors.leftMargin: 30
                    }
                }
            }

        }
    }
}






