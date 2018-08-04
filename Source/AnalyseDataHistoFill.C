///////////////////////////////////////////////////////////////////////
////////////////// Detectors  Histograms  /////////////////////////////
///////////////////////////////////////////////////////////////////////
if(flagpos) {h2dX1inClu4->Fill(gonio_rot+divcorr,cluster[4]);}//scan radiazione
if(flagpos) {h2dX1inClu5->Fill(gonio_rot+divcorr,cluster[5]);}//scan radiazione

if  ((cluster[4]==1) && (cluster[5]==1))
{

hx1->Fill(x1);
hx2->Fill(x2);
hx3->Fill(x3);
hy1->Fill(y1);
hy2->Fill(y2);
hy3->Fill(y3);

hx1naP->Fill(x1);
hx2naP->Fill(x2);
hx3naP->Fill(x3);
hy1naP->Fill(y1);
hy2naP->Fill(y2);
hy3naP->Fill(y3);


hx12->Fill(x1-x2);
hx13->Fill(x1-x3);
hx23->Fill(x2-x3);

hy12->Fill(y1-y2);
hy13->Fill(y1-y3);
hy23->Fill(y2-y3);

hxy1->Fill(x1,y1);
hxy2->Fill(x2,y2);
hxy3->Fill(x3,y3);

hthXin->Fill(thXin);
hthYin->Fill(thYin);
hthXYin->Fill(thXin,thYin);

hthXout->Fill(thXout);
hthYout->Fill(thYout);


hthXYout->Fill(thXout,thYout);


if(flagpos) hx12P->Fill(x1-x2);
if(flagpos) hx23P->Fill(x3-x2);
if(flagpos) hy12P->Fill(y1-y2);
if(flagpos) hy23P->Fill(y3-y2);
if(flagpos) hx1P->Fill(x3);
if(flagpos) hx2P->Fill(x3);
if(flagpos) hx3P->Fill(x3);

if(flagpos) hthXoutP->Fill(thXout);
if(flagpos && flagdivA) hthXoutA->Fill(thXout);
if(flagpos && flagdivB) hthXoutB->Fill(thXout);
if(flagpos && flagdivC) hthXoutC->Fill(thXout);


hdeflX->Fill(deflX);
hdeflY->Fill(deflY);
hdeflXY->Fill(deflX,deflY);
if(flagpos) hdeflXP->Fill(deflX);
if(flagpos) hdeflYP->Fill(deflY);
if(flagpos && flagdivA) hdeflXA->Fill(deflX);
if(flagpos && flagdivA) hdeflYA->Fill(deflY);
if(flagpos && flagdivB) hdeflXB->Fill(deflX);
if(flagpos && flagdivB) hdeflYB->Fill(deflY);
if(flagpos && flagdivC) hdeflXC->Fill(deflX);
if(flagpos && flagdivC) hdeflYC->Fill(deflY);
if(flagpos && flagdivR) hdeflXcutR->Fill(deflX);
if(flagpos && flagdivR) hdeflYcutR->Fill(deflY);
if(flagpos) hdeflXYP->Fill(deflX,deflY);
if(flagpos && flagdivA) hdeflXYA->Fill(deflX,deflY);
if(flagpos && flagdivBx) hdeflXYB->Fill(deflX,deflY);
if(flagpos && flagdivC) hdeflXYC->Fill(deflX,deflY);
if(flagpos && flagdivR) hdeflXYR->Fill(deflX,deflY);

/*

if(SLICESON)
if(flagpos)
{
    for(ij=-4; ij <= 4 ;ij++)
    {
        for(jk=-4; jk <= 4 ;jk++)
        {
            k = (ij+4)*10+(jk+4);
            if((SQR(thXin-ij*deflXYscanSTEP-thXinCorr)+SQR(thYin-jk*deflXYscanSTEP-thYinCorr)) < SQR(divRcut))
            {
                hdeflXY_SL[k]->Fill(deflX,deflY);
                hthXY_SL[k]->Fill(thXout,thYout);
            }
            if(SQR(thXin-ij*deflXYscanSTEP-thXinCorr)< SQR(divCcutX))
                if(SQR(thYin-jk*deflXYscanSTEP-thYinCorr) < SQR(divCcutY))
                {
                    if( SQR(thXin-thXinCorr) < SQR(divAcutX) )
                        if( SQR(thYin) < SQR(divAcutY) ){
                            hdeflXY_center[ij][jk]->Fill(deflX,deflY);
                        }
                }
        }
    }
}

if(flagpos)
{
    for(ij=0; ij < 32 ;ij++)
    {
        for(jk=0; jk < 32 ;jk++)
        {
            if( SQR(thXin-ij-16) < SQR(divAcutX*1.5) )
                if( SQR(thYin-jk-16) < SQR(divAcutY*1.5) ){
                    hdeflXY_center[ij][jk]->Fill(deflX,deflY);
                }
        }
    }
}
 */
///////////////////////////////////////////////////////////////////////
///////////// Beam Deflection VS in-going Divergence Histograms ///////
///////////////////////////////////////////////////////////////////////
hdeflXthXin->Fill(thXin,deflX);
hdeflXthYin->Fill(thYin,deflX);
hdeflYthXin->Fill(thXin,deflY);
hdeflYthYin->Fill(thYin,deflY);
hdeflRthXin->Fill(thXin,deflR);
hdeflRthYin->Fill(thYin,deflR);


if(flagpos) hdeflXthXinP->Fill(thXin,deflX);
if(flagpos) hdeflXthYinP->Fill(thYin,deflX);
if(flagpos) hdeflYthXinP->Fill(thXin,deflY);
if(flagpos) hdeflYthYinP->Fill(thYin,deflY);
if(flagpos) hdeflRthXinP->Fill(thXin,deflR);
if(flagpos) hdeflRthYinP->Fill(thYin,deflR);

if(flagposx1 && flagposy) hdeflXthXinPX1->Fill(thXin,deflX);
if(flagposx2 && flagposy) hdeflXthXinPX2->Fill(thXin,deflX);
if(flagposx3 && flagposy) hdeflXthXinPX3->Fill(thXin,deflX);
if(flagposx4 && flagposy) hdeflXthXinPX4->Fill(thXin,deflX);
if(flagposx && flagposy1) hdeflXthXinPY1->Fill(thXin,deflX);
if(flagposx && flagposy2) hdeflXthXinPY2->Fill(thXin,deflX);
if(flagposx && flagposy3) hdeflXthXinPY3->Fill(thXin,deflX);
if(flagposx && flagposy4) hdeflXthXinPY4->Fill(thXin,deflX);


if(flagposx1 && flagposy1) hdeflXthXinP11->Fill(thXin,deflX);
if(flagposx1 && flagposy2) hdeflXthXinP12->Fill(thXin,deflX);
if(flagposx1 && flagposy3) hdeflXthXinP13->Fill(thXin,deflX);
if(flagposx1 && flagposy4) hdeflXthXinP14->Fill(thXin,deflX);

if(flagposx2 && flagposy1) hdeflXthXinP21->Fill(thXin,deflX);
if(flagposx2 && flagposy2) hdeflXthXinP22->Fill(thXin,deflX);
if(flagposx2 && flagposy3) hdeflXthXinP23->Fill(thXin,deflX);
if(flagposx2 && flagposy4) hdeflXthXinP24->Fill(thXin,deflX);

if(flagposx3 && flagposy1) hdeflXthXinP31->Fill(thXin,deflX);
if(flagposx3 && flagposy2) hdeflXthXinP32->Fill(thXin,deflX);
if(flagposx3 && flagposy3) hdeflXthXinP33->Fill(thXin,deflX);
if(flagposx3 && flagposy4) hdeflXthXinP34->Fill(thXin,deflX);

if(flagposx4 && flagposy1) hdeflXthXinP41->Fill(thXin,deflX);
if(flagposx4 && flagposy2) hdeflXthXinP42->Fill(thXin,deflX);
if(flagposx4 && flagposy3) hdeflXthXinP43->Fill(thXin,deflX);
if(flagposx4 && flagposy4) hdeflXthXinP44->Fill(thXin,deflX);


if(flagpos && flagdivAy) hdeflXthXinPA->Fill(thXin,deflX);
if(flagpos && flagdivAx) hdeflXthYinPA->Fill(thYin,deflX);
if(flagpos && flagdivAy) hdeflYthXinPA->Fill(thXin,deflY);
if(flagpos && flagdivAx) hdeflYthYinPA->Fill(thYin,deflY);

if(flagpos && flagdivBy) hdeflXthXinPB->Fill(thXin,deflX);
if(flagpos && flagdivBx) hdeflXthYinPB->Fill(thYin,deflX);
if(flagpos && flagdivBy) hdeflYthXinPB->Fill(thXin,deflY);
if(flagpos && flagdivBx) hdeflYthYinPB->Fill(thYin,deflY);

if(flagpos && flagdivCy) hdeflXthXinPC->Fill(thXin,deflX);
if(flagpos && flagdivCx) hdeflXthYinPC->Fill(thYin,deflX);
if(flagpos && flagdivCy) hdeflYthXinPC->Fill(thXin,deflY);
if(flagpos && flagdivCx) hdeflYthYinPC->Fill(thYin,deflY);

if(flagpos && flagdivCy) hthXthXinPC->Fill(thXin,thXout);
if(flagpos) hthXthXinP->Fill(thXin,thXout);



if(flagpos && nuclear == 0) hdeflXthXinP_0->Fill(thXin,deflX);
if(flagpos && nuclear == 1) hdeflXthXinP_1->Fill(thXin,deflX);
if(flagpos && nuclear == 2) hdeflXthXinP_2->Fill(thXin,deflX);
if(flagpos && nuclear == 3) hdeflXthXinP_3->Fill(thXin,deflX);


///////////////////////////////////////////////////////////////////////
///////////// Beam Deflection VS Position Histograms //////////////////
///////////////////////////////////////////////////////////////////////
hdeflXposX->Fill(xCRY,deflX);
hdeflXposY->Fill(yCRY,deflX);

if(flagposy) hdeflXposXCry->Fill(xCRY,deflX);
if(flagposx) hdeflXposYCry->Fill(yCRY,deflX);

hdeflYposX->Fill(xCRY,deflY);
hdeflYposY->Fill(yCRY,deflY);

if(flagpos) {hdeflXposXP->Fill(xCRY,deflX);
	    hdeflXposYP->Fill(yCRY,deflX);}
if(flagdivA && flagposy) hdeflXposXA->Fill(xCRY,deflX);
if(flagdivA && flagposx) hdeflXposYA->Fill(yCRY,deflX);
if(flagdivA && flagposy) hdeflYposXA->Fill(xCRY,deflY);
if(flagdivA && flagposx) hdeflYposYA->Fill(yCRY,deflY);
if(flagdivB && flagposy) hdeflXposXB->Fill(xCRY,deflX);
if(flagdivB && flagposx) hdeflXposYB->Fill(yCRY,deflX);
if(flagdivB && flagposy) hdeflYposXB->Fill(xCRY,deflY);
if(flagdivB && flagposx) hdeflYposYB->Fill(yCRY,deflY);
if(flagdivC && flagposy) hdeflXposXC->Fill(xCRY,deflX);
if(flagdivC && flagposx) hdeflXposYC->Fill(yCRY,deflX);
if(flagdivC && flagposy) hdeflYposXC->Fill(xCRY,deflY);
if(flagdivC && flagposx) hdeflYposYC->Fill(yCRY,deflY);



///////////////////////////////////////////////////////////////////////
///////////// Beam Divergence VS Position Histograms //////////////////
///////////////////////////////////////////////////////////////////////
hposXposYin->Fill(xCRY,yCRY);
hthXposXin->Fill(xCRY,thXin);
hthXposYin->Fill(yCRY,thXin);
hthYposYin->Fill(yCRY,thYin);
hthYposXin->Fill(xCRY,thYin);

if(flagpos) hthXposXinP->Fill(xCRY,thXin);
if(flagpos) hthXposYinP->Fill(yCRY,thXin);
if(flagpos) hthYposXinP->Fill(xCRY,thYin);
if(flagpos) hthYposYinP->Fill(yCRY,thYin);

hthXposXout->Fill(x3,thXout);
hthYposYout->Fill(y3,thYout);
if(flagpos) hthXposXoutP->Fill(x3,thXout);
if(flagpos) hthYposYoutP->Fill(y3,thYout);



///////////////////////////////////////////////////////////////////////
///////////// Beam Divergence VS Time /////////////////////////////////
///////////////////////////////////////////////////////////////////////
if(N_FILES > 0 && ijk>0)corr=corr+nfiles[ijk-1];
hthXrun->Fill(i+corr,thXin);
hthYrun->Fill(i+corr,thYin);
if(flagpos) hthXrunCry->Fill(i+corr,thXin);
if(flagpos) hthYrunCry->Fill(i+corr,thYin);
if(flagpos && flagdivB) hdeflXrunCryB->Fill(i+corr,deflX);
if(flagpos && flagdivB) hdeflYrunCryB->Fill(i+corr,deflY);
//if(flagpos && flagdivA) hdeflXthXrun->Fill(i+corr,thXin,deflX);




///////////////////////////////////////////////////////////////////////
//////////////////////// Scan Histograms  /////////////////////////////
///////////////////////////////////////////////////////////////////////

h2dX0->Fill((float)h2st,deflX);
h2dY0->Fill((float)h2st,deflY);

if(flagpos) h2dX1->Fill((float)h2st,deflX);
if(flagpos) h2dY1->Fill((float)h2st,deflY);

h2dX0in->Fill((float)h2st+divcorr,deflX);


if(flagpos) h2dX1u->Fill((float)h2st+divcorr,thXout);
if(flagpos) h2dX1in->Fill((float)h2st+divcorr,deflX);
if(flagpos) h2dX1inGO->Fill(gonio_rot+divcorr,deflX);
if(flagpos) h2dX1inInv->Fill((float)h2st-divcorr,deflX);

if(flagposy && flagposx1) h2dX1inX1->Fill((float)h2st+divcorr,deflX);
if(flagposy && flagposx2) h2dX1inX2->Fill((float)h2st+divcorr,deflX);
if(flagposy && flagposx3) h2dX1inX3->Fill((float)h2st+divcorr,deflX);
if(flagposy && flagposx4) h2dX1inX4->Fill((float)h2st+divcorr,deflX);

if(flagposx && flagposy1) h2dX1inY1->Fill((float)h2st+divcorr,deflX);
if(flagposx && flagposy2) h2dX1inY2->Fill((float)h2st+divcorr,deflX);
if(flagposx && flagposy3) h2dX1inY3->Fill((float)h2st+divcorr,deflX);
if(flagposx && flagposy4) h2dX1inY4->Fill((float)h2st+divcorr,deflX);

if(flagpos) h2thX1in->Fill((float)h2st+divcorr,thXout);

h2dY0in->Fill((float)h2st+divcorr,deflY);
if(flagpos) h2dY1in->Fill((float)h2st+divcorr,deflY);

if(flagpos) h2dY1inInv->Fill((float)h2st-divcorr,deflY);


if(flagpos && flagdivR) h2dX2R->Fill((float)h2st+divcorr,deflX);
if(flagpos && flagdivR) h2dY2R->Fill((float)h2st+divcorr,deflY);

if(scanflag==2)
{
    if(flagpos && flagdivAx) h2dX2A->Fill((float)h2st+divcorr,deflX);
        if(flagpos && flagdivBx) h2dX2B->Fill((float)h2st+divcorr,deflX);
            if(flagpos && flagdivCx) h2dX2C->Fill((float)h2st+divcorr,deflX);

                if(flagpos && flagdivAx) h2dY2A->Fill((float)h2st+divcorr,deflY);
                    if(flagpos && flagdivBx) h2dY2B->Fill((float)h2st+divcorr,deflY);
                        if(flagpos && flagdivCx) h2dY2C->Fill((float)h2st+divcorr,deflY);
                            }

if(scanflag==1)
{
    if(flagpos && flagdivAy) h2dX2A->Fill((float)h2st+divcorr,deflX);
        if(flagpos && flagdivBy) h2dX2B->Fill((float)h2st+divcorr,deflX);
            if(flagpos && flagdivCy) h2dX2C->Fill((float)h2st+divcorr,deflX);
                if(flagpos && flagdivAy) h2dY2A->Fill((float)h2st+divcorr,deflY);
                    if(flagpos && flagdivBy) h2dY2B->Fill((float)h2st+divcorr,deflY);
                        if(flagpos && flagdivCy) h2dY2C->Fill((float)h2st+divcorr,deflY);
                            }
if(flagpos) {h2dX1inRadGO->Fill(gonio_rot+divcorr,calo_crys_tot_energy);}//scan radiazione
if(flagpos) {h2dX1inRad->Fill((float)h2st+divcorr,calo_crys_tot_energy);}//scan radiazione
if(flagpos) {h2dX1Rad->Fill((float)h2st,calo_crys_tot_energy);}//scan radiazione
if(flagpos) {h2dX1inRadInv->Fill((float)h2st-divcorr,calo_crys_tot_energy);}//scan radiazione invertito

    
/*
if(flagpos)
for(ii=1;ii<=h2dX1inTors->GetXaxis()->GetNbins();ii++)
{
    double tauy = h2dX1inTors->GetXaxis()->GetBinCenter(ii);
    double val = (float)h2st+divcorr + 1.E-3*(-yCRY)*tauy;
    h2dX1inTors->Fill(tauy,val,deflX);
}

if(flagpos)
for(ii=1;ii<=hdeflXthXinTors->GetXaxis()->GetNbins();ii++)
{
    double tauy = hdeflXthXinTors->GetXaxis()->GetBinCenter(ii);
    double val = thXin + 1.E-3*(-yCRY)*tauy;
    hdeflXthXinTors->Fill(tauy,val,deflX);
}
if(flagpos)
for(ii=1;ii<=hdeflXthXinTorsX->GetXaxis()->GetNbins();ii++)
{
    double taux = hdeflXthXinTorsX->GetXaxis()->GetBinCenter(ii);
    double val = thXin + 1.E-3*(-xCRY)*taux;
    hdeflXthXinTorsX->Fill(taux,val,deflX);
}


if(((meanchang<0.) && (deflX<meanchang)) ||
   ((meanchang>0.) && (deflX>meanchang))){
    for(int i0=1;i0<=hChTorsXY->GetXaxis()->GetNbins();i0++)
    {
        for(int i1=1;i1<=hChTorsXY->GetYaxis()->GetNbins();i1++)
        {
            double taux = hChTorsXY->GetXaxis()->GetBinCenter(i0);
            double tauy = hChTorsXY->GetYaxis()->GetBinCenter(i1);
            double val = thXin + 1.E-3*(-xCRY)*taux + 1.E-3*(-yCRY)*tauy;
            hChTorsXY->Fill(taux,tauy,val);
        }
    }
}
*/
/*
hdeflXposXposY->Fill(xCRY,yCRY,deflX);
 if(flagposx && flagdivC) hdeflXposXposYC->Fill(xCRY,yCRY,deflX);

 if(flagposx) hdeflXposYthXin->Fill(thXin,yCRY,deflX);*/

/*
 */
 if(flagpos) hdeflXYscan->Fill((float)h2st+divcorr,deflX,deflY);
/*
 if(flagpos && flagdivA) hdeflXYscanA->Fill((float)h2st+divcorr,deflX,deflY);

 
 if(flagposy && flagdivAy) hdeflXposXthXin->Fill(thXin,xCRY,deflX);
 if(flagposy && flagdivAx) hdeflXposXthYin->Fill(thYin,xCRY,deflX);
 if(flagposx && flagdivAy) hdeflXposYthXin->Fill(thXin,yCRY,deflX);
 
 
 
 if(flagposx && flagdivAx) hdeflXposYthYin->Fill(thYin,yCRY,deflX);
 
 if(flagpos) hdeflXthXthYin->Fill(thXin,thYin,deflX);
 hdeflXposXposYA->Fill(xCRY,yCRY,deflX);
 hdeflXposXposY->Fill(xCRY,yCRY,deflX);
 hdeflXposXscan->Fill((float)h2st+divcorr,deflX,xCRY);
 hdeflXposYscan->Fill((float)h2st+divcorr,deflX,yCRY);
 hdeflYposXscan->Fill((float)h2st+divcorr,deflY,xCRY);
 hdeflYposYscan->Fill((float)h2st+divcorr,deflY,yCRY);
 
 if(flagpos) hdeflXYthXinP->Fill(thXin,deflY,deflX);
 if(flagpos) hdeflXYthYinP->Fill(thYin,deflY,deflX);
if(flagpos && flagdivAy) hdeflXYthXinA->Fill(thXin,deflY,deflX);
if(flagpos && flagdivAx) hdeflXYthYinA->Fill(thYin,deflY,deflX);

 
 if(flagpos)
 for(ii=1;ii<=hdeflXthXinTors->GetXaxis()->GetNbins();ii++)
 {
 tempF[0] = hdeflXthXinTors->GetXaxis()->GetBinCenter(ii);
 tempF[1] = thXin + 1.E-3*(yCRY)*tempF[0];
 hdeflXthXinTors->Fill(tempF[0],tempF[1],deflX);
 }
 
 if(flagpos)
 for(ii=1;ii<=hdeflXthYinTors->GetXaxis()->GetNbins();ii++)
 {
 tempF[0] = hdeflXthYinTors->GetXaxis()->GetBinCenter(ii);
 tempF[1] = thYin - 1.E-3*(xCRY)*tempF[0];
 hdeflXthYinTors->Fill(tempF[0],tempF[1],deflX);
 }*/


hCaloCrysADC->Fill(calo_crys_tot);
if(flagpos) hCaloCrysADCP->Fill(calo_crys_tot);
//if(flagpos && channeled) hCaloCrysADCCh->Fill(calo_crys_tot);
if(!flagpos) hCaloCrysADCOut->Fill(calo_crys_tot);
if(flagpos && flagdivA) hCaloCrysADCA->Fill(calo_crys_tot);
if(flagpos && flagdivR) hCaloCrysADCR->Fill(calo_crys_tot);

hCaloCrys->Fill(calo_crys_tot_energy);
if(flagpos) hCaloCrysP->Fill(calo_crys_tot_energy);
if(flagpos && flagdivA) hCaloCrysA->Fill(calo_crys_tot_energy);
if(flagpos && flagdivR) hCaloCrysR->Fill(calo_crys_tot_energy);
//if(flagpos && channeled) hCaloCrysCh->Fill(calo_crys_tot_energy);
if(!flagpos) hCaloCrysOut->Fill(calo_crys_tot_energy);

if(flagDeva) hCaloCrysDeva->Fill(calo_crys_tot_energy);
if(flagpos && flagDeva) hCaloCrysPDeva->Fill(calo_crys_tot_energy);
//if(flagpos && channeled && flagDeva) hCaloCrysChDeva->Fill(calo_crys_tot_energy);
if(!flagpos && flagDeva) hCaloCrysOutDeva->Fill(calo_crys_tot_energy);

hCaloCrysE->Fill(calo_crys_tot_energy);
if(flagpos) hCaloCrysPE->Fill(calo_crys_tot_energy);
//if(flagpos && channeled) hCaloCrysChE->Fill(calo_crys_tot_energy);
if(!flagpos) hCaloCrysOutE->Fill(calo_crys_tot_energy);



hCaloDeva->Fill(calo_deva_tot);

if(flagpos) hCaloCrysDevaP->Fill(calo_crys_tot,calo_deva_tot);
if(flagpos) hCaloCrysDevaP1->Fill(calo_crys_tot+calo_deva_tot);
if(flagpos) hCaloCrysthXinP->Fill(thXin,calo_crys_tot);
if(flagpos) hCaloCrysEthXinP->Fill(thXin,calo_crys_tot_energy);
if(flagpos) hCaloCrysEthYinP->Fill(thYin,calo_crys_tot_energy);

if(flagpos == true && (calo_crys_tot<65. && calo_deva_tot<8500.)==false) {
    hdeflXthXinCal->Fill(thXin,deflX);
}
if(flagpos == true && (calo_crys_tot<65. && calo_deva_tot<8500.)==true) {
    hdeflXthXinCal2->Fill(thXin,deflX);
}


if(flagposx){
for (torY = 0 ; torY <50 ; torY++)
	{
	TC =  (torY-50)*( - yCRY)*1.E-3;
	hdeflXtor[torY]->Fill(thXin+TC,deflX);             
	}
}

}



