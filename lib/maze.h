#pragma once

#include <memory>
#include <unordered_map>

namespace BSP::DesignPatterns {

class Room {
  public:
    Room(int roomNum);
    int getNum() const;

  private:
    int num;
};

class Maze {
  public:
    void addRoom(std::unique_ptr<Room>);
    std::pair<bool, const Room &> getRoom(int) const;

  private:
    std::unordered_map<int, std::unique_ptr<Room>> rooms;
};

} // namespace BSP::DesignPatterns
