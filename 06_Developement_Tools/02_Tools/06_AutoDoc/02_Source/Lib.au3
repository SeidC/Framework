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
#include "File.au3"
#include "Array.au3"

;--Global Defines --------------------------------------------------------------


;-- Function Definitions -------------------------------------------------------

Global $av = GetAllFiles("D:\Programmierung\Framework\03_Application\03_Framework\03_Source")
_ArrayDisplay($av)

; #FUNCTION# ====================================================================================================================
; Name ..........: GetAllFiles
; Description ...:
; Syntax ........: GetAllFiles($sPath)
; Parameters ....: $sPath               - a string value.
; Return values .: None
; Author ........: Your Name
; Modified ......:
; Remarks .......:
; Related .......:
; Link ..........:
; Example .......: No
; ===============================================================================================================================
Func GetAllFiles($sPath)
   Local $av
   If $sPath <> "" Then
   $av = _FileListToArrayRec($sPath,"*.cpp",$FLTAR_FILES,$FLTAR_RECUR,$FLTAR_SORT,$FLTAR_RELPATH )
	  Return $av
   Else
	  SetError(1,0,-1)
   EndIf
   Return
EndFunc

