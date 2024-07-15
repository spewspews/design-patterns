#include "maze.h"

namespace BSP::DesignPatterns {

Room::Room(int num) : num(num) {}

int
Room::getNum() const {
    return num;
}

void
Maze::addRoom(std::unique_ptr<Room> room) {
    rooms.emplace(room->getNum(), std::move(room));
}

Room dummy(-1);

std::pair<bool, const Room &>
Maze::getRoom(int roomNum) const {
    auto i = rooms.find(roomNum);
    if (i == rooms.end()) return {false, dummy};
    return {true, *i->second};
}

} // namespace BSP::DesignPatterns
