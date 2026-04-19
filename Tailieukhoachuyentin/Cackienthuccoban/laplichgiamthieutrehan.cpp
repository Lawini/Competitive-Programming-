#include <bits/stdc++.h>
using namespace std;

struct Job {
    int id, p, d;
};

bool cmp(Job a, Job b) {
    return a.d < b.d;
}

int main() {
    int n;
    cin >> n;

    vector<Job> a(n);
    for (int i = 0; i < n; i++) cin >> a[i].p;
    for (int i = 0; i < n; i++) cin >> a[i].d;
    for (int i = 0; i < n; i++) a[i].id = i + 1;

    sort(a.begin(), a.end(), cmp);

    priority_queue<pair<int,int>> pq;
    int t = 0;

    vector<bool> chosen(n + 1, false);

    for (auto &job : a) {
        t += job.p;
        pq.push({job.p, job.id});
        chosen[job.id] = true;

        if (t > job.d) {
            auto top = pq.top(); pq.pop();
            t -= top.first;
            chosen[top.second] = false;
        }
    }

    vector<int> early, late;

    for (auto &job : a) {
        if (chosen[job.id]) early.push_back(job.id);
        else late.push_back(job.id);
    }

    // thứ tự cuối: làm job đúng hạn trước
    for (int x : early) cout << x << " ";
    for (int x : late) cout << x << " ";
}
