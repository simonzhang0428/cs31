//
//  isValidUppercaseStateCode.cpp
//  03
//
//  Created by Jing Ping on 2020/8/12.
//  Copyright © 2020 Simon. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;

//*************************************
//  isValidUppercaseStateCode
//*************************************

// Return true if the argument is a two-uppercase-letter state code, or
// false otherwise.

bool isValidUppercaseStateCode2(string stateCode)
{
    const string codes =
    "AL.AK.AZ.AR.CA.CO.CT.DE.DC.FL.GA.GU.HI.ID.IL.IN.IA.KS."
        "KY.LA.ME.MD.MA.MI.MN.MS.MO.MP.MT.NE.NV.NH.NJ.NM.NY.NC."
        "ND.OH.OK.OR.PA.PR.RI.SC.SD.TN.TX.UT.VT.VA.WA.WV.WI.WY";
    return (stateCode.size() == 2  &&
        stateCode.find('.') == string::npos  &&  // no '.' in stateCode
        codes.find(stateCode) != string::npos);  // match found
}
