/*---------------------------------------------------------------------------*/
/*
**  shuke.wang@memblaze.com
**  2015/08~09
*----------------------------------------------------------------------------*/
#include "LookupManager1Core.h"




namespace Lookup1 {

	/*---------------------------------------------------------------------------*/
	// 
#include "FwDummyManager.h"

	CLookupManager1Core::CLookupManager1Core() : m_pfnLookupManagerInit(nullptr)
											   , m_pfnLookupManagerPoll(nullptr)
	{

	}

	CLookupManager1Core::~CLookupManager1Core() 
	{


	}


} // end namespace Lookup1