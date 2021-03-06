#include "core/particles/ParticleVisual.h"

//------------------------------------------------------------------------------
VisualParticle::VisualParticle():
    Particle()
{
    m_ParticleType = PT_VISUAL;
    m_Emittable = true; // Default is false, but visual particles are always emitted.
}

//------------------------------------------------------------------------------
void
VisualParticle::InitForExpiration()
{
    Particle::InitForExpiration();

    if (additional_data != nullptr)
    {
        additional_data->SetVisible(false);
    }
}

//------------------------------------------------------------------------------
