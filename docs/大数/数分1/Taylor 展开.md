我们试着用多项式逼近一个非常复杂的函数。  
切线往往是一次多项式。  
当 $x$ 趋近 $x_0$ 时，我们希望构造 $n$ 次多项式 $T_n(x)$，使得 $f(x)-T_n(x)$ 在 $x_0$ 附近是比 $(x-x_0)^n$ 更高阶的无穷小量。  
我们多次利用洛必达法则，可以得到 $n$ 次 Taylor（泰勒）多项式：  
$$ T_n(x)=\sum_{k=0}^n\frac{f^{(k)}(x_0)}{k!}(x-x_0)^k $$
特别地，取 $x_0=0$，有：
$$ T_n(x)=\sum_{k=0}^n\frac{f^{(k)}(0)}{k!}x^k $$
这叫 Maclaurin（麦克劳林）多项式。
???+ example "给出部分函数的 Maclaurin 展开"
    $ e^x=1+x+\frac12x^2+\frac16x^3+\frac1{24}x^4+\cdots $  

    $ \sin x=x-\frac16x^3+\frac1{120}x^5-\cdots $  

    $ \cos x=1-\frac12x^2+\frac1{24}x^4-\frac1{720}x^6+\cdots $   

    $ \frac1{1-x}=1+x+x^2+x^3+x^4+\cdots $，要求 $x\lt1 $  

    $ \ln(1+x)=x-\frac{x^2}2+\frac{x^3}3-\frac{x^4}4+\cdots $
---

带有 Peano 余项的 Taylor 展开：
$$ f(x)=\sum_{k=0}^n\frac{f^{(k)}(x_0)}{k!}(x-x_0)^k+o((x-x_0)^k) $$

---

带有 Lagrange 余项的 Taylor 展开：
$$ f(x)=\sum_{k=0}^n\frac{f^{(k)}(x_0)}{k!}(x-x_0)^k+\frac{f^{(n+1)}(\xi)}{(n+1)!}(x-x_0)^{n+1} $$  
其中 $\xi$ 介于 $x$ 和 $x_0$ 之间。存在性证明会用到 Lagrange 中值定理。

