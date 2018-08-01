/// 2017 Stefanino and DEVA digitizer readout

//Stefanino
    calo_crys_tot = 0.;
    for(unsigned int i0=0;i0<9;i0++){
        if ((caldeva2[i0]>=180) && (caldeva2[i0] <=230))
        calo_crys_tot += deva[i0];
        
    }
    calo_crys_tot_energy = (calo_crys_tot - 152.38) / 57.811; //calorimetry function from calibration
    

//DEVA
    calo_deva_tot = 0.;
    for(unsigned int i0=9;i0<12;i0++){
        if ((caldeva2[i0]>=180) && (caldeva2[i0] <=230))
        calo_deva_tot += deva[i0];
    }
    

