#include <iostream>

union Value {
    int i;
    float f;
    char c;
};

void practice() {
    Value val;

    std::cout << "--- 共用体の正しい使い方 ---" << std::endl;

    // 1. 整数として値を設定し、利用する
    val.i = 10;
    std::cout << "val.iに10を代入: " << val.i << std::endl;

    // 2. 次に、浮動小数点数として値を設定し、利用する
    // この操作により、以前の val.i の値は上書きされます。
    val.f = 3.14f;
    std::cout << "val.fに3.14fを代入: " << val.f << std::endl;

    // この時点で val.i にアクセスするのは間違いです（未定義動作）。
    // std::cout << "val.fを代入した後のval.i: " << val.i << std::endl; //
    // 間違った使い方！

    // 3. 最後に、文字として値を設定し、利用する
    val.c = 'A';
    std::cout << "val.cに'A'を代入: " << val.c << std::endl;

    std::cout << "\n--- 元のコードの問題点 ---" << std::endl;
    // 元のコードでは、以下のように連続で代入していました。
    val.i = 10;
    val.f =
        3.14f;  // この時点で、10という値が保持されていたメモリが上書きされます。

    // その後で `i` のメンバーを読み出すと、`f` のビット表現を整数として解釈した
    // 意味不明な値が出力されます。これは未定義動作であり、期待する「10」ではありません。
    std::cout << "fを代入した後にiを読むと: " << val.i << std::endl;

    // 最後に代入されたメンバーは正しく読めます。
}