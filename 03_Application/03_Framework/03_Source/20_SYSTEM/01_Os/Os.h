///*******************************************************************************
// *         ad88888ba             88          88   ,ad8888ba,                   *
// *        d8"     "8b            ""          88  d8"'    `"8b                  *
// *        Y8,                                88 d8'                            *
// *        `Y8aaaaa,    ,adPPYba, 88  ,adPPYb,88 88                             *
// *          `"""""8b, a8P_____88 88 a8"    `Y88 88                             *
// *                `8b 8PP""""""" 88 8b       88 Y8,                            *
// *        Y8a     a8P "8b,   ,aa 88 "8a,   ,d88  Y8a.    .a8P                  *
// *         "Y88888P"   `"Ybbd8"' 88  `"8bbdP"Y8   `"Y8888Y"'                   *
// *                                                                             *
// *			Filename......: [ Os.h  ]                                    *
// *          Date..........: [ DATE        ]                                    *
// *          Version.......: [ VERSION     ]                                    *
// *                                                                             *
// *          Description...: [ DESCRIPTION ]                                    *
// *                                                                             *
// *                                                                             *
// *******************************************************************************/
//
//#ifndef OS_H_INCLUDED
//#define OS_H_INCLUDED
//
///*=== Includes ================================================================*/
//#include "Std_Types.h"
///*=== Version Check ===========================================================*/
///**
// * Major version of the Os module
// */
//#define OS_MAJOR_VERSION_H    					0u
///**
// * Minor version of the Os module
// */
//#define OS_MINOR_VERSION_H					1u
// /**
//  * Patch version of the Os module
//  */
//#define OS_PATCH_VERSION_H					0u
//
///*=== Datatypes ===============================================================*/
//
///*=== Variables (Global) ======================================================*/
//
///*=== Variables (Local) =======================================================*/
//
///*=== Function Declaration ====================================================*/
//
///*=== Functions ===============================================================*/
//
//class Os
//{
//	public:  //Enumerates
//	enum Register
//	{
//		COUNTER_CONTROL_REGISTER_A = 0x00,
//		COUNTER_CONTROL_REGISTER_B		 ,
//		COUNTER_CONTROL_REGISTER_C		 ,
//		INTERRUPT_MASK_REGISTER			 ,
//	};
//
//	enum Value
//	{
//		/*--- COUNTER_CONTROL_REGISTER_A ---*/
//		NORMAL_OPERATION				= 0x00,
//		TOGGLE_OCXA_ON_COMPARE_MATCH	= 0x01,
//		CLEAR_OCXA_ON_COMPARE_MATCH		= 0x02,
//		SET_OCXA_ON_COMPARE_MATCH		= 0x03,
//
//		/*--- COUNTER_CONTROL_REGISTER_B ---*/
//		INPUT_CAPTURE_NOISE_FILTER_DISABLE	= 0x01,
//		INPUT_CAPTURE_NOISE_FILTER_ENABLE	= 0x01,
//
//		INPUT_CAPTURE_EDGE_SELECT_DISABLE	= 0x00,
//		INPUT_CAPTURE_EDGE_SELECT_ENABLE	= 0x00,
//
//		TIMER_STOPPED						= 0x00,
//		CLOCK_PRESCALER_1					= 0x01,
//		CLOCK_PRESCALER_8					= 0x02,
//		CLOCK_PRESCALER_64					= 0x03,
//		CLOCK_PRESCALER_256					= 0x04,
//		CLOCK_PRESCALER_1024				= 0x05,
//
//		/*--- COUNTER_CONTROL_REGISTER_C ---*/
//		FORCE_OUTPUT_COMPARE_DISABLE		= 0x00,
//		FORCE_OUTPUT_COMPARE_ENABLE			= 0x01,
//
//		/*--- COUNTER_CONTROL_REGISTER_A/B ---*/
//		WAVEFORM_GENERATION_MODE_NORMAL		= 0x00,
//
//		/*--- INTERRUPT_MASK_REGISTER ---*/
//		INPUT_CAPTURE_INTERRUPT_ENABLE_DISABLE = 0x00,
//		INPUT_CAPTURE_INTERRUPT_ENABLE_ENABLE  = 0x01,
//
//		OUTPUT_COMPARE_MATCH_INTERRUPT_DISABLE = 0x00,
//		OUTPUT_COMPARE_MATCH_INTERRUPT_ENABLE  = 0x01,
//
//		TIMER_OVERFLOW_INTERRUPT_ENABLE_DISABLE = 0x00,
//		TIMER_OVERFLOW_INTERRUPT_ENABLE_ENALBE  = 0x01,
//
//
//
//	};
//
//	enum Bits
//	{
//		/*--- COUNTER_CONTROL_REGISTER_A ---*/
//		COMPARE_OUTPUT_MODE_A					= COM1A0,
//		COMPARE_OUTPUT_MODE_B					= COM1B0,
//
//		/*--- COUNTER_CONTROL_REGISTER_B ---*/
//		INPUT_CAPTURE_NOISE_CANCLER				= ICNC1,
//		INPUT_CAPTURE_EDGE_SELECT				= ICES1,
//		CLOCK_SELECT							= CS10 ,
//
//		/*--- COUNTER_CONTROL_REGISTER_A/B ---*/
//		WAVEFORM_GENERATION_MODE				= 0xFF,
//
//		/*--- COUNTER_CONTROL_REGISTER_C ---*/
//		FORCE_OUTPUT_COMPARE_CH_A				= FOC1A,
//		FORCE_OUTPUT_COMPARE_CH_B				= FOC1B,
//
//		/*--- INTERRUPT_MASK_REGISTER ---*/
//		INPUT_CAPTURE_INTERRUPT_ENABLE			= ICIE1,
//		OUTPUT_COMPARE_B_MATCH_INTERRUPT_ENABLE = OCIE1B,
//		OUTPUT_COMPARE_A_MATCH_INTERRUPT_ENABLE = OCIE1A,
//		TIMER_OVERFLOW_INTERRUPT_ENABLE			= TOIE1,
//
//	};
//
//	private: //Params
//		static Os* me;
//		static bool osCreated;
//
//	private: //Functions
//		void setupTimer(void);
//		void setRegister(Register reg,  Bits bits , Value value);
//
//	private: //Static Function
//		static Os* createInstance(void);
//
//	public: //Functions
//		void initApp(void);
//		void startOs(void);
//
//	public: //Static Functions
//		static Os* newOs(void);
//		static Os* getOs(void);
//
//	private:
//		Os(void);
//
//};
//
//
//
//#endif // OS_H_INCLUDED
