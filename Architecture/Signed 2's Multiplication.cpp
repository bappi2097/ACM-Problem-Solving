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

///This function will print row wise full calculation
void PRINT(bitset<bit_size + bit_size + 1> temp, bitset<bit_size> M, bitset<1> Q1)
{
    for(int i = 0; i < 4; i++)
        cout<<temp[8-i];
    cout<<' ';

    for(int i = 0; i < 4; i++)
        cout<<temp[4-i];
    cout<<' '<<Q1<<' '<<M;
}

bitset<bit_size> TwoScomplement(bitset<bit_size> num)
{
    cout<<~num<<endl;
    bitset<bit_size> num1(1);
    num=~num;
    num1 = SUM(num, num1);
    cout<<num1<<endl;
    return num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("Signed 2's Multiplication-input.cpp","r",stdin);
    //freopen("Signed 2's Multiplication-output.cpp","w",stdout);
    int int_M, int_Q;
    cout<<"--------Signed 2's Multiplication--------"<<endl<<endl<<endl;
    cout<<"Enter Multiplicand(Signed Integer): "<<endl;
    cin>>int_M;
    cout<<"Enter Multiplier(Signed Integer): "<<endl;
    cin>>int_Q;

    bitset<bit_size> M(int_M), Q(int_Q), A(0);
    bitset<1> Q1(0);
    bitset<bit_size + bit_size + 1> temp;

    /*if(int_M < 0)
    {
        int_M *= -1;
        M = int_M;
        M = TwoScomplement(M);
    }
    if(int_Q < 0)
    {
        int_Q *= -1;
        Q = int_Q;
        Q = TwoScomplement(Q);
    }
*/
    cout<<"A    Q    Q1   M  Operation "<<endl;
    cout<<A<<" "<<Q<<" "<<Q1<<"  "<<M<<endl;

    for(int i=0;i<4;i++)
    {
        cout<<"-------------------------"<<endl;
        if(Q[0] && !Q1[0])
            A = SUB(A, M);   /// Bitwise Subtraction
        else if(!Q[0] && Q1[0])
            A = SUM(A, M);   /// Bitwise Sum

        for(int j=0;j<4;j++)temp[j+5] = A[j];
        for(int j=0;j<4;j++)temp[j+1] = Q[j];
        temp[0] = Q1[0];

        if(Q[0] && !Q1[0])
        {
            PRINT(temp, M, Q1);
            cout<<" A <- A - M"<<endl;
        }
        else if(!Q[0] && Q1[0])
        {
            PRINT(temp, M, Q1);
            cout<<" A <- A + M"<<endl;
        }

        temp = temp >> 1; /// Right Shift
        temp[8] = A[3];

        for(int j=0;j<4;j++)A[j] = temp[j+5];
        for(int j=0;j<4;j++)Q[j] = temp[j+1];
        Q1[0] = temp[0];
        PRINT(temp, M, Q1);
        cout<<" Shift"<<endl;
    }
    temp = temp >> 1;
    cout<<"-------------------------"<<endl;
    cout<<"Multiplication: "<<temp.to_ulong()<<endl;
    return 0;
}
