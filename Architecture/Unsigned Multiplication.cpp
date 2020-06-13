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

/// This Function will return Carry bit from two bitset summation
bool CARRY(bitset<bit_size> a, bitset<bit_size> b)
{
    bitset<bit_size+1> num1(a.to_ulong()), num2(b.to_ulong()), carry(0);
    while (num2 != 0)
    {
        carry = num1 & num2;
        num1 = num1 ^ num2;
        num2 = carry << 1;
    }
   return num1[4];
}

///This function will print row wise full calculation
void PRINT(bitset<bit_size + bit_size + 1> temp, bitset<bit_size> M)
{
    cout<<temp[8]<<' ';
    for(int i = 0; i < 4; i++)
        cout<<temp[7-i];
    cout<<' ';

    for(int i = 0; i < 4; i++)
        cout<<temp[3-i];

    cout<<' '<<M;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("Unsigned Multiplication-input.cpp","r",stdin);
    //freopen("Unsigned Multiplication-output.cpp","w",stdout);
    int int_M, int_Q;
    cout<<"--------Unsigned Multiplication--------"<<endl<<endl<<endl;
    cout<<"Enter Multiplicand(Unsigned Integer): "<<endl;
    cin>>int_M;
    cout<<"Enter Multiplier(Unsigned Integer): "<<endl;
    cin>>int_Q;
    bitset<bit_size> M(int_M), Q(int_Q), A(0);
    bitset<1> C(0);
    bitset<bit_size + bit_size + 1> temp;
    cout<<"Action   C   A    Q    M  "<<endl;
    cout<<"         "<<C<<" "<<A<<" "<<Q<<" "<<M<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<"-------------------------"<<endl;
        if(Q[0])
        {
            C = CARRY(A, M); /// Carry Bit
            A = SUM(A, M);   /// Bitwise Sum
        }
        temp[8] = C[0];
        for(int j=0;j<4;j++)temp[j+4] = A[j];
        for(int j=0;j<4;j++)temp[j] = Q[j];

        if(Q[0])
        {
            cout<<"A<-A+M : ";
            PRINT(temp, M);
            cout<<endl;
        }

        temp = temp >> 1; /// Right Shift
        temp[8] = C[0];
        cout<<"Shift  : ";
        PRINT(temp, M);
        cout<<endl;

        for(int j=0;j<4;j++)A[j] = temp[j+4];
        for(int j=0;j<4;j++)Q[j] = temp[j];
    }
    temp = temp << 1;
    temp = temp >> 1;
    cout<<"-------------------------"<<endl;
    cout<<"Multiplication: "<<temp.to_ulong()<<endl;
    return 0;
}
