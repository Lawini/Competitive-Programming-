/*
// Cách 1: Có thể ktra số nguyên tố đơn giản theo 2 định lý sau
1: trừ số 2 và các số nto là số lẻ;
2: trừ số 2 và số 3 và các số nto có dạng là 6k +- 1;



//Cách 2: Dùng định lý Fermat
Định lý nhỏ Fermat: Nếu p là số nguyên tô và a là số tự nhiên thì a ^ p mod p = a;
Từ định lý nhỏ này ta có
Nếu 2^ n mod n != 2 thì n ko là số nto
Nếu 2^ n mod n = 2 thì nhiều khả năng n là số nguyên tố



//Cách 3: Sàng nto Eratosthene (tốn nhiều bộ nhớ)
    p[1] p[2] ... p[n] true;
    primes[1] = false;
    
    for (int i = 2; i < sqrt(n); i++){
        (if primes[i] == true){
        for (int j = i * i; j += i; j++){
            primes[j] = false;
            }
        }
        
    
    }





*/
