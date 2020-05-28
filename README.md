# foobar
This is where I put some thoughts regarding programming stuff.

## 21 May 2020 - getint()
I felt like creating a C/C++ function which can read integers from the input buffer and has a good management of invalid input. Then I created `getint()` using [`getchar()`](https://en.cppreference.com/w/c/io/getchar).

After creating it, I have been told that there are quite a number of similar functions existing already. But still I decided to put it here.

You can find more about it in my [blog post](https://zhongruoyu.github.io/blog/2020/May/23/getint/).

When you find bugs or areas of improvement, please feel free to point them out by [creating a new issue](https://github.com/ZhongRuoyu/foobar/issues/new/choose).

C: [Header file](https://github.com/ZhongRuoyu/foobar/blob/master/getint/c/cgetint.h) | [Sample Program](https://github.com/ZhongRuoyu/foobar/blob/master/getint/c/sample.c)  
C++: [Header file](https://github.com/ZhongRuoyu/foobar/blob/master/getint/cpp/getint.hh) | [Sample Program](https://github.com/ZhongRuoyu/foobar/blob/master/getint/cpp/sample.cpp)