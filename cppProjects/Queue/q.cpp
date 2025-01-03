#include <iostream>
#include <thread>
#include <mutex>

std::mutex mutex; // Мьютекс

int counter = 0; // Общий ресурс

void p0() {
  std::cout << "Process p0: ";
  for (int i = 0; i < 5; ++i) {
    std::lock_guard<std::mutex> lock(mutex); // Блокировка мьютекса
    std::cout << "Change count: " << ++counter << std::endl;
  }
}

void p1() {
  std::cout << "Process p1: ";
  for (int i = 0; i < 5; ++i) {
    std::lock_guard<std::mutex> lock(mutex); // Блокировка мьютекса
    std::cout << "Read count: " << counter << std::endl; 
  }
}

void p2() {
  std::cout << "Process p2: ";
  for (int i = 0; i < 5; ++i) {
    std::lock_guard<std::mutex> lock(mutex); // Блокировка мьютекса
    std::cout << "Read count: " << counter << std::endl; 
  }
}

int main() {
  std::thread t0(p0);
  std::thread t1(p1);
  std::thread t2(p2);

  t0.join();
  t1.join();
  t2.join();

  return 0;
}