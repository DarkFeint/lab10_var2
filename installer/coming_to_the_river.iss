; Имя приложения
#define   Name       "Coming to the river"
; Версия приложения
#define   Version    "1.0.0"
; Фирма-разработчик
#define   Publisher  "Velikiy i moguchiy Vladik"
; Сафт фирмы разработчика
#define   URL        "https://vk.com/pedorhuan"
; Имя исполняемого модуля
#define   ExeName    "Coming to the river.exe"


[Setup]


AppId={{8E2ABDD3-7C2F-4F28-ADC1-38A15B61DB5E}

AppName={#Name}
AppVersion={#Version}
AppPublisher={#Publisher}
AppPublisherURL={#URL}
AppSupportURL={#URL}
AppUpdatesURL={#URL}


DefaultDirName={pf}\{#Name}

DefaultGroupName={#Name}


OutputDir=C:\Git\lab_itog\installer
OutputBaseFileName=Strannaya_fignya


SetupIconFile=C:\Users\Vlad\Downloads\coming_to_the_river.ico


Compression=lzma
SolidCompression=yes



[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"; LicenseFile: "License_ENG.txt"
Name: "russian"; MessagesFile: "compiler:Languages\Russian.isl"; LicenseFile: "License_RUS.txt"




[Tasks]

Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked



[Files]


Source: "C:\Build\lab_itog\Release\lab_itog.exe"; DestDir: "{app}"; Flags: ignoreversion


Source: "C:\Git\lab_itog\images\*"; DestDir: "{app}\images\"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Git\lab_itog\music\*"; DestDir: "{app}\music\"; Flags: ignoreversion recursesubdirs createallsubdirs

Source: "C:\Git\lab_itog\installer\VC_redist.x64.exe"; DestDir: "{tmp}"; Flags: deleteafterinstall




[Icons]

Name: "{group}\{#Name}"; Filename: "{app}\{#ExeName}"

Name: "{commondesktop}\{#Name}"; Filename: "{app}\{#ExeName}"; Tasks: desktopicon



[Run]

Filename: {tmp}\VC_redist.x64.exe; Parameters: "/q:a /c:""install /l /q"""; StatusMsg: VS redistributable package is installed. Please wait...
