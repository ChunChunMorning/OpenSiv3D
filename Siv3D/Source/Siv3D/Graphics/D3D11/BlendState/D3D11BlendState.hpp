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
# if defined(SIV3D_TARGET_WINDOWS)

# define  NOMINMAX
# define  STRICT
# define  WIN32_LEAN_AND_MEAN
# define  _WIN32_WINNT _WIN32_WINNT_WIN7
# define  NTDDI_VERSION NTDDI_WIN7
# include <Windows.h>
# include <wrl.h>
# include <d3d11.h>
# include <Siv3D/HashMap.hpp>
# include <Siv3D/BlendState.hpp>

using namespace Microsoft::WRL;

namespace s3d
{
	const BlendState NullBlendState(false, Blend(0));

	class D3D11BlendState
	{
	private:

		ID3D11Device* m_device = nullptr;

		ID3D11DeviceContext* m_context = nullptr;

		using BlendStateList = HashMap<BlendState, ComPtr<ID3D11BlendState>>;

		BlendStateList m_states;

		BlendState m_currentState = NullBlendState;

		BlendStateList::iterator create(const BlendState& state);

	public:

		D3D11BlendState(ID3D11Device* device, ID3D11DeviceContext* context);

		void set(const BlendState& state);
	};
}

# endif
