class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        ::std::vector<int> ret;
        // key:num;value:index
        ::std::map<int,int> map_tmp;
        for (int idx = 0;idx < nums.size();++idx)
        {
            const int first_num = nums.at(idx);
            auto it = map_tmp.find(target - first_num);
            if (it == map_tmp.end())
            {
                map_tmp.insert(::std::make_pair(first_num, idx));
            } else {
                ret.push_back(idx);
                ret.push_back(it->second);
                break;
            }
        }
        return ret;
    }
}
