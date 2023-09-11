# C语言查漏补缺



浮点数double

Printf("%f")

Scan("%lf")



![Screenshot 2023-09-05 at 1.01.20 PM](/Users/aprilyang/Library/Application Support/typora-user-images/Screenshot 2023-09-05 at 1.01.20 PM.png)

a=b=6: a=(b=6)



![Screenshot 2023-09-05 at 1.04.09 PM](/Users/aprilyang/Library/Application Support/typora-user-images/Screenshot 2023-09-05 at 1.04.09 PM.png)





### switch语句

```c
switch(type)
{
  case 1:
    printf("hello\n");
  case 2:
    printf("case2\n");
    break;
  default:
    printf('default\n');
    break;
}
```

如果某个case内没有break，那执行完就回继续执行下一个case



![Screenshot 2023-09-09 at 2.57.27 AM](/Users/aprilyang/Library/Application Support/typora-user-images/Screenshot 2023-09-09 at 2.57.27 AM.png)

![Screenshot 2023-09-09 at 2.58.29 AM](/Users/aprilyang/Library/Application Support/typora-user-images/Screenshot 2023-09-09 at 2.58.29 AM.png)



dowhile和while的区别

![Screenshot 2023-09-09 at 3.03.46 AM](/Users/aprilyang/Library/Application Support/typora-user-images/Screenshot 2023-09-09 at 3.03.46 AM.png)



![Screenshot 2023-09-09 at 3.09.26 AM](/Users/aprilyang/Library/Application Support/typora-user-images/Screenshot 2023-09-09 at 3.09.26 AM.png)



![Screenshot 2023-09-09 at 3.10.05 AM](/Users/aprilyang/Library/Application Support/typora-user-images/Screenshot 2023-09-09 at 3.10.05 AM.png)



![Screenshot 2023-09-09 at 3.10.24 AM](/Users/aprilyang/Library/Application Support/typora-user-images/Screenshot 2023-09-09 at 3.10.24 AM.png)



嵌套循环中，break只能跳出当前循环



![Screenshot 2023-09-09 at 3.17.02 AM](/Users/aprilyang/Library/Application Support/typora-user-images/Screenshot 2023-09-09 at 3.17.02 AM.png)

![Screenshot 2023-09-09 at 3.17.16 AM](/Users/aprilyang/Library/Application Support/typora-user-images/Screenshot 2023-09-09 at 3.17.16 AM.png)



## 数据类型

### 整数

- char: 1byte 8bit
- short: 2 bytes
- int: 1word 取决于编译器（CPU）
- long:1word 取决于编译器（CPU）
- long long: 8 bytes
- ![Screenshot 2023-09-09 at 3.20.45 AM](/Users/aprilyang/Library/Application Support/typora-user-images/Screenshot 2023-09-09 at 3.20.45 AM.png)



### 二进制负数

- 1个字节可以表达：00000000->11111111（0～255）
- 三种方案
  - 仿照十进制用特殊标志表示负数
  - 取中间数为0
  - 补码
- 补码 -- 用补码和原码相加可以得到一个溢出的0
  - 考虑-1我们希望-1+1->0
    - 0->00000000
    - 1->00000001
    - 11111111+00000001->10000000
    - 因为0 - 1 -> -1所以-1 = (1)00000000 - 00000001 -> 11111111
    - 11111111被当作纯二进制时为255，当作补码时是-1
  - 同理对于 -a 其补码是0-a，实际上是$2^n$-a，n是位数

### 数的范围

![Screenshot 2023-09-09 at 12.25.14 PM](/Users/aprilyang/Library/Application Support/typora-user-images/Screenshot 2023-09-09 at 12.25.14 PM.png)

![Screenshot 2023-09-09 at 12.25.30 PM](/Users/aprilyang/Library/Application Support/typora-user-images/Screenshot 2023-09-09 at 12.25.30 PM.png)



### 字符

#### char

是一种整数也是一种字符类型

