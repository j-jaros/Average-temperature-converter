# Average Temperature Converter

ATC is used to calculate the average temperature and then convert it to other units

## Available units
Current version of ATC can convert from Celsius to:

[Kelvin (K)](https://en.wikipedia.org/wiki/Kelvin)
\
[Fahrenheit (°F)](https://en.wikipedia.org/wiki/Fahrenheit)
\
[Rankine (°R)](https://en.wikipedia.org/wiki/Rankine_scale)
\
[Delisle (°D)](https://en.wikipedia.org/wiki/Delisle_scale)
\
[Newton (°N)](https://en.wikipedia.org/wiki/Newton_scale)
\
[Réaumur (°Ré)](https://en.wikipedia.org/wiki/R%C3%A9aumur_scale)
\
[Romer (°Rø)](https://en.wikipedia.org/wiki/R%C3%B8mer_scale)


## Usage

1. Insert temperature (can be float)
```
Insert temp in C: 20.22
Insert temp in C: 12.34
Insert temp in C: 4.20
```
Warning! If you enter char or string, the program will enter an infinite loop.
\
\
2. When you finish adding temperatures, just type 0.01
```
Insert temp in C: 0.01
```
This will stop the loop, calculate the average and convert to other units.

3. Read the results
```
Average temperature in:
Celsius: 12 °C
Kelvin: 285.15 K
Fahrenheit: 53.6 °F
Rankine: 513.27 °R
Delisle: 132 °D
Newton: 3.96 °N
Reaumur: 9.6 °Re
Romer: 13.8 °Ro
```
4. Exit or start again
```
Do you want to convert again? (y/n):
```
Insert only y/Y or n/N. Other chars will cause infinite loop.
## Dislaimer
It is not a scientific calculator.
\
I do not recommend using it for professional use and I am not responsible for errors / damages
resulting from incorrect calculations.  
ATC was created for fun and by the will to learn programming.
## License
ATC is licensed
[MIT](https://github.com/j-jaros/average_temp_converter/blob/main/LICENSE)