for (int ii111 = 0 ; ii111 <8 ; ii111++){
    hCalo2018ADC[ii111]->Fill(deva[ii111]);
}
if(flagpos) h2dX1in2018Ph->Fill((float)h2st+divcorr,deva[3]);
if(flagpos) h2dX1in2018PhInv->Fill((float)h2st-divcorr,deva[3]);
if(flagpos) h2018PhthXinP->Fill(thXin,deva[3]);
if(flagpos) h2018PhthYinP->Fill(thYin,deva[3]);

//////////////////////////////////
//////Multitrack Histograms//////
/////////////////////////////////     //Included in 2018

if(flagpos){
//nStrip histograms
hx1nStrip->Fill(nstrip[0]);
hy1nStrip->Fill(nstrip[1]);
hx2nStrip->Fill(nstrip[2]);
hy2nStrip->Fill(nstrip[3]);
hx3nStrip->Fill(nstrip[4]);
hy3nStrip->Fill(nstrip[5]);

//cluster histograms
hx1Clu->Fill(cluster[0]);
hy1Clu->Fill(cluster[1]);
hx2Clu->Fill(cluster[2]);
hy2Clu->Fill(cluster[3]);
hx3Clu->Fill(cluster[4]);
hy3Clu->Fill(cluster[5]);

//Scan multitrack histograms

hX3CluCrad->Fill(gonio_crad,cluster[4]);          
hX3CluCrad_in->Fill(gonio_crad+thYin,cluster[4]);
 
hX3CluRot->Fill(gonio_rot,cluster[4]);          
hX3CluRot_in->Fill(gonio_rot+divcorr,cluster[4]);  

}

h2Clu3_0in->Fill((float)h2st+divcorr,cluster[4]);
if(flagpos) h2Clu3_1in->Fill((float)h2st+divcorr,cluster[4]);
if(flagpos) h2Clu3_1inInv->Fill((float)h2st-divcorr,cluster[4]);


hClu3posX->Fill(xCRY,cluster[4]);
hClu3posY->Fill(yCRY,cluster[4]);
if(flagposy) hClu3posXP->Fill(xCRY,cluster[4]);
if(flagposx) hClu3posYP->Fill(yCRY,cluster[4]);

