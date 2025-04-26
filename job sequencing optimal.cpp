class Solution {
public:
    struct Job {
        int deadline;
        int profit;
    };

    static bool compare(Job a, Job b) {
        return a.profit > b.profit;
    }

    vector<int> parent;

    int find(int s) {
        if (parent[s] == s) return s;
        return parent[s] = find(parent[s]);
    }

    void merge(int u, int v) {
        parent[u] = v;
    }

    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int n = deadline.size();
        vector<Job> jobs(n);
        for (int i = 0; i < n; ++i) {
            jobs[i] = {deadline[i], profit[i]};
        }

        sort(jobs.begin(), jobs.end(), compare);

        int maxDeadline = 0;
        for (int i = 0; i < n; ++i) {
            maxDeadline = max(maxDeadline, jobs[i].deadline);
        }

        // initialize parent array for DSU
        parent.resize(maxDeadline + 1);
        for (int i = 0; i <= maxDeadline; ++i) {
            parent[i] = i;
        }

        int countJobs = 0, maxProfit = 0;

        for (int i = 0; i < n; ++i) {
            int availableSlot = find(jobs[i].deadline);
            if (availableSlot > 0) {
                // Assign the job to this available slot
                merge(availableSlot, availableSlot - 1);
                countJobs++;
                maxProfit += jobs[i].profit;
            }
        }

        return {countJobs, maxProfit};
    }
};
