#include<bits/stdc++.h>
using namespace std;

int Print1(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=n; j++) {
      cout << "*" << " ";
    }
    cout << endl;
  }
}

int Print2(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

int Print3(int n) {
  for(int i=1; i<=n; i++) {
    int num = 1;
    for(int j=1; j<=i; j++) {
      cout << num;
      num++;
    }
    cout << endl;
  }
}

int Print4(int n) {
  int num = 1;
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cout << num;
    }
    num++;
    cout << endl;
  }
}

int Print5(int n) {
  for(int i=n; i>0; i--) {
    for(int j=i; j>0; j--) {
      cout << "*";
    } cout << endl;
  }
}

int Print6(int n) {
  for(int i=n; i>0; i--) {
    int num = 1;
    for(int j=i; j>0; j--) {
      cout << num;
      num++;
    }
     cout << endl;
  }
}

int Print7(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=n*2-1; j++) {
      if(j>=n-i+1 && j<=n+i-1) {
        cout << "*";
      }
      else {
        cout << " ";
      }
    }
    cout << endl;
  }
}

int Print8(int n) {
  for(int i=n; i>0; i--) {
    for(int j=2*n-1; j>0; j--) {
      if(j>=n-i+1 && j<=n+i-1){
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}

//for printing 9th pattern run Print7() & Print8() together

int Print10(int n) {
  for(int i=1; i<=2*n-1; i++) {
    int stars = i;
    if(i>n) {
      stars = 2*n-i;
    }
    for(int j=1; j<=stars; j++) {
      cout << "*" ;
    }
    cout << endl;
  }
}

int Print11(int n) {
  int start = 1;
  for(int i=1; i<=n; i++) {
    if(i%2 == 0) start = 0;
    else start = 1;
    for(int j=1; j<=i; j++) {
      cout << start;
      start = 1-start;
    }
    cout << endl;
  }
}

int Print12(int n) {
  int space = 2*(n-1);
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cout << j;
    }
    for(int j=1; j<=space; j++) {
      cout << " ";
    }
    for(int j=i; j>=1; j--) {
      cout << j;
    }
    cout << endl;
    space -= 2;
  }
}

int Print13(int n) {
  int num = 1;
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
}

int Print14(int n) {
  for(int i=1; i<=n; i++) {
    char ch = 'A';
    for(int j=1; j<=i; j++) {
      cout << ch;
      ch++;
    }
    cout << endl;
  }
}

int Print15(int n) {
  for(int i=n; i>0; i--) {
    char ch = 'A';
    for(int j=i; j>0; j--) {
      cout << ch;
      ch++;
    }
    cout << endl;
  }
}

int Print16(int n) {
  char ch = 'A';
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cout << ch;
    }
      ch++;
    cout << endl;
  }
}

int Print17(int n) {
  for(int i=1; i<=n; i++) {
    char ch = 'A';
    for(int j=1; j<=n*2-1; j++) {
      if(j>=n-i+1 && j<=n+i-1) {
        cout << ch;
        if(j < n)
        ch++;
        else 
          ch--;
      }
      else {
        cout << " ";
      }
    }
    cout << endl;
  }
}

int Print18(int n) {
  for(int i=1; i<=n; i++) {
  char ch = 'E'-i+1;
    for(int j=1; j<=i; j++) {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
}

int Print21(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=n; j++) {
      if(i==1 || i==n || j==1 || j==n) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}

int main()
{
  // int t;
  // cin >> t;
  // for(int i=0; i<t; i++) {
  int n;
  cin >> n;
  // Print7(n);
  Print17(n);
  // }
  return 0;
}