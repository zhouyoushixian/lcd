/*
 * @Author: test 3402502077@qq.com
 * @Date: 2024-05-11 23:08:57
 * @LastEditors: test 3402502077@qq.com
 * @LastEditTime: 2024-05-12 21:15:22
 * @FilePath: \LED of flowing waterc:\Users\liuhaohan\Documents\PlatformIO\Projects\lcd\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(3, 5, 10, 11, 12, 13);//初始化几个LCD需要使用的引脚，这里面的“rs”“en”等应换成你所连的引脚

// put function declarations here:

void setup() {
  lcd.begin(16, 2);
}
void loop() {   
  lcd.setCursor(0, 0);
  lcd.print("hello, world!");
  lcd.setCursor(0 ,1);
  lcd.print("lhh");
}
