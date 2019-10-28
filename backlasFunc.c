#include "holberton.h"
#include <stdarg.h>

void funback(char *format, int i)
{
	int j =0;
	tpB relFormatFun[] = {
		{"n", printNewline			},
		{"f", printFormFeed			},
    	{"t", printTab				},
    	{"a", printAudibleAlert		},
		{"b", printBS				},
		{"r", printCR				},
    	{"v", printVT				}
    };

	while (i < 7)
	{
		if (relFormatFun[j].c == format[i + 1])
		{
			relFormatFun[i].f();
		}
	}
}
