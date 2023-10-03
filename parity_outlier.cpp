int FindOutlier(std::vector<int> arr)
{
    
    int even_count = 0;
    int odd_count = 0;
    int last_even, last_odd;
  
    for(unsigned long i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0) {
            even_count++;
            last_even = arr[i];
        }
        else {
            odd_count++;
            last_odd = arr[i];
        }
    }
    return (odd_count > even_count) ? last_even : last_odd;
}
