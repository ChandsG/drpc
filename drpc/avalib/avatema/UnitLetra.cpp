//---------------------------------------------------------------------------

#pragma hdrstop

#include "UnitLetra.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

////////////////////////////////////////////////////////////////////////
// Name:       Letra::getTamanho()
// Purpose:    Implementation of Letra::getTamanho()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Letra::getTamanho(void)
{
   return Tamanho;
}

////////////////////////////////////////////////////////////////////////
// Name:       Letra::setTamanho(int newTamanho)
// Purpose:    Implementation of Letra::setTamanho()
// Parameters:
// - newTamanho
// Return:     void
////////////////////////////////////////////////////////////////////////

void Letra::setTamanho(int newTamanho)
{
   Tamanho = newTamanho;
}

////////////////////////////////////////////////////////////////////////
// Name:       Letra::getFamilia()
// Purpose:    Implementation of Letra::getFamilia()
// Return:     texto
////////////////////////////////////////////////////////////////////////

texto Letra::getFamilia(void)
{
   return Familia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Letra::setFamilia(texto newFamilia)
// Purpose:    Implementation of Letra::setFamilia()
// Parameters:
// - newFamilia
// Return:     void
////////////////////////////////////////////////////////////////////////

void Letra::setFamilia(texto newFamilia)
{
   Familia = newFamilia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Letra::Letra()
// Purpose:    Implementation of Letra::Letra()
// Return:
////////////////////////////////////////////////////////////////////////

Letra::Letra()
{
   Tamanho = 12;
   Familia = "Segoe UI";
   Cor = claBalck;
}

////////////////////////////////////////////////////////////////////////
// Name:       Letra::~Letra()
// Purpose:    Implementation of Letra::~Letra()
// Return:
////////////////////////////////////////////////////////////////////////

Letra::~Letra()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Letra::getCor()
// Purpose:    Implementation of Letra::getCor()
// Return:     unsigned int
////////////////////////////////////////////////////////////////////////

unsigned int Letra::getCor(void)
{
   return Cor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Letra::setCor(unsigned int newCor)
// Purpose:    Implementation of Letra::setCor()
// Parameters:
// - newCor
// Return:     void
////////////////////////////////////////////////////////////////////////

void Letra::setCor(unsigned int newCor)
{
   Cor = newCor;
}