// Copyright (C) 2009-2020 Yann Colette
// 
//  This file is a part of GetFEM++
// 
//  GetFEM++  is  free software;  you  can  redistribute  it  and/or modify it
//  under  the  terms  of the  GNU  Lesser General Public License as published
//  by  the  Free Software Foundation;  either version 3 of the License,  or
//  (at your option) any later version along with the GCC Runtime Library
//  Exception either version 3.1 or (at your option) any later version.
//  This program  is  distributed  in  the  hope  that it will be useful,  but
//  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
//  or  FITNESS  FOR  A PARTICULAR PURPOSE.  See the GNU Lesser General Public
//  License and GCC Runtime Library Exception for more details.
//  You  should  have received a copy of the GNU Lesser General Public License
//  along  with  this program;  if not, write to the Free Software Foundation,
//  Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301, USA.

gf_workspace('clear all');
lines(0);

gf_workspace('stats');
gf_workspace('push');
m  = gf_mesh('empty',1);
mf = gf_mesh_fem(m);
gf_workspace('stats');
gf_workspace('pop');
gf_workspace('push','foo');
m  = gf_mesh('empty',2);
mf = gf_mesh_fem(m);
gf_workspace('keep',mf);
gf_workspace('pop');
gf_workspace('stats');
gf_delete(mf);
asserterr('gf_delete(mf)');
gf_workspace('stats');
gf_workspace('clear all');
