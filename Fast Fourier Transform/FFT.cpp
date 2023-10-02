#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
void FFT(vector<complex<double>> &a,bool inv){
	if(a.size()==1){
		return;
	}
	ll int n = a.size();
	vector<complex<double>> a1(n>>1),a2(n>>1);
	for(int i =0;2*i<n;++i){
		a1[i] = a[2*i];
		a2[i] = a[2*i +1];
	}
	FFT(a1,inv);
	FFT(a2,inv);
	double freq = 2*PI/double(n);
	if(inv){
		freq *=-1;
	}
	complex<double> w(1,0) , wn(cos(freq),sin(freq));
	for(int i =0;i*2<n;i++){
		a[i] = a1[i] + w * a2[i];
        a[i + n/2] = a1[i] - w * a2[i];
        if (inv) {
            a[i] /= 2;
            a[i + n/2] /= 2;
        }
        w *= wn;
	}
}

int main() {
	return 0;
}
