class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
    int c[]={0,0};
    for(int i:students){
        c[i]++;
        
    }
    for(int s :sandwiches){
    if(c[s]==0){
        break;
    }
    c[s]--;}
    return c[0]+c[1];
   }
};
