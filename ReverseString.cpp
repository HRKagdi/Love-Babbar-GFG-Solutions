//https://practice.geeksforgeeks.org/problems/reverse-a-string/1
//Reverse a String
string reverseWord(string str){
    int length=str.size();
    for(int i=0;i<length/2;i++){
        char ch=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=ch;
    }
    return str;
}
