import Foundation
//import UIKit
enum OceanColor: Int{
    
    static let count = 6
    static let startColor = OceanColor.Sky1
    static let endColor = OceanColor.Sky1
    
    case Sky1 = 0x264890
    case Sky2 = 0x3884CF
    case Ocean1 = 0x0FD4CB
    case Ocean2 = 0x67D29E
    case Beach1 = 0xB7C0A5
    case Beach2 = 0xDFD2C1
    
    static func hexToRgb(hex: Int) -> (r: CGFloat, g: CGFloat, b: CGFloat){
        return (r: CGFloat((hex >> 16) & 0xff) / 255, g: CGFloat((hex >> 16) & 0xff) / 255, b: CGFloat((hex >> 16) & 0xff) / 255)
    }
    static func UIColor(hex: Int) -> UIColor{
        let rgb = OceanColor.hexToRgb(hex)
        return UIColor(red: rgb.r, green: rgb.g, blue: rgb.b, alpha: 1.0)
    }
}




/*вид 0x00BBGGRR, где RR - значение интенсивности красной компоненты цвета, GG - зеленной, а BB - синей.
Десятичные константы не имеют прямого отражения в RGB.
Они представляют собой десятичное значение шестнадцатеричного целочисленного представления.
*/