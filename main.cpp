#include <optional>

#include <print>

int main() {
  bool value = false;
  std::optional<bool> maybeValue = value;
  std::print("{}", *maybeValue);
  
  return 0;
}