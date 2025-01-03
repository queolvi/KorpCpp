#include <semaphore>
#include <iostream>
#include <thread>

std::shared_ptr<std::counting_semaphore<1>> semaphore = std::make_shared<std::counting_semaphore<1>>(1);

void process(int id) {
  while (true) {
    semaphore->acquire(); // Попытка получить семафор
    std::cout << "Процесс " << id << " в критической секции\n";
    // Критическая секция
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "Процесс " << id << " вышел из критической секции\n";
    semaphore->release(); // Освобождение семафора
  }
}

int main() {
  std::thread thread1(process, 1);
  std::thread thread2(process, 2);
  std::thread thread3(process, 3);

  thread1.join();
  thread2.join();
  thread3.join();

  return 0;
}
