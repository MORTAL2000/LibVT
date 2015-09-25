//
//  Scene.h
//  Core3D
//
//  Created by Julian Mayer on 16.11.07.
//  Copyright 2007 - 2010 A. Julian Mayer.
//
/*
This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation; either version 3.0 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along with this library; if not, see <http://www.gnu.org/licenses/> or write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

@interface Scene : NSObject
{
	Camera *camera;
	NSMutableArray *lights;
	NSMutableArray *objects;
	id simulator;
}

@property (readonly, nonatomic) Camera *camera;
@property (retain, nonatomic) NSMutableArray *lights;
@property (retain, nonatomic) NSMutableArray *objects;
@property (retain, nonatomic) id simulator;

+ sharedScene;
- (void)update;
- (void)render;
- (void)reshape:(NSArray *)size;

@end