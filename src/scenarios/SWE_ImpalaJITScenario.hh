//
// Created by manuel on 09.01.17.
//

#ifndef SWE_SWE_IMPALAJITSCENARIO_HH
#define SWE_SWE_IMPALAJITSCENARIO_HH

#include "SWE_Scenario.hh"

class SWE_ImpalaJITScenario : public SWE_Scenario {

public:

    SWE_ImpalaJITScenario();

    float getBathymetry(float x, float y);

    float getWaterHeight(float x, float y);

    float endSimulation();

    float getBoundaryPos(BoundaryEdge i_edge);

    BoundaryType getBoundaryType(BoundaryEdge i_edge);

};

#endif //SWE_SWE_IMPALAJITSCENARIO_HH
