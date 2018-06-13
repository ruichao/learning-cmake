#include "Todo.h"

Todo::Todo() {
}

Todo::~Todo() {
}

size_t Todo::size() const {
  return this_tasks.size();
}

void Todo::addTask(const std::string& task) {
  this_tasks.push_back(task);
}

std::string Todo::getTask(size_t index) const {
  if (index < this_tasks.size()) {
    return this_tasks[index];
  } else {
    return "";
  }
}

