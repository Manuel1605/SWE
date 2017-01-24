
#include "SWE_ImpalaJITScenario.hh"
#include <stdio.h>
#include <stdlib.h>
#include <impalajit.hh>

impalajit::Compiler compiler;
dasm_gen_func function;

SWE_ImpalaJITScenario::SWE_ImpalaJITScenario(){
    function = compiler.compile();
}

float SWE_ImpalaJITScenario::getWaterHeight(float x, float y){
	return function(x, y);
}
