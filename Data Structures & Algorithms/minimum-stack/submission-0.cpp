class MinStack {
public:
    int arr[100];
    int minarray[100];
    int topele;
    MinStack() {
         topele=-1;
    }
    
    void push(int val) {
        topele++;
        arr[topele]=val;
        if(topele==0){
            minarray[topele]=val;
        }
        else{
            minarray[topele]=min(val,minarray[topele-1]);
        }
    }
    void pop() {
        if(topele>=0){
            topele--;
        }   
        
    }
    int top() {
        if(topele>=0){
            return arr[topele];
        }
    }
    int getMin() {
       return minarray[topele];
    }
    
};
