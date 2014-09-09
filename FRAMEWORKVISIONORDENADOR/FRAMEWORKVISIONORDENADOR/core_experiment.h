#ifndef _coreh
#define _core_experimenth
#include "core.h"
using namespace core;

namespace core_experiment {

	class IExperimenter{
	
	public :
		float* getResults() const;
		IClassifiedImageProvoder getClassifiedImageProvoder() const;
	};

	class TenfoldCrossValidation: public IExperimenter{
	public:
		TenfoldCrossValidation(IFaceDetector adetector,  IFaceRecognitor arecognitor){
		// FALTA IMPLEMENTAR
		}
	};

	class HoldOutCrossValidation: public IExperimenter{
	public:
		HoldOutCrossValidation(IFaceDetector adetector,  IFaceRecognitor arecognitor){
		// FALTA IMPLEMENTAR
		}
	};

}

#endif