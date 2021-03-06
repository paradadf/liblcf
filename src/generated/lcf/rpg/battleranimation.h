/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_BATTLERANIMATION_H
#define LCF_RPG_BATTLERANIMATION_H

// Headers
#include <string>
#include <vector>
#include "lcf/enum_tags.h"
#include "lcf/rpg/battleranimationextension.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::BattlerAnimation class.
 */
namespace lcf {
namespace rpg {
	class BattlerAnimation {
	public:
		enum Speed {
			Speed_slow = 0,
			Speed_normal = 8,
			Speed_fast = 14
		};

		int ID = 0;
		std::string name;
		int32_t speed = 0;
		std::vector<BattlerAnimationExtension> base_data;
		std::vector<BattlerAnimationExtension> weapon_data;
	};
	inline std::ostream& operator<<(std::ostream& os, BattlerAnimation::Speed code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const BattlerAnimation& l, const BattlerAnimation& r) {
		return l.name == r.name
		&& l.speed == r.speed
		&& l.base_data == r.base_data
		&& l.weapon_data == r.weapon_data;
	}

	inline bool operator!=(const BattlerAnimation& l, const BattlerAnimation& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const BattlerAnimation& obj);
} // namespace rpg
} // namespace lcf

#endif
