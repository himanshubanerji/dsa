## Problem Link
https://codeforces.com/contest/816/problem/B

## Though Process
Using the logic after reading editorial

- In the first step we make a prefix sum array (pf_sum), where we apply
the use pf_sum[l]++ and pf_sum[r + 1]--; <br>
    > How we come with this approach can be thought of like, ki maan lo
    sare jitne bhi first index diye gaye hai unko tumne mark kardiya
    pf_sum[l] += 1 karke. Ab baat yay aati hai ki jab hamlog prefex sum
    nikalenege tab hamlog index 'l' se +1 karte chalenege, ab yay socho
    ki yay kab rukega? Correct yay tabhi rukega jab hamlog index 'r'
    pahuch jayenge, therefore we can set the value of pf_sum[r + 1] to
    pf_sum[r + 1] - 1, eisse kya hoga ki jo +1 hamlog l se start karke
    r pr khatam kar rahe the vo r pr khatam hojayega aur uske baad vo
    +1 negate hojayega kyuki hamne index 'r + 1' pr value already -1 
    krdi hai
