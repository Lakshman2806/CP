/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval>ans;
    int k = intervals.size();
    int i = 0;
    while((i<k) && (newInterval.start > intervals[i].end))
    {
        ans.push_back(intervals[i]);
        i++;
    }
    Interval tobeadded;
    if(i == k)
    {
        ans.push_back(newInterval);
        return ans;
    }
    if(newInterval.end < intervals[i].start)
    {
        ans.push_back(newInterval);
        while(i<k)
        {
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
    tobeadded.start = min(intervals[i].start, newInterval.start);
    while((i<k) && (newInterval.end >= intervals[i].start))
    {
        i++;
    }
    i--;
    tobeadded.end = max(intervals[i].end, newInterval.end);
    ans.push_back(tobeadded);
    i++;
    while(i<k)
    {
        ans.push_back(intervals[i]);
        i++;
    }
    return ans;
}