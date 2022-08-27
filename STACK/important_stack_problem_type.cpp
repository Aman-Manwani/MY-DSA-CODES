//in this type there is a fixed method which is implemented in so many ques 
//idea behind the ques is that we have to find the max or min in the elemnets after current element
//to solve this below method is best and stated as stack algo
    int position=0;
    stack<pair<int,int>>s;
    while(position<len)
    {
        if(s.empty() || (!s.empty() && s.top().second>temperatures[position]))
        {
            s.push({position,temperatures[position]});
        }else
        {
            while(!s.empty() && s.top().second<temperatures[position])
            {
                v[s.top().first]=position-s.top().first;
                s.pop();
            }
            s.push({position,temperatures[position]});
        }
        position+=1;
    }
    // to get example of this type of question get refernce of leetcode question daily temperatures 