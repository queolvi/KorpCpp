    #include<iostream>

    int main(){

    int arr[100];
    arr[0] = 0;

    for(int i = 1; i < 100; i++){
        arr[i] = i;
    }

    for(int i = 2; i < 100; i++){
        for(int j = 1; i < j; j++){
            if(arr[i] < arr[i - j] < arr[j]){
                arr[i] = arr[i] + arr[i-j];
            }
        }
    }
    for(int i = 1; i < 100; i++){
    std::cout << " " << arr[i] << " ";
    }   

        return 0;
    }