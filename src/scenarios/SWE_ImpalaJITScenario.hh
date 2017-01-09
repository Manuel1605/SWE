//
// Created by manuel on 09.01.17.
//

#ifndef SWE_SWE_IMPALAJITSCENARIO_HH
#define SWE_SWE_IMPALAJITSCENARIO_HH

#include "SWE_Scenario.hh"

class SWE_ImpalaJITScenario : public SWE_Scenario {

public:

    SWE_ImpalaJITScenario();

    float getBathymetry(float x, float y) {
        return -250.f;
    };

    float getWaterHeight(float x, float y);

    virtual float endSimulation() { return (float) 15; };

    float getBoundaryPos(BoundaryEdge i_edge) {
        if ( i_edge == BND_LEFT )
            return (float)0;
        else if ( i_edge == BND_RIGHT)
            return (float)1000;
        else if ( i_edge == BND_BOTTOM )
            return (float)0;
        else
            return (float)1000;
    };

};

#endif //SWE_SWE_IMPALAJITSCENARIO_HH
