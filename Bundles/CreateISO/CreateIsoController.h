/* vim: set ft=objc ts=4 et sw=4 nowrap: */
/*
 *  CreateIsoController.h
 *
 *  Copyright (c) 2005
 *
 *  Author: Andreas Schik <aheppel@web.de>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef CREATEISOCONTROLLER_H_INC
#define CREATEISOCONTROLLER_H_INC

#include <AppKit/AppKit.h>

#include "ExternalTools.h"

@interface CreateIsoController : NSObject <BurnTool, IsoImageCreator>
{
	NSLock *statusLock;
	ToolStatus toolStatus;
}

- (BOOL) getFiles: (NSArray *)trackArray
   withParameters: (NSDictionary *)parameters
           volume: (struct iso_volume *)volume;

- (void) sendOutputString: (NSString *)outString
                 priority: (NSString *)priority;

@end

#endif
