# Fast Fourier Transform

The FFT is one of the most important algorithms in the world (right up next to Dijikstra's Shortest Path Algorithm , Binary Search etc.)
It is much faster than it's counter-part the DFT(Discrete Fourier Transform) which is a $\mathcal{O}(n^2)$ complexity algorithm while the FFT has a T.C of $\mathcal{O}(n\log{}n)$ 

# 2D Fourier Transform
$\mathcal{F}(u,v) = \iint_{\mathbb{R}} f(x,y)e^{-j2\pi\(ux+vy)} dx dy$
Used in image processing similarly Inverse maybe written as: 
$f(x,y) = \iint_{\mathbb{R}} \mathcal{F}(u,v)e^{j2\pi\(ux+vy)} du dv$
