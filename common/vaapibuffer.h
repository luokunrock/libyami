/*
 *  vaapicodecobject.h - Basic object used for decode/encode
 *
 *  Copyright (C) 2010-2011 Splitted-Desktop Systems
 *  Copyright (C) 2012 Intel Corporation
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation; either version 2.1
 *  of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free
 *  Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301 USA
 */

#ifndef VAAPI_CODEC_OBJECT_H
#define VAAPI_CODEC_OBJECT_H

#include "vaapitypes.h"

class VaapiBufObject {
public:
      VaapiBufObject(VADisplay display,
                     VAContextID context, 
                     uint32_t  bufType,
                     void     *param,
                     uint32_t size);
      ~VaapiBufObject();
      VABufferID getID();
      uint32_t getSize();
      void *map();
      void unmap();
 
private:
      VADisplay  mDisplay;
      VABufferID mBufID;
      void      *mBuf;
      uint32_t   mSize;
};

#endif /* VAAPI_CODEC_OBJECT_H */
