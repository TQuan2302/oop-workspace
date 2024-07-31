bool is_palindrome(int integers[], int length){
    if(length <=0){
        return false;
    }

    int is_pld = true;
    int left = 0, right = length-1;

    while(right >= left){
        if(integers[right] != integers[left]){
            is_pld = false; 
        }
        left++; 
        right--; 
    }
    return is_pld; 
}

int sum_array_elements(int integers[], int length){
    int sum = 0; 

    for(int i = 0; i<length; i++){
        sum = sum + integers[i]; 
    }

    return sum; 
}

int sum_if_palindrome(int integers[], int length){
    if(!is_palindrome(integers, length)){
        return -2; 
    }
    return sum_array_elements(integers, length); 
}
