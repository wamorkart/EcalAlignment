import FWCore.ParameterSet.Config as cms

process = cms.Process("TEST")

process.inputTree = cms.PSet(
  nameTree = cms.string("ntupleEcalAlignment/myTree"),
  
  selection = cms.string("(electrons_classification==0 && ETSC>30) && mll<95 && mll>85  && HoE<0.3 && eleEcalIso<15 && (abs(DeltaEtaIn)<(25e-3)) && (abs(DeltaPhiIn)<(10e-3))"),
  

  traslationX = cms.bool(True),
  traslationY = cms.bool(True),
  traslationZ = cms.bool(True),
  rotationPhi   = cms.bool(False), # True
  rotationTheta = cms.bool(False),
  rotationPsi   = cms.bool(False), # True

  setRotationPhi   = cms.untracked.double(0),
  setRotationTheta = cms.untracked.double(0),
  setRotationPsi   = cms.untracked.double(0),

  #DetaBias = cms.untracked.string("(x>0.0 && x<1.5)  * (-(0.24e-3)) + (x>1.5) * (-1.35e-3) + (x<0.0 && x>-1.5)  * (0.24e-3)    + (x<-1.5) * (1.35e-3) + y*0"), 
  DetaBias = cms.untracked.string("(x>0.0 && x<1.5)  * (-(0.24e-3)) + (x>1.5) * (-1.14e-3) + (x<0.0 && x>-1.5)  * (0.24e-3)    + (x<-1.5) * (1.14e-3) + y*0"), 
  DphiBias = cms.untracked.string("(x>0.0 && x<1.5)   * ((0.28e-3)) + (x>1.5) * (-0.07e-3) + (x<0.0 && x>-1.5)  * (-0.28e-3)   + (x<-1.5) * (0.16e-3) + y*0"), 
        
  #inputFilesPosition    = cms.untracked.string(
         #'myEEAlignment_2010_OLD.txt'
  #),
   
  inputFiles    = cms.vstring(
          #'file:/tmp/amassiro/data_0T.root'  # prima iterazione
          'file:/tmp/amassiro/data_0T_EE.root'
          
    )
)


process.outputTree = cms.PSet(
  #outputFile = cms.string("myEEAlignment_2015_18Jan2016_0Tesla.txt")
  outputFile = cms.string("myEEAlignment_2015_19Jan2016_0Tesla.txt")
)



