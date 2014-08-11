EcalAlignment
=============

EcalAlignment framework

    read doc/README

where:

    /afs/cern.ch/work/a/amassiro/ECALAlignment/CMSSW_5_3_3/src/EcalValidation/EcalAlignment
    /afs/cern.ch/work/a/amassiro/ECALAlignment/CMSSW_7_0_6_patch1/src/EcalAlignment

to setup:

    mkdir EcalValidation
    cd EcalValidation
    git clone git@github.com:amassiro/EcalAlignment.git




where alignment constants are backuped:

    /afs/cern.ch/user/a/amassiro/public/ECAL_Alignment/



=============

Tools:

CombineRotoTraslations

    CombineRotoTraslations   origin.txt    modification.txt    new.txt
    CombineRotoTraslations   /afs/cern.ch/user/a/amassiro/public/ECAL_Alignment/1Mar2011/myEEAlignment_2010.txt   myEEAlignment_2011.txt    myEEAlignment_2011_combined.txt

e.g.

    subtract two tags
    CombineRotoTraslations   myEEAlignment_2011.txt   myEEAlignment_2012.txt    myEEAlignment_2011_2012_difference.txt
    CombineRotoTraslations   myEBAlignment_2011.txt   myEBAlignment_2012.txt    myEBAlignment_2011_2012_difference.txt






