
#include "SWE_ImpalaJITScenario.hh"
#include <stdio.h>
#include <stdlib.h>
#include <impalajit.hh>

impalajit::Compiler compiler("../impala/impala.conf");
dasm_gen_func i_getWaterHeight;
dasm_gen_func i_getBathymetry;
dasm_gen_func i_endSimulation;
dasm_gen_func i_getBoundaryType;
dasm_gen_func i_getBoundaryPos;

SWE_ImpalaJITScenario::SWE_ImpalaJITScenario(){
    compiler.compile();
    i_getWaterHeight = compiler.getFunction("getWaterHeight");
    i_getBathymetry = compiler.getFunction("getBathymetry");
    i_endSimulation = compiler.getFunction("endSimulation");
    i_getBoundaryType = compiler.getFunction("getBoundaryType");
    i_getBoundaryPos = compiler.getFunction("getBoundaryPos");
}

float SWE_ImpalaJITScenario::getWaterHeight(float x, float y){
	return i_getWaterHeight(x, y);
}

float SWE_ImpalaJITScenario::getBathymetry(float x, float y) {
    i_getBathymetry(x, y);
}

float SWE_ImpalaJITScenario::endSimulation() {
    return i_endSimulation();
}

BoundaryType SWE_ImpalaJITScenario::getBoundaryType(BoundaryEdge edge) {
    return static_cast<BoundaryType>((int)i_getBoundaryType((float)edge));
}

float SWE_ImpalaJITScenario::getBoundaryPos(BoundaryEdge i_edge) {
return i_getBoundaryPos((float) i_edge);
}