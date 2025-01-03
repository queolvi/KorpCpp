#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    // Конструктор для удобства
    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

int foo(TreeNode* a, TreeNode* b); 
int bar(TreeNode* node); 

int main() {
    // Ввод значений узлов для двоичного дерева
    int a_val, b_val;
    
    // Создаем узлы
    TreeNode* a = new TreeNode(0);
    TreeNode* b = new TreeNode(0);

    std::cout << "Введите значение узла a: ";
    std::cin >> a_val;
    a->val = a_val;

    std::cout << "Введите значение узла b: ";
    std::cin >> b_val;
    b->val = b_val;

    // Создаем левые и правые узлы для a
    a->left = new TreeNode(1);  // Примерно, установите свои значения
    a->right = new TreeNode(2);

    // Создаем левые и правые узлы для b
    b->left = new TreeNode(1);  // Примерно, установите свои значения
    b->right = new TreeNode(2);

    // Вызов функции foo
    int result_a = foo(a, b);
    std::cout << "Результат foo: " << result_a << std::endl;

    // Вызов функции bar
    result_a = bar(a); // Вызов bar с узлом a
    std::cout << "Результат bar(a): " << result_a << std::endl;

		
		int result_b = foo(a, b);
		result_b = bar(b); // Вызов bar с узлом b
    std::cout << "Результат bar(b): " << result_a << std::endl;




		// Освобождение памяти
    delete a->left;
    delete a->right;
    delete a;
    delete b->left;
    delete b->right;
    delete b;

    return 0;
}

int foo(TreeNode* a, TreeNode* b) {
    // Если оба узла равны нулю
    if (a == nullptr && b == nullptr) {
        return 1; // true
    }
    // Если хотя бы один узел равен нулю
    if (a == nullptr || b == nullptr) {
        return 0; // false
    }
    // Сравниваем значение узлов
    if (a->val != b->val) {
        return 0; // false
    }
    
    // Рекурсивно вызываем функцию для детей
    return foo(a->left, b->left) && foo(a->right, b->right);
}

int bar(TreeNode* node) {
    // Если узел равен нулю
    if (node == nullptr) {
        return 1; // true
    }
    
    // Вызов функции foo для левого и правого детей
    return foo(node->left, node->right);
}
