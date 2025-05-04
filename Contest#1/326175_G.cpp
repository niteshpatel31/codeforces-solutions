#include <iostream>
#define ll long long

ll min(ll a, ll b)
{
    if (a < b)
        return a;
    return b;
}
ll katryoshka(ll eye, ll mouth, ll body)
{
    ll ans{0};
    if (body == 0 || eye == 0)
        return 0;
    if (mouth != 0)
    {
        auto m = min(min(eye, mouth), body);
        ans += m;
        eye -= m;
        body -= m;
    }
    // std::cout << "ans : " << ans << "\n";
    if (eye / 2 >= 2 && body != 0)
    {
        if (eye / 2 <= body)
            ans += eye / 2;
        else
            ans += body;
        // std::cout << "ans : " << ans << "\n";
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    long long eye, mouth, body;
    std::cin >> eye >> mouth >> body;
    std::cout << katryoshka(eye, mouth, body);
    exit(EXIT_SUCCESS);
}