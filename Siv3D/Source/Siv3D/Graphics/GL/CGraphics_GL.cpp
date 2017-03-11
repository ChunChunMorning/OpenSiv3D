﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2017 Ryo Suzuki
//	Copyright (c) 2016-2017 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include <Siv3D/Platform.hpp>
# if defined(SIV3D_TARGET_MACOS) || defined(SIV3D_TARGET_LINUX)

# include "CGraphics_GL.hpp"

namespace s3d
{
	CGraphics_GL::CGraphics_GL()
	{

	}

	CGraphics_GL::~CGraphics_GL()
	{

	}

	bool CGraphics_GL::init()
	{
		return true;
	}
}

# endif