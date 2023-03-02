//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Twitter {
  public:
    // Initialize your data structure here
    map<int,priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>> user;
    map<int,set<int>> connect;
    int time=0;
    Twitter() {}

    // Compose a new tweet
    void postTweet(int userId, int tweetId) {
        user[userId].push({time,tweetId});// stores as (time,tweet) pair to min heap
        time++;
        if(user[userId].size()>10)// keeping max 10 recents post of a user
            user[userId].pop();
    }
    
    void fun(priority_queue<pair<int,int>>& pq,int id)//add elements from min heap(id) to max heap(pq)
    {
        vector<vector<int>> temp;
        while(!user[id].empty())
        {
            int a=user[id].top().first;
            int b=user[id].top().second;
            user[id].pop();
            pq.push({a,b});
            temp.push_back({a,b});
        }
        for(auto x:temp)
        {
            user[id].push({x[0],x[1]});
        }
    }

    // Retrieve the 10 most recent tweet ids as mentioned in question
    vector<int> getNewsFeed(int userId) {
        vector<int> v;
        priority_queue<pair<int,int>> pq;
        fun(pq,userId);// user itself
        for(auto x:connect[userId])// posts by followers
        {
            fun(pq,x);
        }
        int i=0;
        while(!pq.empty())
        {
            v.push_back(pq.top().second);
            pq.pop();
            i++;
            if(i==10)
                break;
        }
        return v;
    }

    // Follower follows a followee. If the operation is invalid, it should be a
    // no-op.
    void follow(int followerId, int followeeId) {
        connect[followerId].insert(followeeId);
    }

    // Follower unfollows a followee. If the operation is invalid, it should be
    // a no-op.
    void unfollow(int followerId, int followeeId) {
        connect[followerId].erase(followeeId);
    }
};

//{ Driver Code Starts.

int main() {
    Twitter obj;

    int total_queries;
    cin >> total_queries;
    while (total_queries--) {
        int query;
        cin >> query;

        // if query = 1, postTweet()
        // if query = 2, getNewsFeed()
        // if query = 3, follow()
        // if query = 4, unfollow()

        if (query == 1) {
            int userId, tweetId;
            cin >> userId >> tweetId;
            obj.postTweet(userId, tweetId);
        } else if (query == 2) {
            int userId;
            cin >> userId;
            vector<int> vec = obj.getNewsFeed(userId);
            for (int a : vec) cout << a << " ";
            cout << endl;
        } else if (query == 3) {
            int follower, followee;
            cin >> follower >> followee;
            obj.follow(follower, followee);
        } else {
            int follower, followee;
            cin >> follower >> followee;
            obj.unfollow(follower, followee);
        }
    }
    return 0;
}
// } Driver Code Ends