#include <iostream>
#include <utility>

// copy and move constructor
class Object {
  int* m_value;

public:
  // 通常のコンストラクタ
  explicit Object(int value) : m_value(new int(value)) {
    std::cout << "Constructor: " << *m_value << " at " << m_value << std::endl;
  }

  // デストラクタ
  ~Object() {
    delete m_value; // 配列でないなら delete、配列なら delete[]
    std::cout << "Destructor: " << m_value << std::endl;
  }

  // コピーコンストラクタ
  Object(const Object& other) : m_value(new int(*other.m_value)) {
    std::cout << "Copy Constructor: " << *m_value << " at " << m_value << std::endl;
  }

  // ムーブコンストラクタ (所有権の移転)
  Object(Object&& other) : m_value{other.m_value} {
    other.m_value = nullptr; // 元のポインタを空にする
    std::cout << "Move Constructor: " << *m_value << " at " << m_value << std::endl;
  }
};

void practice() {
  int i = 20;

  std::cout << "--- Step 1: Create a ---" << std::endl;
  Object a(i);

  std::cout << "--- Step 2: Copy a to b ---" << std::endl;
  Object b = a; // コピーコンストラクタが呼ばれる

  std::cout << "--- Step 3: Move b to c ---" << std::endl;
  Object c = std::move(b); // ムーブコンストラクタが呼ばれる
}

/*
// left value reference and right value reference
void show(const int& v) {
  std::cout << "左辺値参照で受け取った値: " << v << std::endl;
}

void show(int&& v) {
  std::cout << "右辺値参照で受け取った値: " << v << std::endl;
}

void practice() {
  int value = 20;
  show(value); // 左辺値参照で受け取った値: 20
  show(30);    // 右辺値参照で受け取った値: 30
}

// copy and move constructor
class home {
  int* m_load; // 土地

public:
  explicit home(std::size_t size) : m_load{new int[size]} {}

  ~home() {
    delete[] m_load;
  }

  home(home&& other);

  int* load() const {
    return m_load;
  }
};

home::home(home&& other)
  : m_load{other.m_load} // ムーブ元のポインターをコピーする
{
  // ムーブ元のポインターを空にする
  // 所有権の移動
  other.m_load = nullptr;
}

void practice() {
  home A{100};

  std::cout << "A の土地のアドレス: " << A.load() << std::endl;

  home B{std::move(A)}; // A から B に移動

  std::cout << "B の土地のアドレス: " << B.load() << std::endl;
  std::cout << "A の土地のアドレス: " << A.load() << std::endl;
}
*/
