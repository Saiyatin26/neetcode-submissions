class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int sum=0;
        int count=0;
        int left=0;
        int right=people.size()-1;
        while(left<right){
            sum=people[left]+people[right];
            if(sum>limit){
                count++;
                right--;
                sum=0;
            }
            else if(sum<=limit){
                count++;
                right--;
                left++;
                sum=0;
            }
        }
        if(right==left){
            count++;
        }
        return count;
    }
};