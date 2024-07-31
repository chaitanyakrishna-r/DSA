void stringCompression(string& s){
//     int i=0;
//     int ansIndex =0;
//     int n =s.length();


//     while(i<n){
//         int j = i+1;
//         while(j<n && s[i] == s[j]){
//             j++;
//         }

//     // storing current character;
//         s[ansIndex++] = s[i];
//         int count = j - i;
//         if(count > 1){
//             string cnt = to_string(count);
//             for(char ch : cnt){
//                 s[ansIndex++] = ch;
//             }
//         }
//         i=j;
        
//     }
//     cout<<ansIndex<<"index"<<endl;
// }