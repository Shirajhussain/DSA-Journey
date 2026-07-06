class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b) {
        double r1 = (double)a.first / a.second;
        double r2 = (double)b.first / b.second;

        return r1 > r2;
    }

    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {

        vector<pair<int, int>> items;

        for (int i = 0; i < val.size(); i++) {
            items.push_back({val[i], wt[i]});
        }

        sort(items.begin(), items.end(), cmp);

        double sum = 0;

        for (int i = 0; i < items.size(); i++) {

            if (items[i].second <= capacity) {
                sum += items[i].first;
                capacity -= items[i].second;
            }
            else {
                sum += ((double)items[i].first / items[i].second) * capacity;
                break;
            }
        }

        return sum;
    }
};
