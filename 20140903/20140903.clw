; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CProp3
LastTemplate=CPropertySheet
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "20140903.h"
LastPage=0

ClassCount=9
Class1=CMy20140903App
Class2=CMy20140903Doc
Class3=CMy20140903View
Class4=CMainFrame

ResourceCount=5
Resource1=IDD_PROP3
Resource2=IDD_PROP2
Resource3=IDD_ABOUTBOX
Resource4=IDR_MAINFRAME
Class5=CAboutDlg
Class6=CProp1
Class7=CProp2
Class8=CProp3
Class9=CPropSheet
Resource5=IDD_PROP1

[CLS:CMy20140903App]
Type=0
HeaderFile=20140903.h
ImplementationFile=20140903.cpp
Filter=N
LastObject=CMy20140903App

[CLS:CMy20140903Doc]
Type=0
HeaderFile=20140903Doc.h
ImplementationFile=20140903Doc.cpp
Filter=N
LastObject=CMy20140903Doc

[CLS:CMy20140903View]
Type=0
HeaderFile=20140903View.h
ImplementationFile=20140903View.cpp
Filter=C
LastObject=CMy20140903View
BaseClass=CView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=IDM_PROPERTYSHEET




[CLS:CAboutDlg]
Type=0
HeaderFile=20140903.cpp
ImplementationFile=20140903.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_MRU_FILE1
Command6=ID_APP_EXIT
Command7=ID_EDIT_UNDO
Command8=ID_EDIT_CUT
Command9=ID_EDIT_COPY
Command10=ID_EDIT_PASTE
Command11=ID_VIEW_TOOLBAR
Command12=ID_VIEW_STATUS_BAR
Command13=ID_APP_ABOUT
Command14=IDM_PROPERTYSHEET
CommandCount=14

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_UNDO
Command5=ID_EDIT_CUT
Command6=ID_EDIT_COPY
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_EDIT_COPY
Command11=ID_EDIT_PASTE
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
CommandCount=13

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[CLS:CProp1]
Type=0
HeaderFile=Prop1.h
ImplementationFile=Prop1.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=IDC_LIST1
VirtualFilter=idWC

[CLS:CProp2]
Type=0
HeaderFile=Prop2.h
ImplementationFile=Prop2.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=IDC_CHECK1
VirtualFilter=idWC

[CLS:CProp3]
Type=0
HeaderFile=Prop3.h
ImplementationFile=Prop3.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=IDC_COMBO1
VirtualFilter=idWC

[CLS:CPropSheet]
Type=0
HeaderFile=PropSheet.h
ImplementationFile=PropSheet.cpp
BaseClass=CPropertySheet
Filter=W

[DLG:IDD_PROP1]
Type=1
Class=CProp1
ControlCount=6
Control1=IDC_STATIC,button,1342177287
Control2=IDC_RADIO1,button,1342308361
Control3=IDC_RADIO2,button,1342177289
Control4=IDC_RADIO3,button,1342177289
Control5=IDC_LIST1,listbox,1352728835
Control6=IDC_STATIC,static,1342308352

[DLG:IDD_PROP3]
Type=1
Class=CProp3
ControlCount=2
Control1=IDC_COMBO1,combobox,1344339971
Control2=IDC_STATIC,static,1342308352

[DLG:IDD_PROP2]
Type=1
Class=CProp2
ControlCount=5
Control1=IDC_STATIC,button,1342177287
Control2=IDC_CHECK1,button,1342242819
Control3=IDC_CHECK2,button,1342242819
Control4=IDC_CHECK3,button,1342242819
Control5=IDC_CHECK4,button,1342242819

