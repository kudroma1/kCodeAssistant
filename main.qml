import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    TextEdit {
        width: 2
        textFormat: TextEdit.RichText
        text: "<span style=\"background-color:yellow\">" + "Word" + "</span> + <span style=\"back"
        font.family: "Helvetica"
        font.pointSize: 20
        focus: true
        selectByMouse: true
    }
}
