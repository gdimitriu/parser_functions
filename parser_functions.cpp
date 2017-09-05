// parser_functions.cpp : Defines the entry point for the console application.
//
/*
	Copyright 2005 Gabriel Dimitriu

	This file is part of parser functions.
	This file contains the implementation of main entry.
	
    Parser functions is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Parser functions is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Parser functions; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  
*/

#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include "parser_func.h"
using namespace std;


int main(int argc, char* argv[])
{
	char *funct;
	double rez;
	Cparser_func *parser;
	Cparser_func_memory memory;
	parser=new Cparser_func;
	parser->assign_memory(&memory);
	funct=(char *)calloc(100,sizeof(char));
	do
	{
		gets_s(funct, 100 * sizeof(char));
		if(!funct) break;
		parser->set_function(funct);
		parser->eval_func(&rez);
		cout<<rez<<endl;
		memory.display();
	} while(*funct);
	return 0;
}
