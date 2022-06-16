#include <iostream>
#include <stdlib.h>

using namespace std;

//Define variables
    float celsius , kelvin, fahrenheit, rankine, delisle, newton, reaumur, romer;
    float input, sum = 0, exit_num = 0.01;
    float temp_array[999] = {};
    int i, array_size = 0;
    char exit_char = 'Y';


void convert_temperatures(int sum)
{
    celsius = sum;
    kelvin = sum+273.15;
    fahrenheit = (sum*1.8)+32;
    rankine = (sum+273.15)*1.8;
    delisle = (100-sum)*1.5;
    newton = sum*0.33;
    reaumur = sum*0.8;
    romer = (sum*0.525)+7.5;

    //Celsius:
    cout<<"Average temperature in: \nCelsius: "<<celsius<<" \370"<<"C";
    //kelvin:
    cout<<"\nKelvin: "<<kelvin<<" K";
    //Fahrenheit:
    cout<<"\nFahrenheit: "<<fahrenheit<<" \370"<<"F";
    //Rankine:
    cout<<"\nRankine: "<<rankine<<" \370"<<"R";
    //Delisle:
    cout<<"\nDelisle: "<<delisle<<" \370"<<"D";
    //Newton:
    cout<<"\nNewton: "<<newton<<" \370"<<"N";
    //Reamur:
    cout<<"\nReaumur: "<<reaumur<<" \370"<<"Re";
    //Romer:
    cout<<"\nRomer: "<<romer<<" \370"<<"Ro"<<endl;
}



int main()
{
    cout<<"***AVERAGE TEMPERATURE COVERTER***"<<endl;
    while(exit_char != 'N')
    {
        cout<<"Insert 0.01 to stop input."<<endl;
        //collect temperatures from user
        for(i=0; i<999; i++)
        {
            cout<<"Insert temp in C: ";
            cin>>input;

            //if user input is exit_num (000) - stop collecting temperatures
            if(input == exit_num)
            {
                break; //exit loop
            }
            else
            {
                temp_array[i] = input;
                array_size += 1;
            }
        }

        cout<<"\n";
        //calculate and convert temperatures:

        //Sum of temperatures:
        for(i=0; i<array_size; i++)
        {
            sum += temp_array[i];
        }

        sum = sum/array_size;
        convert_temperatures(sum);

        cout<<"\n\nDo you want to convert again? (y/n): ";
        cin>>exit_char;
        exit_char = toupper(exit_char);
        system("CLS");

    }
    cout<<"Have a nice day!"<<endl;
    cout<<"Press enter to exit...";
    cin.get();

    return 0;
}
