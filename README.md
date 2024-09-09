# [教學] 在 Linux 下執行 MinGW 編譯的 C++ .exe 檔案

## 編譯
這是一份用C++撰寫的main主程式，此專案架構包刮Google單元測試。以下透過 Mingw toolchain 編譯，使得可以在Linux系統中編譯 Windows Mingw的執行檔。

```sh
# 配置項目
cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE=toolchain-mingw64.cmake
# 建構項目
cmake --build build
```

編譯結果後會在該資料夾下產生`build`資料夾，兩份執行檔分別會在。
- build/bin/main.exe
- build/bin/main.exe 

## 如何在 Linux 下執行 MinGW 編譯的 C++ .exe 檔案
可以參考以下文章在Linux系統下安裝wine模擬 Windows 環境來執行這些檔案。

安裝成功後即可執行：

```sh
# 執行主程式
wine build/bin/main.exe

```

執行結果：
```
hello world!
```



```sh
# 執行單元測試
wine build/bin/main.exe 
```

執行結果：
```
[0;32m[==========] [mRunning 1 test from 1 test suite.
[0;32m[----------] [mGlobal test environment set-up.
[0;32m[----------] [m1 test from PublicSum
[0;32m[ RUN      ] [mPublicSum.test1
[0;32m[       OK ] [mPublicSum.test1 (0 ms)
[0;32m[----------] [m1 test from PublicSum (9 ms total)

[0;32m[----------] [mGlobal test environment tear-down
[0;32m[==========] [m1 test from 1 test suite ran. (39 ms total)
[0;32m[  PASSED  ] [m1 test.
```