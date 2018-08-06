 if(YEAR==2017 && MONTH==7){

    fscanf(filein,"%f %f %f %f %f %f", &(pos[0]),&(pos[1]),&(pos[2]),&(pos[3]),&(pos[4]),&(pos[5]));

    for(unsigned int i0=0;i0<6;i0++){
        fscanf(filein,"%2d",&(nstrip[i0]));
        //std::cout << nstrip[i0] << " " ;
    }
    for(unsigned int i0=0;i0<6;i0++){
        fscanf(filein,"%2d",&(cluster[i0]));
        //std::cout << cluster[i0] << " " ;
        
    }
    for(unsigned int i0=0;i0<16;i0++){
        fscanf(filein,"%5d",&(devabase[i0])); // 0-15 baseline
        //std::cout << devabase[i0] << " ";
    }    
    for(unsigned int i0=0;i0<16;i0++){
        fscanf(filein,"%5d",&(deva[i0])); // 0-15 calo caounts (0-8 stefanino; 9-12 DEVA)
        //std::cout << deva[i0] << " ";
        
    }
    for(unsigned int i0=0;i0<16;i0++){
        fscanf(filein,"%3d",&(caldeva2[i0])); // time 0-8 stefanino; 9-12 DEVA
        //std::cout << caldeva2[i0] << " " ;
        
    }
    fscanf(filein," %f %f %f %4d %4d %9d",&(gonio_rot),&(gonio_crad),&(up_lin),&(spillnumb),&(goniostep),&(eventnumb));
    
    //std::cout << gonio_rot << " " << eventnumb << std::endl;
    
}

 if(YEAR==2018 && MONTH==8){
      fscanf(filein,"%f %f %f %f %f %f", &(pos[0]),&(pos[1]),&(pos[2]),&(pos[3]),&(pos[4]),&(pos[5]));

    for(unsigned int i0=0;i0<6;i0++){
        fscanf(filein,"%2d",&(nstrip[i0]));
        //std::cout << nstrip[i0] << " " ;
    }
    for(unsigned int i0=0;i0<6;i0++){
        fscanf(filein,"%2d",&(cluster[i0]));
        //std::cout << cluster[i0] << " " ;
        
    }
    for(unsigned int i0=0;i0<8;i0++){
        fscanf(filein,"%5d",&(devabase[i0])); // 0-15 baseline?
        //std::cout << devabase[i0] << " ";
    }    
    for(unsigned int i0=0;i0<8;i0++){
        fscanf(filein,"%5d",&(deva[i0])); // 0-15 calo caounts (0-8 stefanino; 9-12 DEVA)?
        //std::cout << deva[i0] << " ";
        
    }
    for(unsigned int i0=0;i0<8;i0++){
        fscanf(filein,"%3d",&(caldeva2[i0])); // time 0-8 stefanino; 9-12 DEVA?
        //std::cout << caldeva2[i0] << " " ;
        
    }
    fscanf(filein," %f %f %f %f %f %4d %4d %9d",&(gonio_rot),&(gonio_crad),&(up_lin),&(up_lin_2),&(up_ver),&(spillnumb),&(goniostep),&(eventnumb));
    
    //if( (runnumb >= 300258)) { 
    //  for(unsigned int i0=0;i0<519;i0++){    
    //      fscanf(filein,"%5d",&iii);
    //  }
    //}
    
    //std::cout << gonio_rot << " " << eventnumb << std::endl;

 }

