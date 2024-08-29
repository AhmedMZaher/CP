class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        UF uf(2e4 + 1);
        set<int> s;
        for(auto v : stones){
            uf.join(v[0], v[1] + 10000 + 1);
            s.insert(v[0]);
            s.insert(v[1] + 10000 + 1);
        }
        int cnt = 0;
        for(auto x : s){
            cnt += (uf.find(x) == x);
        }
        return (int)stones.size() - cnt;
    }
private:
    struct UF {
        vector<int> e;
        UF(int n) : e(n, -1) {}
        bool sameSet(int a, int b) { return find(a) == find(b); }
        int size(int x) { return -e[find(x)]; }
        int find(int x) { return e[x] < 0 ? x : e[x] = find(e[x]); }
        bool join(int a, int b) {
            a = find(a), b = find(b);
            if (a == b) return false;
            if (e[a] > e[b]) swap(a, b);
            e[a] += e[b]; e[b] = a;
            return true;
        }
    };
};