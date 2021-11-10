![](https://mikata.shingaku.mynavi.jp/img/umi/6221/151228114825/1.jpg)
# FORMATTING FORMAT --- 💥💥💥_printf💥💥💥


------------


The _printf() function that you will see in this repository is mainly based on the original printf(), which has the objective of printing a message on the screen, which is composed of a special format that serves to include different types of strings in the resultant of the same.

------------


-----------

   ## What does _printf(); do?

------------

It does the job of printing a string in which the characters are printed as they are in the string output, but when it encounters a %* (which indicates that it is a formatting mark)*, this special character "%" denotes which method should be used or implemented to convert the parameter used along with the formatting mark and replace it with the parameters that correspond to its position in the function.

Example of `_printf();`

        int main()
		{
			int len;
			
			_printf("Length:[%d, %i]\n", len, len);
		}

------------



------------

## How to format with _printf()?

------------


Depending on the modulator or the mark of the format our function compares the parameters entered in it with a previously predefined structure in which if it finds a match it sends the data to the personal function of that modulator so that it prints the corresponding %d, %i, %c or %s;

|  Modulators | Return ();  |
| ------------ | ------------ |
|  %d  | Signed decimal conversion of an integer  |
|  $i |  Signed decimal conversion of an integer |
|  %c | Prints the corresponding ASCII character  |
|  %s | Character string (ending in '\0')  |
|  %% |  Prints the % symbol |

------------


------------



# Examples of use:

------------


To access the examples we will show how to use the repository locally.

- To clone the repository use this link: https://github.com/AvendanoisPepe/printf.git
- To compile the code in your console (local Terminal) or in your sandbox, access the local location of the repository and use this command: **gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf**
- Type in your console** ./_printf**, it will display all the required cases in the main.c since you will be executing the code.

------------
### File main.c:
    #include <limits.h>
    #include <stdio.h>
    #include "main.h"
    
    /**
     * main - Entry point
     *
     * Return: Always 0
     */
    int main(void)
    {
    	int len;
    	int len2;
    	unsigned int ui;
    	void *addr;
    
    	len = _printf("Let's try to printf a simple sentence.\n");
    	len2 = printf("Let's try to printf a simple sentence.\n");
    	_printf("Length:[%d, %i]\n", len, len);
    	printf("Length:[%d, %i]\n", len2, len2);
    	_printf("Negative:[%d]\n", -762534);
    	printf("Negative:[%d]\n", -762534);
    	_printf("Character:[%c]\n", 'H');
    	printf("Character:[%c]\n", 'H');
    	_printf("String:[%s]\n", "I am a string !");
    	printf("String:[%s]\n", "I am a string !");
    	len = _printf("Percent:[%%]\n");
    	len2 = printf("Percent:[%%]\n");
    	_printf("Len:[%d]\n", len);
    	printf("Len:[%d]\n", len2);
    
    	return (0);
    }
    

------------


### Execution of the main.c file:

```c
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
```

------------


------------

## Files *.c



A brief description of our .c files

| File name.  | Description |
| ------------ | ------------ |
| _prinf.c  |  We check the "%" to see if they are followed, alone and send them to their respective function and if not simply save the character that is of such a position.  |
|  _putchar.c | Tiene la función **_putchar() **que imprime un carácter.  |
| get_op_func.c  |  It contains the function **(* get_op_func) **which selects the correct operation to perform based on the formatting flags. |
|  main.c |  Contains the test cases (comparison between our **_printf()** function with the** printf()** function of the library). |
| print_num.c  | It contains the function **printfd()** with which we verify if it prints positive or negative numbers.   |
| printf_caracters.c  | It contains the printfc() function which allows you to print an output character. Contains the printfs() function which prints an output string.  |


------------


------------

## Flowchart:

First, a flowchart was generated which contains data input, cycles, functions, structures and with which the logic was based to generate the source code of our function.

![](https://scontent.fbog4-2.fna.fbcdn.net/v/t1.6435-9/254972652_3035195720078471_8349072310618740594_n.jpg?_nc_cat=109&_nc_rgb565=1&ccb=1-5&_nc_sid=730e14&_nc_ohc=w-mJxWGRU_YAX_ZoUwZ&_nc_ht=scontent.fbog4-2.fna&oh=81ee698ddbb0f77f2739768c3d7891dc&oe=61AFE128)

## Authors: Carlos Andrés Pardo Rodríguez,

![](https://scontent.fbog4-2.fna.fbcdn.net/v/t1.6435-9/245379421_10224272841063912_624750551163182786_n.jpg?_nc_cat=102&ccb=1-5&_nc_sid=09cbfe&_nc_ohc=ihxPoG9IdwwAX_saD7Z&_nc_ht=scontent.fbog4-2.fna&oh=1f41a32f9ef787fbe6b419f725f8c9c6&oe=61AFFD50)

- Git: https://github.com/ANDRES3021
- Twitter: https://twitter.com/CarlosA54648157

## Authors: Juan Sebastian Avendaño Gonzalez.

![](https://scontent.fbog4-2.fna.fbcdn.net/v/t1.6435-9/218604429_2952928454971865_3872301864962653538_n.jpg?_nc_cat=102&ccb=1-5&_nc_sid=09cbfe&_nc_ohc=UgEJIjOa-t4AX-vxyRz&_nc_ht=scontent.fbog4-2.fna&oh=2d85437b6360007352107c47030c0c25&oe=61B00845)

- Git: https://github.com/AvendanoisPepe
- Twitter: https://twitter.com/Sebastian_Aven

🥲🥲🥲🥲🥲🥲🥲🥲🥲🥲🥲🥲🥲![](https://raw.githubusercontent.com/jbocane6/logos/main/holberton-logo.png)🥲🥲🥲🥲🥲🥲🥲🥲🥲🥲🥲🥲🥲
