cmake_minimum_required(VERSION 3.28)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(CreationMethod
        FactoryPattern/CreationMethod.cpp)

add_executable(SimpleFactory
     FactoryPattern/SimpleFactory.cpp)

add_executable(FactoryMethod
        FactoryPattern/FactoryMethod.cpp)

add_executable(AbstractFactory
        FactoryPattern/AbstractFactory.cpp)


add_executable(SingletonPattern
        SingletonPattern/TreasureTown.cpp
        SingletonPattern/TaskBoard.cpp
        SingletonPattern/ExpeditionTeam.cpp
        SingletonPattern/HelpSeeker.cpp
)

add_executable(BuilderPattern
        BuilderPattern/TreasureEatery.cpp
        BuilderPattern/Meals.cpp
        BuilderPattern/Menus.cpp
        BuilderPattern/MenuBuilders.cpp
        BuilderPattern/Waiter.cpp
)

add_executable(PrototypePattern
        PrototypePattern/Map.cpp
        PrototypePattern/Map.h
        PrototypePattern/Enemy.cpp
        PrototypePattern/Chest.cpp
        PrototypePattern/Game.cpp
)

add_executable(AdapterPattern
        AdapterPattern/MediaPlayer.cpp
        AdapterPattern/MediaPlayer.h
        AdapterPattern/Software.cpp
)

add_executable(BridgePattern
        BridgePattern/Maimai.cpp
        BridgePattern/Note.cpp
        BridgePattern/Note.h
        BridgePattern/Shape.cpp
        BridgePattern/Shape.h
        BridgePattern/Pattern.cpp
        BridgePattern/Pattern.h
)

add_executable(CompositePattern
        CompositePattern/GUISoftware.cpp
        CompositePattern/GWindow.cpp
        CompositePattern/GWindow.h
        CompositePattern/GLable.cpp
        CompositePattern/GLable.h
        CompositePattern/GHLayout.cpp
        CompositePattern/GVLayout.cpp
        CompositePattern/GVLayout.h
        CompositePattern/GObject.cpp
        CompositePattern/GObject.h
        CompositePattern/GHLayout.h

)

add_executable(DecoratorPattern
        DecoratorPattern/Madeline.cpp
        DecoratorPattern/Madeline.h
        DecoratorPattern/Badeline.cpp
        DecoratorPattern/Badeline.h
        DecoratorPattern/Core.cpp
        DecoratorPattern/Core.h
        DecoratorPattern/Celeste.cpp
        DecoratorPattern/Player.cpp
        DecoratorPattern/Player.h
        DecoratorPattern/Eevee.cpp
        DecoratorPattern/Eevee.h
        DecoratorPattern/PlayerDecorator.cpp
        DecoratorPattern/PlayerDecorator.h

)