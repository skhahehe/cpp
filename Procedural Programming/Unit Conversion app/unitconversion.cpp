#include<iostream>
using namespace std;
int main()
{
int menu;
float temp1,temp2,temp3,l1,l2,l3,w1,w2,w3;

    cout<<"Choose what do you want to do? \n";
cout<<"1.Temperature \n";
cout<<"2. Length \n";
cout<<"3. Weight \n";
cin>>menu;

 
switch (menu)
{
case (1):

    cout<<"temperature :";
    cout<<"What do you want to change from :\n";
cout<<"1.Celsius \n";

cout<<"2. Fahrenheit \n";


cout<<"3. Kelvin \n";
cin>>temp1;


    {
        
    
    

    cout<<"What do you want to change to :\n";
cout<<"1.Celsius \n";
cout<<"2. Fahrenheit \n";


cout<<"3. Kelvin \n";
cin>>temp2;
cout<<"Enter Temperature : \n";
cin>>temp3;
if (temp1 == 1 && temp2 == 2)
{
    temp3=(temp3*(9.0/5.0)+32);
    cout<<temp3<<"F";
}
else if (temp1==1 && temp2 ==3)
{
    temp3=temp3+273.15;
    cout<<temp3<<"K";
}
else if (temp1==2 && temp2 ==1)
{
   temp3=((temp3-32)*(5.0/9.0));
    cout<<temp3<<"C";
}
else if (temp1==2 && temp2 ==3)
{
   temp3=((temp3-32)*(5.0/9.0)) + 273;
   cout<<temp3<<"K";
}
else if (temp1==3 && temp2 ==1)
{
   temp3=(temp3-273);
    cout<<temp3<<"C";
}
else if (temp1==3 && temp2 ==2)
{
   temp3=(1.8)*(temp3-273.15)+32;
   cout<<temp3<<"F";
}
else{cout<<"error";}

break;
}
case(2):
  cout<<"Length";
    cout<<"What do you want to change from :\n";
cout<<"1.Meters \n";

cout<<"2. Kilometers \n";


cout<<"3. Miles \n";
cout<<"4. inches \n";
cin>>l1;

    

    cout<<"What do you want to change to :\n";
cout<<"1.Meters \n";

cout<<"2. Kilometers \n";


cout<<"3. Miles \n";
cout<<"4. inches \n";
cin>>l2;
cout<<"Enter Length : \n";
cin>>l3;
if (l1 == 1 && l2 == 2)
{
    l3=(l3/1000);
    cout<<l3<<"Km";
}
else if (l1==1 && l2 ==3)
{
    l3=(l3/1000)*0.621371;
    cout<<l3<<"Miles";
}
else if (l1==1 && l2==4)
{
    l3=l3/0.0254;
    cout<<l3<<"Inch";
}

else if (l1==2 && l2 ==1)
{
   l3=l3*1000;
    cout<<l3<<"Meters";
}
else if (l1==2 && l2 ==3)
{
   l3=l3*0.621371;
   cout<<l3<<"miles";
}
else if (l1==2 && l2 ==4)
{
   l3=l3*39370;
   cout<<l3<<"inch";
}
if (l1 == 3 && l2 == 1)
{
    l3=(l3*1609.3);
    cout<<l3<<"Meters";
}
else if (l1==3 && l2 ==2)
{
    l3=(l3)/0.621371;
    cout<<l3<<"Kilo meters";
}
else if (l1==3 && l2==4)
{
    l3=l3*63360;
    cout<<l3<<"Inch";
}

else if (l1==4 && l2 ==1)
{
   l3=l3*0.0254;
    cout<<l3<<"Meters";
}
else if (l1==4 && l2 ==3)
{
   l3=l3*0.00001578;
   cout<<l3<<"miles";
}
else if (l1==4 && l2 ==2)
{
   l3=l3*0.0000254;
   cout<<l3<<"Kilo meter";
}
break;
case(3):
cout<<"You want to convert from:  \n";
cout<<"1.Grams";
cout<<"2.Kilograms";
cout<<"3.Pounds";
cout<<"4.Ounces";
cin>>w1;
cout<<"You want to convert to :  \n";
cout<<"1.Grams";
cout<<"2.Kilograms";
cout<<"3.Pounds";
cout<<"4.Ounces";
cin>>w2;
cout<<"\n Enter Weight";
cin>>w3;
if (w1==1 && w2==2)
{
    w3=w3/1000;
    cout<<w3<<"kg";
}
else if (w1==2 && w2==1)
{
    w3=w3*1000;
    cout<<w3<<"g";
}
else if(w1==1 && w2== 3)
{
    w3=(w3/1000)*2.20462;
    cout<<w3<<"lb";
}
else if (w1==1 && w2 == 4)
{
    w3=w3/28.3495;
    cout<<w3<<"oz";
}
else if (w1==2 && w2==3)
{
    w3=w3*2.20462;
    cout<<w3<<"lb";}
else if (w1==2 && w2==4)
    {w3=w3*35.27;
        cout<<w3<<"oz";
    }

else if (w1==3 && w2 ==1)
    {
        w3=w3*453.6;
        cout<<w3<<"g";
    }
else if (w1==3 && w2==2)
{
    w3=w3/2.20462;
    cout<<w3<<"kg";
}
else if (w1==3 && w2==4)
{
    w3=w3*16;
    cout<<w3<<"oz";

}
else if (w1==4 && w2==1)
{
 w3=w3*28.35;
 cout<<w3<<"g";
}
else if (w1==4 && w2== 2)
{
w3=w3*0.02835;
    cout<<w3<<"kg";
}
else if (w1==4 && w2==3)
{
 w3=w3*0.0625;
    cout<<w3<<"oz";
}

  break;  




default:
    break;
}
}



