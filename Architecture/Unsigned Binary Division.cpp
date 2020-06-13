#include<bits/stdc++.h>
using namespace std;

#define bit_size 4

/// This Function will return SUM value of two bitset
bitset<bit_size> SUM(bitset<bit_size> num1, bitset<bit_size> num2)
{
    bitset<bit_size> carry;
    while (num2 != 0)
    {
        carry = num1 & num2;
        num1 = num1 ^ num2;
        num2 = carry << 1;
    }
   return num1;
}

/// This Function will return SUBTRACT value of two bitset
bitset<bit_size> SUB(bitset<bit_size> num1, bitset<bit_size> num2)
{
    bitset<bit_size> borrow(0);
    while (num2 != 0)
	{
		borrow = (~num1) & num2;
		num1 = num1 ^ num2;
		num2 = borrow << 1;
	}
   return num1;
}

void PRINT(bitset<bit_size + bit_size> temp, bitset<bit_size> M)
{
    for(int i = 0; i < 4; i++)
        cout<<temp[7-i];
    cout<<' ';

    for(int i = 0; i < 4; i++)
        cout<<temp[3-i];
    cout<<' '<<M<<"  ";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("Unsigned Binary Division-input.cpp","r",stdin);
    //freopen("Unsigned Binary Division-output.cpp","w",stdout);
    unsigned int_M, int_Q;
    cout<<"--------Unsigned Binary Division--------"<<endl<<endl<<endl;
    cout<<"Enter Divisor(Unsigned Integer): "<<endl;
    cin>>int_Q;
    cout<<"Enter Dividend(Unsigned Integer): "<<endl;
    cin>>int_M;
    bitset<bit_size> M(int_M), Q(int_Q), A(0);
    bool C=0;
    bitset<bit_size + bit_size> temp;
    cout<<endl<<"  A    Q    M   Action"<<endl;
    cout<<A<<" "<<Q<<" "<<M<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<"-------------------------"<<endl;

        for(int j=0;j<4;j++)temp[j+4] = A[j];
        for(int j=0;j<4;j++)temp[j] = Q[j];
        temp = temp << 1;
        PRINT(temp,M);
        cout<<"Shift"<<endl;

        for(int j=0;j<4;j++)A[j] = temp[j+4];
        for(int j=0;j<4;j++)Q[j] = temp[j];

        if(A.to_ulong() < M.to_ulong())C = 1;
        else C = 0;

        A = SUB(A, M);
        cout<< A <<"            Subtract"<<endl;

        if(C)
        {
            Q[0] = 0;
            A = SUM(A, M);
            for(int j=0;j<4;j++)temp[j+4] = A[j];
            for(int j=0;j<4;j++)temp[j] = Q[j];
            PRINT(temp,M);
            cout<<"Restore, Set Q[0] <- 0"<<endl;
        }
        else
        {
            Q[0] = 1;
            for(int j=0;j<4;j++)temp[j+4] = A[j];
            for(int j=0;j<4;j++)temp[j] = Q[j];
            PRINT(temp,M);
            cout<<"Subtract, Set Q[0] <- 1"<<endl;
        }
    }
    cout<<"-------------------------"<<endl;
    cout<<"Remainder : "<<A.to_ulong()<<endl;
    cout<<"Quotient : "<<Q.to_ulong()<<endl;
    return 0;
}
