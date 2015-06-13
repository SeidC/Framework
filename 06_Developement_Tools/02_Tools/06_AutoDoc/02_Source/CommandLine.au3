#cs ----------------------------------------------------------------------------

	AutoIt Version: 3.3.6.0

	Author:         myName

	Script Function: Template AutoIt script.

#ce ----------------------------------------------------------------------------
#cs ----------------------------------------------------------------------------
This should be a discription how to add a new Function for Lib.
Copy the code bolw to get a function prototype

;--------------------------------------------------------
;	Name.......:	<FunctionName>
;	Parameter..:	$Param1
;					$Param2
;					Param n
;
;	Return.....:	<Value/None>
;
;	Discription:	Discription
;
;--------------------------------------------------------
Func <FunctionName> ($Param1,$Param2,...,Param n)



EndFunc ;==> <FunctionName>
#ce ----------------------------------------------------------------------------


;--Includes --------------------------------------------------------------------
#include-once

;--Global Defines --------------------------------------------------------------

Global Enum $cmdValue = 0, _
			$descr		 , _
			$NUM_OF_AV

Global Const $paramAv[$NUM_OF_AV]
;-- Function Definitions -------------------------------------------------------

