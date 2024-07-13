void printPat(int n) {
    
    for(int i = n; i >= 1; i--){ //its for horizontal
        for(int j = n; j >= 1; j--){ //its for vertical
            for(int k = 1; k <= i; k++){//for number reduction
            cout<<j<<" ";
            }
        }
        cout<<"$";
    }
}
