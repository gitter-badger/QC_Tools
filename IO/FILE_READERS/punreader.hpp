
#ifndef _PunReader_HPP_
#define _PunReader_HPP_

#include <vector>

#include "../MATRIX/matrix.hpp"
#include "filereader.hpp"
// Gaussian fort.7/.pun file reader

class PunReader : public FileReader {
  public:
    PunReader(std::string str);     
    Matrix * getCoefsMatrix(std::string orb_type); 
    bool restrictedShell() { return coefs.size()==1; }

  private:
    virtual void registerSections_();
    virtual void validFileName_();

    static void OrbitalCoefAlphaSectionReader(void *);
    static void OrbitalCoefBetaSectionReader(void *);

    void ReadCoef(std::string orb_type);
    std::vector<double> readGausCoefLine(std::string line);
    
    std::map<std::string,Matrix *> coefs;
};

#endif
