#pragma once

// 2.9 심볼릭 상수 Symbolic Constants 
// 헤더파일

// 다른 방법으로 const가 모아지는 방법.
// 헤더로 이용할 것이다.
// 이렇게 모아서 const 사용하는 것은 편리성을 위해 쓰는 것이다.

namespace constants
{
	constexpr double pi(3.141592);
	constexpr double avogadro(6.0221413e23);
	constexpr double moon_gravity(9.8/6.0);
}
