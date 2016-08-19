TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    Symbols/Gates/Gate.cpp \
    Symbols/Pin/PinIn.cpp \
    Symbols/Pin/PinOut.cpp \
    Symbols/Gates/And/And.cpp \
    Symbols/FlipFlops/FlipFlop.cpp \
    Symbols/FlipFlops/D_FF/D_FF.cpp \
    Symbols/Generals/Ground/Ground.cpp \
    Symbols/Generals/Vcc/Vcc.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    Symbols/Symbol.h \
    Utils/Array.h \
    Utils/FixedQueue.h \
    Utils/Types.h \
    Symbols/Gates/Gate.h \
    Symbols/Pin/PinIn.h \
    Symbols/Pin/PinOut.h \
    Symbols/Gates/And/And.h \
    Symbols/FlipFlops/FlipFlop.h \
    Symbols/FlipFlops/D_FF/D_FF.h \
    Symbols/Generals/Ground/Ground.h \
    Symbols/Generals/Vcc/Vcc.h

INCLUDEPATH += \
    Utils \
    Symbols
