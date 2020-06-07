class BrowserHistory {
    int n,m;
    string a[5005];
public:
    BrowserHistory(string homepage) {
        n=m=0;
        a[0]=homepage;
    }
    
    void visit(string url) {
        a[n=m=m+1]=url;
    }
    
    string back(int steps) {
        steps=min(steps,m);
        m-=steps;
        return a[m];
    }
    
    string forward(int steps) {
        steps=min(steps,n-m);
        m+=steps;
        return a[m];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
 
 //LeetCode Link: https://leetcode.com/problems/design-browser-history/
