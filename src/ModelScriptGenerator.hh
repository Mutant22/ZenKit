// Copyright © 2022-2023 GothicKit Contributors.
// SPDX-License-Identifier: MIT
#pragma once
#include "zenkit/ModelScript.hh"

#include <string>

namespace zenkit {
	class Write;

	class MdsGenerator {
	public:
		explicit MdsGenerator(Write* w, const std::string& model_name);

		void generate_script(const ModelScript& script);

	private:
		void write_skeleton(const MdsSkeleton& skeleton);
		void write_mesh(const std::string& mesh);
		void write_animation(const MdsAnimation& ani);
		void write_animation_alias(const MdsAnimationAlias& alias);
		void write_animation_blend(const MdsAnimationBlend& blend);
		void write_animation_combine(const MdsAnimationCombine& comb);
		void write_disabled_animation(const std::string& ani);
		void write_model_tag(const MdsModelTag& tag);
		void write_event_tag(const MdsEventTag& event);
		void write_event_sfx(const MdsSoundEffect& sfx);
		void write_event_sfx_ground(const MdsSoundEffectGround& sfx);
		void write_event_pfx(const MdsParticleEffect& pfx);
		void write_event_pfx_stop(const MdsParticleEffectStop& pfx);
		void write_event_morph(const MdsMorphAnimation& morph);
		void write_event_tremor(const MdsCameraTremor& tremor);
		std::string format_flags(AnimationFlags flags);
		std::string format_direction(AnimationDirection dir);

		Write* _m_writer;
		std::string _m_model_name;
	};

	class MdsBinaryGenerator {
	public:
		explicit MdsBinaryGenerator(Write* w, const std::string& model_name);

		void generate_script(const ModelScript& script);

	private:
		void write_skeleton(const MdsSkeleton& skeleton);
		void write_mesh(const std::string& mesh);
		void write_animation(const MdsAnimation& ani);
		void write_animation_alias(const MdsAnimationAlias& alias);
		void write_animation_blend(const MdsAnimationBlend& blend);
		void write_animation_combine(const MdsAnimationCombine& comb);
		void write_disabled_animation(const std::string& name);
		void write_model_tag(const MdsModelTag& tag);
		void write_event_tag(const MdsEventTag& event);
		void write_event_sfx(const MdsSoundEffect& sfx);
		void write_event_sfx_ground(const MdsSoundEffectGround& sfx);
		void write_event_pfx(const MdsParticleEffect& pfx);
		void write_event_pfx_stop(const MdsParticleEffectStop& pfx);
		void write_event_morph(const MdsMorphAnimation& morph);
		void write_event_tremor(const MdsCameraTremor& tremor);
		std::string format_flags(AnimationFlags flags);

		Write* _m_writer;
		std::string _m_model_name;
	};
} // namespace zenkit
