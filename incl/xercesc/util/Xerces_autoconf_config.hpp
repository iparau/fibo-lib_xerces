/* src/xercesc/util/Xerces_autoconf_config.hpp.  Generated from Xerces_autoconf_config.hpp.in by configure.  */
/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * $Id: Xerces_autoconf_config.hpp.in 834826 2009-11-11 10:03:53Z borisk $
 */

//
// There are two primary xerces configuration header files:
//
//	Xerces_autoconf_config.hpp
//
//      For configuration of items that must be accessable
//	through public headers. This file has limited information
//	and carefully works to avoid collision of macro names, etc.
//
//	This file is included by XercesDefs.h. In the event
//	of a non-configured platform, a similar header specific
//	to the platform will be included instead.
//
//	config.h					
//
//      Generalized autoconf header file, with much more
//	information, used to supply configuration information
//	for use in implementation files.
//
// For autoconf based builds, this header is configured from by the configure
// script from the .in template file of the same name.


#ifndef XERCES_AUTOCONFIG_CONFIG_HPP
#define XERCES_AUTOCONFIG_CONFIG_HPP

#ifdef PLATFORM_WIN32
	#include	<xercesc/util/Xerces_autoconf_config_win32.hpp>
#else
	#include	<xercesc/util/Xerces_autoconf_config_unix.hpp>
#endif

#endif
