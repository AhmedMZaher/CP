class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> q;
        if (a > 0) q.push({a, 'a'});
        if (b > 0) q.push({b, 'b'});
        if (c > 0) q.push({c, 'c'});

        string s = "";
        while (!q.empty()) {
            auto p = q.top();
            q.pop();

            if (s.size() >= 2 && s.back() == p.second && s[s.size() - 2] == p.second){
                if (q.empty())break;
                // try another letter
                auto pp = q.top();
                q.pop();

                s += pp.second;
                if (pp.first > 1)
                    q.push({pp.first - 1, pp.second});

            }
            if (p.first >= 3) {
                s += p.second;
                s += p.second;
                q.push({p.first - 2, p.second});
            } else {
                s += p.second;
                if (p.first > 1)
                    q.push({p.first - 1, p.second});
            }
        }

        return s;
    }
};