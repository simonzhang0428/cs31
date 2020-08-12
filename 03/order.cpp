//
//  main.cpp
//  03
//
//  Created by Jing Ping on 2020/8/12.
//  Copyright © 2020 Simon. All rights reserved.
//

#include <iostream>
#include <cassert>
using namespace std;

//*************************************
//  isValidUppercaseStateCode
//*************************************

// Return true if the argument is a two-uppercase-letter state code, or
// false otherwise.

bool isValidUppercaseStateCode(string stateCode)
{
    const string codes =
    "AL.AK.AZ.AR.CA.CO.CT.DE.DC.FL.GA.GU.HI.ID.IL.IN.IA.KS."
        "KY.LA.ME.MD.MA.MI.MN.MS.MO.MP.MT.NE.NV.NH.NJ.NM.NY.NC."
        "ND.OH.OK.OR.PA.PR.RI.SC.SD.TN.TX.UT.VT.VA.WA.WV.WI.WY";
    return (stateCode.size() == 2  &&
        stateCode.find('.') == string::npos  &&  // no '.' in stateCode
        codes.find(stateCode) != string::npos);  // match found
}

/// This function returns true if its parameter is an order string (i.e., it meets the definition above), or false otherwise.
/// @param orders example: TX38-CA132+Ms6-nY290-UT006+
bool hasValidSyntax(string orders)
{
    return 0;
}

/// If the parameter orders is not an order string (i.e., it does not meet the definition above), this function returns 1. If orders is an order string in which at least one state order specifies zero cases of masks (e.g., GA0+), this function returns 2. If the parameter status is not a + or -, this function returns 3. (If more than one of these situations occur, return one of those occurring situations' return value, your choice which one.) If any of the preceding situations occur, caseCount must be left unchanged. If none of those situations occurs, then the function returns 0 after setting caseCount to the total number of cases of masks for the state orders in orders that have the status indicated by the status parameter.
/// @param orders string
/// @param status '+' or '-' is valid, others are not.
/// @param caseCount total case count
int countCases(string orders, char status, int& caseCount)
{
    return 0;
}

int main()
{
    // Test hasValidSyntax
    for (;;)
    {
        cout << "Enter order string: ";
        string os;
    getline(cin, os);
    if (os == "quit")
        break;
    cout << "hasValidSyntax returns ";
    if (hasValidSyntax(os))
        cout << "true";
    else
        cout << "false";
    cout << endl;
    }
    
    // Test countCase
    if (hasValidSyntax("TX38-CA132+"))
        cout << "Passed test 1: hasValidSyntax(\"TX38-CA132+\")" << endl;
    if (!hasValidSyntax("MX38-CA132+"))
        cout << "Passed test 2: !hasValidSyntax(\"MX38-CA132+\")" << endl;
    int cases;
    cases = -999;    // so we can detect whether countCases sets cases
    if (countCases("TX38-CA132+Ms6-nY290-UT006+MS8+CA15+", '+', cases) == 0  &&  cases == 161)
        cout << "Passed test 3: countCases(\"TX38-CA132+Ms6-nY290-UT006+MS8+CA15+\", '+', cases)" << endl;
    cases = -999;    // so we can detect whether countCases leaves cases unchanged
    if (countCases("TX38-CA132+", '%', cases) == 3  &&  cases == -999)
        cout << "Passed test 4: countCases(\"TX38-CA132+\", '%', cases)" << endl;
}
