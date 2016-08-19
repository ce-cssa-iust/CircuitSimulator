TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    Project/Symbols/Gates/Gate.cpp \
    Project/Symbols/Pin/PinIn.cpp \
    Project/Symbols/Pin/PinOut.cpp \
    Project/Symbols/Gates/And/And.cpp \
    Project/Symbols/FlipFlops/FlipFlop.cpp \
    Project/Symbols/FlipFlops/D_FF/D_FF.cpp \
    Project/Symbols/Generals/Ground/Ground.cpp \
    Project/Symbols/Generals/Vcc/Vcc.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    Project/Symbols/Symbol.h \
    Project/Utils/Array.h \
    Project/Utils/FixedQueue.h \
    Project/Utils/Types.h \
    Project/Symbols/Gates/Gate.h \
    Project/Symbols/Pin/PinIn.h \
    Project/Symbols/Pin/PinOut.h \
    Project/Symbols/Gates/And/And.h \
    Project/Symbols/FlipFlops/FlipFlop.h \
    Project/Symbols/FlipFlops/D_FF/D_FF.h \
    Project/Symbols/Generals/Ground/Ground.h \
    Project/Symbols/Generals/Vcc/Vcc.h

INCLUDEPATH += \
    Project \
    Project/Utils \
    Project/Symbols
