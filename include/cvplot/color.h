#ifndef CVPLOT_COLOR_H
#define CVPLOT_COLOR_H

#include <string>

namespace cvplot {

struct Color {
  uint8_t r, g, b, a;
  Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255)
      : r(r), g(g), b(b), a(a) {}
  Color(const uint8_t *rgb, uint8_t a = 255)
      : Color(rgb[0], rgb[1], rgb[2], a) {}
  Color() : Color(0, 0, 0) {}

  Color alpha(uint8_t alpha) const;
  Color gamma(float gamma) const;
  float hue() const;

  static Color gray(uint8_t v);
  static Color hue(float hue);
  static Color cos(float hue);
  static Color index(uint8_t index, uint8_t density = 16, float avoid = 2.f,
                     float range = 2.f);
  static Color hash(const std::string &seed);
  static Color uniq(const std::string &name);
};

static const Color Color_Red = Color::hue(0.f);
static const Color Color_Orange = Color::hue(.5f);
static const Color Color_Yellow = Color::hue(1.f);
static const Color Color_Lawn = Color::hue(1.5f);
static const Color Color_Green = Color::hue(2.f);
static const Color Color_Aqua = Color::hue(2.5f);
static const Color Color_Cyan = Color::hue(3.f);
static const Color Color_Sky = Color::hue(3.5f);
static const Color Color_Blue = Color::hue(4.f);
static const Color Color_Purple = Color::hue(4.5f);
static const Color Color_Magenta = Color::hue(5.f);
static const Color Color_Pink = Color::hue(5.5f);
static const Color Color_Black = Color::gray(0);
static const Color Color_Dark = Color::gray(32);
static const Color Color_Gray = Color::gray(128);
static const Color Color_Light = Color::gray(223);
static const Color Color_White = Color::gray(255);

}  // namespace cvplot

#endif  // CVPLOT_COLOR_H
