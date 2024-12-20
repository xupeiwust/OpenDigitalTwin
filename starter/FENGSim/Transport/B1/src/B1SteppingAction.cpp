//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
//
/// \file B1SteppingAction.cc
/// \brief Implementation of the B1SteppingAction class

#include "Transport/B1/include/B1SteppingAction.h"
#include "Transport/B1/include/B1EventAction.h"
#include "Transport/B1/include/B1DetectorConstruction.h"

#include "G4Step.hh"
#include "G4Event.hh"
#include "G4RunManager.hh"
#include "G4LogicalVolume.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

B1SteppingAction::B1SteppingAction(B1EventAction* eventAction)
: G4UserSteppingAction(),
  fEventAction(eventAction),
  fScoringVolume(0)
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

B1SteppingAction::~B1SteppingAction()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void B1SteppingAction::UserSteppingAction(const G4Step* step)
{







      // output data
    //
    G4int eventID = G4RunManager::GetRunManager()->GetCurrentEvent()->GetEventID();
    G4Track* track = step->GetTrack();
    G4int trackID = track->GetTrackID();
    G4int parentID = track->GetParentID();
    G4int stepID = track->GetCurrentStepNumber();
    G4double globalTime = track->GetGlobalTime();
    G4String particalName = track->GetDefinition()->GetParticleName();// equal to GetDynamicParticle()
    // G4String particalName2 = track->GetDynamicParticle()->GetDefinition()->GetParticleName();
    G4ThreeVector xyzTrack = step->GetPreStepPoint()->GetPosition();// equal to PostStepPoint()
    //G4ThreeVector xyzTrack = track->GetPosition();
    G4ThreeVector xyzPost = step->GetPostStepPoint()->GetPosition();// string type
    //
    std::ofstream output;
    output.open("/home/jiping/software/geant4.10.06.p02/examples/basic/B1/build/output.vtk",std::ios::app);    
    //output <<eventID<<"	"<<trackID<<"	"<<parentID<<"	"<<stepID<<"	"
    //<<xyzTrack<<"	"<<xyzPost<<"	"
    //<<particalName<<"	"<<globalTime<<"	"
    //	   << std::endl;
    output << xyzTrack[0] << " " << xyzTrack[1] << " " << xyzTrack[2] << " " 
	   << xyzPost[0] << " " << xyzPost[1] << " " << xyzPost[2] 
	   
	   << std::endl;
    output.close();








  
    if (!fScoringVolume) { 
	const B1DetectorConstruction* detectorConstruction
	    = static_cast<const B1DetectorConstruction*>
	    (G4RunManager::GetRunManager()->GetUserDetectorConstruction());
	fScoringVolume = detectorConstruction->GetScoringVolume();   
    }











    
    // get volume of the current step
    G4LogicalVolume* volume 
	= step->GetPreStepPoint()->GetTouchableHandle()
	->GetVolume()->GetLogicalVolume();
    
    // check if we are in scoring volume
    if (volume != fScoringVolume) return;
    
    // collect energy deposited in this step
    G4double edepStep = step->GetTotalEnergyDeposit();
    fEventAction->AddEdep(edepStep);

    

}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

