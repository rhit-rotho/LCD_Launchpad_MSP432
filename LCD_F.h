#ifdef __cplusplus
extern "C" {
#endif

#include <iomacros.h>

/************************************************************
* LCD_E
************************************************************/
#define __MSP430_HAS_LCD_E__          /* Definition to show that Module is available */
#define __MSP430_BASEADDRESS_LCD_E__ 0x0600
#define LCD_E_BASE __MSP430_BASEADDRESS_LCD_E__

#define LCDCTL0_              0x0600    /* LCD_E Control Register 0 */
sfrb(LCDCTL0_L , LCDCTL0_);
sfrb(LCDCTL0_H , LCDCTL0_+1);
sfrw(LCDCTL0, LCDCTL0_);
#define LCDCTL1_              0x0602    /* LCD_E Control Register 1 */
sfrb(LCDCTL1_L , LCDCTL1_);
sfrb(LCDCTL1_H , LCDCTL1_+1);
sfrw(LCDCTL1, LCDCTL1_);
#define LCDBLKCTL_            0x0604    /* LCD_E blinking control register */
sfrb(LCDBLKCTL_L , LCDBLKCTL_);
sfrb(LCDBLKCTL_H , LCDBLKCTL_+1);
sfrw(LCDBLKCTL, LCDBLKCTL_);
#define LCDMEMCTL_            0x0606    /* LCD_E memory control register */
sfrb(LCDMEMCTL_L , LCDMEMCTL_);
sfrb(LCDMEMCTL_H , LCDMEMCTL_+1);
sfrw(LCDMEMCTL, LCDMEMCTL_);
#define LCDVCTL_              0x0608    /* LCD_E Voltage Control Register */
sfrb(LCDVCTL_L , LCDVCTL_);
sfrb(LCDVCTL_H , LCDVCTL_+1);
sfrw(LCDVCTL, LCDVCTL_);
#define LCDPCTL0_             0x060A    /* LCD_E Port Control Register 0 */
sfrb(LCDPCTL0_L , LCDPCTL0_);
sfrb(LCDPCTL0_H , LCDPCTL0_+1);
sfrw(LCDPCTL0, LCDPCTL0_);
#define LCDPCTL1_             0x060C    /* LCD_E Port Control Register 1 */
sfrb(LCDPCTL1_L , LCDPCTL1_);
sfrb(LCDPCTL1_H , LCDPCTL1_+1);
sfrw(LCDPCTL1, LCDPCTL1_);
#define LCDPCTL2_             0x060E    /* LCD_E Port Control Register 2 */
sfrb(LCDPCTL2_L , LCDPCTL2_);
sfrb(LCDPCTL2_H , LCDPCTL2_+1);
sfrw(LCDPCTL2, LCDPCTL2_);
#define LCDCSSEL0_            0x0614    /* LCD_E COM/SEG select register 0 */
sfrb(LCDCSSEL0_L , LCDCSSEL0_);
sfrb(LCDCSSEL0_H , LCDCSSEL0_+1);
sfrw(LCDCSSEL0, LCDCSSEL0_);
#define LCDCSSEL1_            0x0616    /* LCD_E COM/SEG select register 1 */
sfrb(LCDCSSEL1_L , LCDCSSEL1_);
sfrb(LCDCSSEL1_H , LCDCSSEL1_+1);
sfrw(LCDCSSEL1, LCDCSSEL1_);
#define LCDCSSEL2_            0x0618    /* LCD_E COM/SEG select register 2 */
sfrb(LCDCSSEL2_L , LCDCSSEL2_);
sfrb(LCDCSSEL2_H , LCDCSSEL2_+1);
sfrw(LCDCSSEL2, LCDCSSEL2_);
#define LCDIV_                0x061E    /* LCD_E Interrupt Vector Register */
sfrw(LCDIV, LCDIV_);

// LCDCTL0
#define LCDON               (0x0001)  /* LCD_E LCD On */
#define LCDLP               (0x0002)  /* LCD_E Low Power Waveform */
#define LCDSON              (0x0004)  /* LCD_E LCD Segments On */
#define LCDMX0              (0x0008)  /* LCD_E Mux Rate Bit: 0 */
#define LCDMX1              (0x0010)  /* LCD_E Mux Rate Bit: 1 */
#define LCDMX2              (0x0020)  /* LCD_E Mux Rate Bit: 2 */
#define LCDSSEL0            (0x0040)  /* LCD_E Clock Select Bit: 0 */
#define LCDSSEL1            (0x0080)  /* LCD_E Clock Select Bit: 1 */
#define LCDDIV0             (0x0800)  /* LCD_E LCD frequency divider Bit: 0 */
#define LCDDIV1             (0x1000)  /* LCD_E LCD frequency divider Bit: 1 */
#define LCDDIV2             (0x2000)  /* LCD_E LCD frequency divider Bit: 2 */
#define LCDDIV3             (0x4000)  /* LCD_E LCD frequency divider Bit: 3 */
#define LCDDIV4             (0x8000)  /* LCD_E LCD frequency divider Bit: 4 */

// LCDCTL0
#define LCDON_L             (0x0001)  /* LCD_E LCD On */
#define LCDLP_L             (0x0002)  /* LCD_E Low Power Waveform */
#define LCDSON_L            (0x0004)  /* LCD_E LCD Segments On */
#define LCDMX0_L            (0x0008)  /* LCD_E Mux Rate Bit: 0 */
#define LCDMX1_L            (0x0010)  /* LCD_E Mux Rate Bit: 1 */
#define LCDMX2_L            (0x0020)  /* LCD_E Mux Rate Bit: 2 */
#define LCDSSEL0_L          (0x0040)  /* LCD_E Clock Select Bit: 0 */
#define LCDSSEL1_L          (0x0080)  /* LCD_E Clock Select Bit: 1 */

// LCDCTL0
#define LCDDIV0_H           (0x0008)  /* LCD_E LCD frequency divider Bit: 0 */
#define LCDDIV1_H           (0x0010)  /* LCD_E LCD frequency divider Bit: 1 */
#define LCDDIV2_H           (0x0020)  /* LCD_E LCD frequency divider Bit: 2 */
#define LCDDIV3_H           (0x0040)  /* LCD_E LCD frequency divider Bit: 3 */
#define LCDDIV4_H           (0x0080)  /* LCD_E LCD frequency divider Bit: 4 */

#define LCDSSEL_0           (0x0000)  /* LCD_E Clock Select: 0 */
#define LCDSSEL_1           (0x0040)  /* LCD_E Clock Select: 1 */
#define LCDSSEL_2           (0x0080)  /* LCD_E Clock Select: 2 */
#define LCDSSEL_3           (0x00C0)  /* LCD_E Clock Select: 3 */
#define LCDSSEL__XTCLK      (0x0000)  /* LCD_E Clock Select: XTCLK */
#define LCDSSEL__ACLK       (0x0040)  /* LCD_E Clock Select: ACLK */
#define LCDSSEL__VLOCLK     (0x0080)  /* LCD_E Clock Select: VLOCLK */

#define LCDDIV_0            (0x0000)  /* LCD_E LCD frequency divider: /1 */
#define LCDDIV_1            (0x0800)  /* LCD_E LCD frequency divider: /2 */
#define LCDDIV_2            (0x1000)  /* LCD_E LCD frequency divider: /3 */
#define LCDDIV_3            (0x1800)  /* LCD_E LCD frequency divider: /4 */
#define LCDDIV_4            (0x2000)  /* LCD_E LCD frequency divider: /5 */
#define LCDDIV_5            (0x2800)  /* LCD_E LCD frequency divider: /6 */
#define LCDDIV_6            (0x3000)  /* LCD_E LCD frequency divider: /7 */
#define LCDDIV_7            (0x3800)  /* LCD_E LCD frequency divider: /8 */
#define LCDDIV_8            (0x4000)  /* LCD_E LCD frequency divider: /9 */
#define LCDDIV_9            (0x4800)  /* LCD_E LCD frequency divider: /10 */
#define LCDDIV_10           (0x5000)  /* LCD_E LCD frequency divider: /11 */
#define LCDDIV_11           (0x5800)  /* LCD_E LCD frequency divider: /12 */
#define LCDDIV_12           (0x6000)  /* LCD_E LCD frequency divider: /13 */
#define LCDDIV_13           (0x6800)  /* LCD_E LCD frequency divider: /14 */
#define LCDDIV_14           (0x7000)  /* LCD_E LCD frequency divider: /15 */
#define LCDDIV_15           (0x7800)  /* LCD_E LCD frequency divider: /16 */
#define LCDDIV_16           (0x8000)  /* LCD_E LCD frequency divider: /17 */
#define LCDDIV_17           (0x8800)  /* LCD_E LCD frequency divider: /18 */
#define LCDDIV_18           (0x9000)  /* LCD_E LCD frequency divider: /19 */
#define LCDDIV_19           (0x9800)  /* LCD_E LCD frequency divider: /20 */
#define LCDDIV_20           (0xA000)  /* LCD_E LCD frequency divider: /21 */
#define LCDDIV_21           (0xA800)  /* LCD_E LCD frequency divider: /22 */
#define LCDDIV_22           (0xB000)  /* LCD_E LCD frequency divider: /23 */
#define LCDDIV_23           (0xB800)  /* LCD_E LCD frequency divider: /24 */
#define LCDDIV_24           (0xC000)  /* LCD_E LCD frequency divider: /25 */
#define LCDDIV_25           (0xC800)  /* LCD_E LCD frequency divider: /26 */
#define LCDDIV_26           (0xD000)  /* LCD_E LCD frequency divider: /27 */
#define LCDDIV_27           (0xD800)  /* LCD_E LCD frequency divider: /28 */
#define LCDDIV_28           (0xE000)  /* LCD_E LCD frequency divider: /29 */
#define LCDDIV_29           (0xE800)  /* LCD_E LCD frequency divider: /30 */
#define LCDDIV_30           (0xF000)  /* LCD_E LCD frequency divider: /31 */
#define LCDDIV_31           (0xF800)  /* LCD_E LCD frequency divider: /32 */
#define LCDDIV__1           (0x0000)  /* LCD_E LCD frequency divider: /1 */
#define LCDDIV__2           (0x0800)  /* LCD_E LCD frequency divider: /2 */
#define LCDDIV__3           (0x1000)  /* LCD_E LCD frequency divider: /3 */
#define LCDDIV__4           (0x1800)  /* LCD_E LCD frequency divider: /4 */
#define LCDDIV__5           (0x2000)  /* LCD_E LCD frequency divider: /5 */
#define LCDDIV__6           (0x2800)  /* LCD_E LCD frequency divider: /6 */
#define LCDDIV__7           (0x3000)  /* LCD_E LCD frequency divider: /7 */
#define LCDDIV__8           (0x3800)  /* LCD_E LCD frequency divider: /8 */
#define LCDDIV__9           (0x4000)  /* LCD_E LCD frequency divider: /9 */
#define LCDDIV__10          (0x4800)  /* LCD_E LCD frequency divider: /10 */
#define LCDDIV__11          (0x5000)  /* LCD_E LCD frequency divider: /11 */
#define LCDDIV__12          (0x5800)  /* LCD_E LCD frequency divider: /12 */
#define LCDDIV__13          (0x6000)  /* LCD_E LCD frequency divider: /13 */
#define LCDDIV__14          (0x6800)  /* LCD_E LCD frequency divider: /14 */
#define LCDDIV__15          (0x7000)  /* LCD_E LCD frequency divider: /15 */
#define LCDDIV__16          (0x7800)  /* LCD_E LCD frequency divider: /16 */
#define LCDDIV__17          (0x8000)  /* LCD_E LCD frequency divider: /17 */
#define LCDDIV__18          (0x8800)  /* LCD_E LCD frequency divider: /18 */
#define LCDDIV__19          (0x9000)  /* LCD_E LCD frequency divider: /19 */
#define LCDDIV__20          (0x9800)  /* LCD_E LCD frequency divider: /20 */
#define LCDDIV__21          (0xA000)  /* LCD_E LCD frequency divider: /21 */
#define LCDDIV__22          (0xA800)  /* LCD_E LCD frequency divider: /22 */
#define LCDDIV__23          (0xB000)  /* LCD_E LCD frequency divider: /23 */
#define LCDDIV__24          (0xB800)  /* LCD_E LCD frequency divider: /24 */
#define LCDDIV__25          (0xC000)  /* LCD_E LCD frequency divider: /25 */
#define LCDDIV__26          (0xC800)  /* LCD_E LCD frequency divider: /26 */
#define LCDDIV__27          (0xD000)  /* LCD_E LCD frequency divider: /27 */
#define LCDDIV__28          (0xD800)  /* LCD_E LCD frequency divider: /28 */
#define LCDDIV__29          (0xE000)  /* LCD_E LCD frequency divider: /29 */
#define LCDDIV__30          (0xE800)  /* LCD_E LCD frequency divider: /30 */
#define LCDDIV__31          (0xF000)  /* LCD_E LCD frequency divider: /31 */
#define LCDDIV__32          (0xF800)  /* LCD_E LCD frequency divider: /32 */


/* Display modes coded with Bits 3-5 */
#define LCDSTATIC           (LCDSON)
#define LCD2MUX             (LCDMX0+LCDSON)
#define LCD3MUX             (LCDMX1+LCDSON)
#define LCD4MUX             (LCDMX1+LCDMX0+LCDSON)
#define LCD5MUX             (LCDMX2+LCDSON)
#define LCD6MUX             (LCDMX2+LCDMX0+LCDSON)
#define LCD7MUX             (LCDMX2+LCDMX1+LCDSON)
#define LCD8MUX             (LCDMX2+LCDMX1+LCDMX0+LCDSON)

// LCDCTL1
#define LCDFRMIFG           (0x0001)  /* LCD_E LCD frame interrupt flag */
#define LCDBLKOFFIFG        (0x0002)  /* LCD_E LCD blinking off interrupt flag, */
#define LCDBLKONIFG         (0x0004)  /* LCD_E LCD blinking on interrupt flag, */
#define LCDFRMIE            (0x0100)  /* LCD_E LCD frame interrupt enable */
#define LCDBLKOFFIE         (0x0200)  /* LCD_E LCD blinking off interrupt flag, */
#define LCDBLKONIE          (0x0400)  /* LCD_E LCD blinking on interrupt flag, */

// LCDCTL1
#define LCDFRMIFG_L         (0x0001)  /* LCD_E LCD frame interrupt flag */
#define LCDBLKOFFIFG_L      (0x0002)  /* LCD_E LCD blinking off interrupt flag, */
#define LCDBLKONIFG_L       (0x0004)  /* LCD_E LCD blinking on interrupt flag, */

// LCDCTL1
#define LCDFRMIE_H          (0x0001)  /* LCD_E LCD frame interrupt enable */
#define LCDBLKOFFIE_H       (0x0002)  /* LCD_E LCD blinking off interrupt flag, */
#define LCDBLKONIE_H        (0x0004)  /* LCD_E LCD blinking on interrupt flag, */

// LCDBLKCTL
#define LCDBLKMOD0          (0x0001)  /* LCD_E Blinking mode Bit: 0 */
#define LCDBLKMOD1          (0x0002)  /* LCD_E Blinking mode Bit: 1 */
#define LCDBLKPRE0          (0x0004)  /* LCD_E Clock pre-scaler for blinking frequency Bit: 0 */
#define LCDBLKPRE1          (0x0008)  /* LCD_E Clock pre-scaler for blinking frequency Bit: 1 */
#define LCDBLKPRE2          (0x0010)  /* LCD_E Clock pre-scaler for blinking frequency Bit: 2 */

// LCDBLKCTL
#define LCDBLKMOD0_L        (0x0001)  /* LCD_E Blinking mode Bit: 0 */
#define LCDBLKMOD1_L        (0x0002)  /* LCD_E Blinking mode Bit: 1 */
#define LCDBLKPRE0_L        (0x0004)  /* LCD_E Clock pre-scaler for blinking frequency Bit: 0 */
#define LCDBLKPRE1_L        (0x0008)  /* LCD_E Clock pre-scaler for blinking frequency Bit: 1 */
#define LCDBLKPRE2_L        (0x0010)  /* LCD_E Clock pre-scaler for blinking frequency Bit: 2 */


#define LCDBLKMOD_0         (0x0000)  /* LCD_E Blinking mode: Off */
#define LCDBLKMOD_1         (0x0001)  /* LCD_E Blinking mode: Individual */
#define LCDBLKMOD_2         (0x0002)  /* LCD_E Blinking mode: All */
#define LCDBLKMOD_3         (0x0003)  /* LCD_E Blinking mode: Switching */

#define LCDBLKPRE_0         (0x0000)  /* LCD_E Clock pre-scaler for blinking frequency: 0 */
#define LCDBLKPRE_1         (0x0004)  /* LCD_E Clock pre-scaler for blinking frequency: 1 */
#define LCDBLKPRE_2         (0x0008)  /* LCD_E Clock pre-scaler for blinking frequency: 2 */
#define LCDBLKPRE_3         (0x000C)  /* LCD_E Clock pre-scaler for blinking frequency: 3 */
#define LCDBLKPRE_4         (0x0010)  /* LCD_E Clock pre-scaler for blinking frequency: 4 */
#define LCDBLKPRE_5         (0x0014)  /* LCD_E Clock pre-scaler for blinking frequency: 5 */
#define LCDBLKPRE_6         (0x0018)  /* LCD_E Clock pre-scaler for blinking frequency: 6 */
#define LCDBLKPRE_7         (0x001C)  /* LCD_E Clock pre-scaler for blinking frequency: 7 */

#define LCDBLKPRE__4        (0x0000)  /* LCD_E Clock pre-scaler for blinking frequency: 4   */
#define LCDBLKPRE__8        (0x0004)  /* LCD_E Clock pre-scaler for blinking frequency: 8   */
#define LCDBLKPRE__16       (0x0008)  /* LCD_E Clock pre-scaler for blinking frequency: 16  */
#define LCDBLKPRE__32       (0x000C)  /* LCD_E Clock pre-scaler for blinking frequency: 32  */
#define LCDBLKPRE__64       (0x0010)  /* LCD_E Clock pre-scaler for blinking frequency: 64  */
#define LCDBLKPRE__128      (0x0014)  /* LCD_E Clock pre-scaler for blinking frequency: 128 */
#define LCDBLKPRE__256      (0x0018)  /* LCD_E Clock pre-scaler for blinking frequency: 256 */
#define LCDBLKPRE__512      (0x001C)  /* LCD_E Clock pre-scaler for blinking frequency: 512 */

// LCDMEMCTL
#define LCDDISP             (0x0001)  /* LCD_E LCD memory registers for display */
#define LCDCLRM             (0x0002)  /* LCD_E Clear LCD memory */
#define LCDCLRBM            (0x0004)  /* LCD_E Clear LCD blinking memory */

// LCDMEMCTL
#define LCDDISP_L           (0x0001)  /* LCD_E LCD memory registers for display */
#define LCDCLRM_L           (0x0002)  /* LCD_E Clear LCD memory */
#define LCDCLRBM_L          (0x0004)  /* LCD_E Clear LCD blinking memory */


// LCDVCTL
#define LCDREFMODE          (0x0001)  /* Selects wether R13 voltage is switched or in static mode */
#define LCDSELVDD           (0x0020)  /* selects if R33 is supplied either from Vcc internally or from charge pump */
#define LCDREFEN            (0x0040)  /* Internal reference voltage enable on R13 */
#define LCDCPEN             (0x0080)  /* Charge pump enable */
#define VLCD0               (0x0100)  /* VLCD select: 0 */
#define VLCD1               (0x0200)  /* VLCD select: 1 */
#define VLCD2               (0x0400)  /* VLCD select: 2 */
#define VLCD3               (0x0800)  /* VLCD select: 3 */
#define LCDCPFSEL0          (0x1000)  /* Charge pump frequency selection Bit: 0 */
#define LCDCPFSEL1          (0x2000)  /* Charge pump frequency selection Bit: 1 */
#define LCDCPFSEL2          (0x4000)  /* Charge pump frequency selection Bit: 2 */
#define LCDCPFSEL3          (0x8000)  /* Charge pump frequency selection Bit: 3 */

// LCDVCTL
#define LCDREFMODE_L        (0x0001)  /* Selects wether R13 voltage is switched or in static mode */
#define LCDSELVDD_L         (0x0020)  /* selects if R33 is supplied either from Vcc internally or from charge pump */
#define LCDREFEN_L          (0x0040)  /* Internal reference voltage enable on R13 */
#define LCDCPEN_L           (0x0080)  /* Charge pump enable */

// LCDVCTL
#define VLCD0_H             (0x0001)  /* VLCD select: 0 */
#define VLCD1_H             (0x0002)  /* VLCD select: 1 */
#define VLCD2_H             (0x0004)  /* VLCD select: 2 */
#define VLCD3_H             (0x0008)  /* VLCD select: 3 */
#define LCDCPFSEL0_H        (0x0010)  /* Charge pump frequency selection Bit: 0 */
#define LCDCPFSEL1_H        (0x0020)  /* Charge pump frequency selection Bit: 1 */
#define LCDCPFSEL2_H        (0x0040)  /* Charge pump frequency selection Bit: 2 */
#define LCDCPFSEL3_H        (0x0080)  /* Charge pump frequency selection Bit: 3 */

/* Charge pump voltage selections */
#define VLCD_0              (0x0000)  /* VLCD = 2.60V */
#define VLCD_1              (0x0100)  /* VLCD = 2.66V */
#define VLCD_2              (0x0200)  /* VLCD = 2.72V */
#define VLCD_3              (0x0300)  /* VLCD = 2.78V */
#define VLCD_4              (0x0400)  /* VLCD = 2.84V */
#define VLCD_5              (0x0500)  /* VLCD = 2.90V */
#define VLCD_6              (0x0600)  /* VLCD = 2.96V */
#define VLCD_7              (0x0700)  /* VLCD = 3.02V */
#define VLCD_8              (0x0800)  /* VLCD = 3.08V */
#define VLCD_9              (0x0900)  /* VLCD = 3.14V */
#define VLCD_10             (0x0A00)  /* VLCD = 3.20V */
#define VLCD_11             (0x0B00)  /* VLCD = 3.26V */
#define VLCD_12             (0x0C00)  /* VLCD = 3.32V */
#define VLCD_13             (0x0D00)  /* VLCD = 3.38V */
#define VLCD_14             (0x0E00)  /* VLCD = 3.44V */
#define VLCD_15             (0x0F00)  /* VLCD = 3.50V */


// LCDPCTL0
#define LCDS0               (0x0001)  /* LCD Segment  0 enable. */
#define LCDS1               (0x0002)  /* LCD Segment  1 enable. */
#define LCDS2               (0x0004)  /* LCD Segment  2 enable. */
#define LCDS3               (0x0008)  /* LCD Segment  3 enable. */
#define LCDS4               (0x0010)  /* LCD Segment  4 enable. */
#define LCDS5               (0x0020)  /* LCD Segment  5 enable. */
#define LCDS6               (0x0040)  /* LCD Segment  6 enable. */
#define LCDS7               (0x0080)  /* LCD Segment  7 enable. */
#define LCDS8               (0x0100)  /* LCD Segment  8 enable. */
#define LCDS9               (0x0200)  /* LCD Segment  9 enable. */
#define LCDS10              (0x0400)  /* LCD Segment 10 enable. */
#define LCDS11              (0x0800)  /* LCD Segment 11 enable. */
#define LCDS12              (0x1000)  /* LCD Segment 12 enable. */
#define LCDS13              (0x2000)  /* LCD Segment 13 enable. */
#define LCDS14              (0x4000)  /* LCD Segment 14 enable. */
#define LCDS15              (0x8000)  /* LCD Segment 15 enable. */

// LCDPCTL0
#define LCDS0_L             (0x0001)  /* LCD Segment  0 enable. */
#define LCDS1_L             (0x0002)  /* LCD Segment  1 enable. */
#define LCDS2_L             (0x0004)  /* LCD Segment  2 enable. */
#define LCDS3_L             (0x0008)  /* LCD Segment  3 enable. */
#define LCDS4_L             (0x0010)  /* LCD Segment  4 enable. */
#define LCDS5_L             (0x0020)  /* LCD Segment  5 enable. */
#define LCDS6_L             (0x0040)  /* LCD Segment  6 enable. */
#define LCDS7_L             (0x0080)  /* LCD Segment  7 enable. */

// LCDPCTL0
#define LCDS8_H             (0x0001)  /* LCD Segment  8 enable. */
#define LCDS9_H             (0x0002)  /* LCD Segment  9 enable. */
#define LCDS10_H            (0x0004)  /* LCD Segment 10 enable. */
#define LCDS11_H            (0x0008)  /* LCD Segment 11 enable. */
#define LCDS12_H            (0x0010)  /* LCD Segment 12 enable. */
#define LCDS13_H            (0x0020)  /* LCD Segment 13 enable. */
#define LCDS14_H            (0x0040)  /* LCD Segment 14 enable. */
#define LCDS15_H            (0x0080)  /* LCD Segment 15 enable. */

// LCDPCTL1
#define LCDS16              (0x0001)  /* LCD Segment 16 enable. */
#define LCDS17              (0x0002)  /* LCD Segment 17 enable. */
#define LCDS18              (0x0004)  /* LCD Segment 18 enable. */
#define LCDS19              (0x0008)  /* LCD Segment 19 enable. */
#define LCDS20              (0x0010)  /* LCD Segment 20 enable. */
#define LCDS21              (0x0020)  /* LCD Segment 21 enable. */
#define LCDS22              (0x0040)  /* LCD Segment 22 enable. */
#define LCDS23              (0x0080)  /* LCD Segment 23 enable. */
#define LCDS24              (0x0100)  /* LCD Segment 24 enable. */
#define LCDS25              (0x0200)  /* LCD Segment 25 enable. */
#define LCDS26              (0x0400)  /* LCD Segment 26 enable. */
#define LCDS27              (0x0800)  /* LCD Segment 27 enable. */
#define LCDS28              (0x1000)  /* LCD Segment 28 enable. */
#define LCDS29              (0x2000)  /* LCD Segment 29 enable. */
#define LCDS30              (0x4000)  /* LCD Segment 30 enable. */
#define LCDS31              (0x8000)  /* LCD Segment 31 enable. */

// LCDPCTL1
#define LCDS16_L            (0x0001)  /* LCD Segment 16 enable. */
#define LCDS17_L            (0x0002)  /* LCD Segment 17 enable. */
#define LCDS18_L            (0x0004)  /* LCD Segment 18 enable. */
#define LCDS19_L            (0x0008)  /* LCD Segment 19 enable. */
#define LCDS20_L            (0x0010)  /* LCD Segment 20 enable. */
#define LCDS21_L            (0x0020)  /* LCD Segment 21 enable. */
#define LCDS22_L            (0x0040)  /* LCD Segment 22 enable. */
#define LCDS23_L            (0x0080)  /* LCD Segment 23 enable. */

// LCDPCTL1
#define LCDS24_H            (0x0001)  /* LCD Segment 24 enable. */
#define LCDS25_H            (0x0002)  /* LCD Segment 25 enable. */
#define LCDS26_H            (0x0004)  /* LCD Segment 26 enable. */
#define LCDS27_H            (0x0008)  /* LCD Segment 27 enable. */
#define LCDS28_H            (0x0010)  /* LCD Segment 28 enable. */
#define LCDS29_H            (0x0020)  /* LCD Segment 29 enable. */
#define LCDS30_H            (0x0040)  /* LCD Segment 30 enable. */
#define LCDS31_H            (0x0080)  /* LCD Segment 31 enable. */

// LCDPCTL2
#define LCDS32              (0x0001)  /* LCD Segment 32 enable. */
#define LCDS33              (0x0002)  /* LCD Segment 33 enable. */
#define LCDS34              (0x0004)  /* LCD Segment 34 enable. */
#define LCDS35              (0x0008)  /* LCD Segment 35 enable. */
#define LCDS36              (0x0010)  /* LCD Segment 36 enable. */
#define LCDS37              (0x0020)  /* LCD Segment 37 enable. */
#define LCDS38              (0x0040)  /* LCD Segment 38 enable. */
#define LCDS39              (0x0080)  /* LCD Segment 39 enable. */
#define LCDS40              (0x0100)  /* LCD Segment 40 enable. */
#define LCDS41              (0x0200)  /* LCD Segment 41 enable. */
#define LCDS42              (0x0400)  /* LCD Segment 42 enable. */
#define LCDS43              (0x0800)  /* LCD Segment 43 enable. */
#define LCDS44              (0x1000)  /* LCD Segment 44 enable. */
#define LCDS45              (0x2000)  /* LCD Segment 45 enable. */
#define LCDS46              (0x4000)  /* LCD Segment 46 enable. */
#define LCDS47              (0x8000)  /* LCD Segment 47 enable. */

// LCDPCTL2
#define LCDS32_L            (0x0001)  /* LCD Segment 32 enable. */
#define LCDS33_L            (0x0002)  /* LCD Segment 33 enable. */
#define LCDS34_L            (0x0004)  /* LCD Segment 34 enable. */
#define LCDS35_L            (0x0008)  /* LCD Segment 35 enable. */
#define LCDS36_L            (0x0010)  /* LCD Segment 36 enable. */
#define LCDS37_L            (0x0020)  /* LCD Segment 37 enable. */
#define LCDS38_L            (0x0040)  /* LCD Segment 38 enable. */
#define LCDS39_L            (0x0080)  /* LCD Segment 39 enable. */

// LCDPCTL2
#define LCDS40_H            (0x0001)  /* LCD Segment 40 enable. */
#define LCDS41_H            (0x0002)  /* LCD Segment 41 enable. */
#define LCDS42_H            (0x0004)  /* LCD Segment 42 enable. */
#define LCDS43_H            (0x0008)  /* LCD Segment 43 enable. */
#define LCDS44_H            (0x0010)  /* LCD Segment 44 enable. */
#define LCDS45_H            (0x0020)  /* LCD Segment 45 enable. */
#define LCDS46_H            (0x0040)  /* LCD Segment 46 enable. */
#define LCDS47_H            (0x0080)  /* LCD Segment 47 enable. */

// LCDCSSEL0
#define LCDCSS0             (0x0001)  /* Selects pin L0  as either common or segment line */
#define LCDCSS1             (0x0002)  /* Selects pin L1  as either common or segment line */
#define LCDCSS2             (0x0004)  /* Selects pin L2  as either common or segment line */
#define LCDCSS3             (0x0008)  /* Selects pin L3  as either common or segment line */
#define LCDCSS4             (0x0010)  /* Selects pin L4  as either common or segment line */
#define LCDCSS5             (0x0020)  /* Selects pin L5  as either common or segment line */
#define LCDCSS6             (0x0040)  /* Selects pin L6  as either common or segment line */
#define LCDCSS7             (0x0080)  /* Selects pin L7  as either common or segment line */
#define LCDCSS8             (0x0100)  /* Selects pin L8  as either common or segment line */
#define LCDCSS9             (0x0200)  /* Selects pin L9  as either common or segment line */
#define LCDCSS10            (0x0400)  /* Selects pin L10 as either common or segment line */
#define LCDCSS11            (0x0800)  /* Selects pin L11 as either common or segment line */
#define LCDCSS12            (0x1000)  /* Selects pin L12 as either common or segment line */
#define LCDCSS13            (0x2000)  /* Selects pin L13 as either common or segment line */
#define LCDCSS14            (0x4000)  /* Selects pin L14 as either common or segment line */
#define LCDCSS15            (0x8000)  /* Selects pin L15 as either common or segment line */

// LCDCSSEL0
#define LCDCSS0_L           (0x0001)  /* Selects pin L0  as either common or segment line */
#define LCDCSS1_L           (0x0002)  /* Selects pin L1  as either common or segment line */
#define LCDCSS2_L           (0x0004)  /* Selects pin L2  as either common or segment line */
#define LCDCSS3_L           (0x0008)  /* Selects pin L3  as either common or segment line */
#define LCDCSS4_L           (0x0010)  /* Selects pin L4  as either common or segment line */
#define LCDCSS5_L           (0x0020)  /* Selects pin L5  as either common or segment line */
#define LCDCSS6_L           (0x0040)  /* Selects pin L6  as either common or segment line */
#define LCDCSS7_L           (0x0080)  /* Selects pin L7  as either common or segment line */

// LCDCSSEL0
#define LCDCSS8_H           (0x0001)  /* Selects pin L8  as either common or segment line */
#define LCDCSS9_H           (0x0002)  /* Selects pin L9  as either common or segment line */
#define LCDCSS10_H          (0x0004)  /* Selects pin L10 as either common or segment line */
#define LCDCSS11_H          (0x0008)  /* Selects pin L11 as either common or segment line */
#define LCDCSS12_H          (0x0010)  /* Selects pin L12 as either common or segment line */
#define LCDCSS13_H          (0x0020)  /* Selects pin L13 as either common or segment line */
#define LCDCSS14_H          (0x0040)  /* Selects pin L14 as either common or segment line */
#define LCDCSS15_H          (0x0080)  /* Selects pin L15 as either common or segment line */

// LCDCSSEL1
#define LCDCSS16            (0x0001)  /* Selects pin L16 as either common or segment line */
#define LCDCSS17            (0x0002)  /* Selects pin L17 as either common or segment line */
#define LCDCSS18            (0x0004)  /* Selects pin L18 as either common or segment line */
#define LCDCSS19            (0x0008)  /* Selects pin L19 as either common or segment line */
#define LCDCSS20            (0x0010)  /* Selects pin L20 as either common or segment line */
#define LCDCSS21            (0x0020)  /* Selects pin L21 as either common or segment line */
#define LCDCSS22            (0x0040)  /* Selects pin L22 as either common or segment line */
#define LCDCSS23            (0x0080)  /* Selects pin L23 as either common or segment line */
#define LCDCSS24            (0x0100)  /* Selects pin L24 as either common or segment line */
#define LCDCSS25            (0x0200)  /* Selects pin L25 as either common or segment line */
#define LCDCSS26            (0x0400)  /* Selects pin L26 as either common or segment line */
#define LCDCSS27            (0x0800)  /* Selects pin L27 as either common or segment line */
#define LCDCSS28            (0x1000)  /* Selects pin L28 as either common or segment line */
#define LCDCSS29            (0x2000)  /* Selects pin L29 as either common or segment line */
#define LCDCSS30            (0x4000)  /* Selects pin L30 as either common or segment line */
#define LCDCSS31            (0x8000)  /* Selects pin L31 as either common or segment line */

// LCDCSSEL1
#define LCDCSS16_L          (0x0001)  /* Selects pin L16 as either common or segment line */
#define LCDCSS17_L          (0x0002)  /* Selects pin L17 as either common or segment line */
#define LCDCSS18_L          (0x0004)  /* Selects pin L18 as either common or segment line */
#define LCDCSS19_L          (0x0008)  /* Selects pin L19 as either common or segment line */
#define LCDCSS20_L          (0x0010)  /* Selects pin L20 as either common or segment line */
#define LCDCSS21_L          (0x0020)  /* Selects pin L21 as either common or segment line */
#define LCDCSS22_L          (0x0040)  /* Selects pin L22 as either common or segment line */
#define LCDCSS23_L          (0x0080)  /* Selects pin L23 as either common or segment line */

// LCDCSSEL1
#define LCDCSS24_H          (0x0001)  /* Selects pin L24 as either common or segment line */
#define LCDCSS25_H          (0x0002)  /* Selects pin L25 as either common or segment line */
#define LCDCSS26_H          (0x0004)  /* Selects pin L26 as either common or segment line */
#define LCDCSS27_H          (0x0008)  /* Selects pin L27 as either common or segment line */
#define LCDCSS28_H          (0x0010)  /* Selects pin L28 as either common or segment line */
#define LCDCSS29_H          (0x0020)  /* Selects pin L29 as either common or segment line */
#define LCDCSS30_H          (0x0040)  /* Selects pin L30 as either common or segment line */
#define LCDCSS31_H          (0x0080)  /* Selects pin L31 as either common or segment line */

// LCDCSSEL2
#define LCDCSS32            (0x0001)  /* Selects pin L32 as either common or segment line */
#define LCDCSS33            (0x0002)  /* Selects pin L33 as either common or segment line */
#define LCDCSS34            (0x0004)  /* Selects pin L34 as either common or segment line */
#define LCDCSS35            (0x0008)  /* Selects pin L35 as either common or segment line */
#define LCDCSS36            (0x0010)  /* Selects pin L36 as either common or segment line */
#define LCDCSS37            (0x0020)  /* Selects pin L37 as either common or segment line */
#define LCDCSS38            (0x0040)  /* Selects pin L38 as either common or segment line */
#define LCDCSS39            (0x0080)  /* Selects pin L39 as either common or segment line */
#define LCDCSS40            (0x0100)  /* Selects pin L40 as either common or segment line */
#define LCDCSS41            (0x0200)  /* Selects pin L41 as either common or segment line */
#define LCDCSS42            (0x0400)  /* Selects pin L42 as either common or segment line */
#define LCDCSS43            (0x0800)  /* Selects pin L43 as either common or segment line */
#define LCDCSS44            (0x1000)  /* Selects pin L44 as either common or segment line */
#define LCDCSS45            (0x2000)  /* Selects pin L45 as either common or segment line */
#define LCDCSS46            (0x4000)  /* Selects pin L46 as either common or segment line */
#define LCDCSS47            (0x8000)  /* Selects pin L47 as either common or segment line */

// LCDCSSEL2
#define LCDCSS32_L          (0x0001)  /* Selects pin L32 as either common or segment line */
#define LCDCSS33_L          (0x0002)  /* Selects pin L33 as either common or segment line */
#define LCDCSS34_L          (0x0004)  /* Selects pin L34 as either common or segment line */
#define LCDCSS35_L          (0x0008)  /* Selects pin L35 as either common or segment line */
#define LCDCSS36_L          (0x0010)  /* Selects pin L36 as either common or segment line */
#define LCDCSS37_L          (0x0020)  /* Selects pin L37 as either common or segment line */
#define LCDCSS38_L          (0x0040)  /* Selects pin L38 as either common or segment line */
#define LCDCSS39_L          (0x0080)  /* Selects pin L39 as either common or segment line */

// LCDCSSEL2
#define LCDCSS40_H          (0x0001)  /* Selects pin L40 as either common or segment line */
#define LCDCSS41_H          (0x0002)  /* Selects pin L41 as either common or segment line */
#define LCDCSS42_H          (0x0004)  /* Selects pin L42 as either common or segment line */
#define LCDCSS43_H          (0x0008)  /* Selects pin L43 as either common or segment line */
#define LCDCSS44_H          (0x0010)  /* Selects pin L44 as either common or segment line */
#define LCDCSS45_H          (0x0020)  /* Selects pin L45 as either common or segment line */
#define LCDCSS46_H          (0x0040)  /* Selects pin L46 as either common or segment line */
#define LCDCSS47_H          (0x0080)  /* Selects pin L47 as either common or segment line */

#define LCDM0W_               0x0620    /* LCD Memory 0/1 */
sfrb(LCDM0W_L , LCDM0W_);
sfrb(LCDM0W_H , LCDM0W_+1);
sfrw(LCDM0W, LCDM0W_);
#define LCDM0               LCDM0W_L  /* LCD Memory 0 */
#define LCDM1               LCDM0W_H  /* LCD Memory 1 */
#define LCDMEM_             LCDM0     /* LCD Memory */
#ifndef __STDC__
#define LCDMEM              LCDM0     /* LCD Memory (for assembler) */
#else
#define LCDMEM              ((volatile char*) &LCDM0) /* LCD Memory (for C) */
#endif
#define LCDM2W_               0x0622    /* LCD Memory 2/3 */
sfrb(LCDM2W_L , LCDM2W_);
sfrb(LCDM2W_H , LCDM2W_+1);
sfrw(LCDM2W, LCDM2W_);
#define LCDM2               LCDM2W_L  /* LCD Memory 2 */
#define LCDM3               LCDM2W_H  /* LCD Memory 3 */
#define LCDM4W_               0x0624    /* LCD Memory 4/5 */
sfrb(LCDM4W_L , LCDM4W_);
sfrb(LCDM4W_H , LCDM4W_+1);
sfrw(LCDM4W, LCDM4W_);
#define LCDM4               LCDM4W_L  /* LCD Memory 4 */
#define LCDM5               LCDM4W_H  /* LCD Memory 5 */
#define LCDM6W_               0x0626    /* LCD Memory 6/7 */
sfrb(LCDM6W_L , LCDM6W_);
sfrb(LCDM6W_H , LCDM6W_+1);
sfrw(LCDM6W, LCDM6W_);
#define LCDM6               LCDM6W_L  /* LCD Memory 6 */
#define LCDM7               LCDM6W_H  /* LCD Memory 7 */
#define LCDM8W_               0x0628    /* LCD Memory 8/9 */
sfrb(LCDM8W_L , LCDM8W_);
sfrb(LCDM8W_H , LCDM8W_+1);
sfrw(LCDM8W, LCDM8W_);
#define LCDM8               LCDM8W_L  /* LCD Memory 8 */
#define LCDM9               LCDM8W_H  /* LCD Memory 9 */
#define LCDM10W_              0x062A    /* LCD Memory 10/11 */
sfrb(LCDM10W_L , LCDM10W_);
sfrb(LCDM10W_H , LCDM10W_+1);
sfrw(LCDM10W, LCDM10W_);
#define LCDM10              LCDM10W_L /* LCD Memory 10 */
#define LCDM11              LCDM10W_H /* LCD Memory 11 */
#define LCDM12W_              0x062C    /* LCD Memory 12/13 */
sfrb(LCDM12W_L , LCDM12W_);
sfrb(LCDM12W_H , LCDM12W_+1);
sfrw(LCDM12W, LCDM12W_);
#define LCDM12              LCDM12W_L /* LCD Memory 12 */
#define LCDM13              LCDM12W_H /* LCD Memory 13 */
#define LCDM14W_              0x062E    /* LCD Memory 14/15 */
sfrb(LCDM14W_L , LCDM14W_);
sfrb(LCDM14W_H , LCDM14W_+1);
sfrw(LCDM14W, LCDM14W_);
#define LCDM14              LCDM14W_L /* LCD Memory 14 */
#define LCDM15              LCDM14W_H /* LCD Memory 15 */
#define LCDM16W_              0x0630    /* LCD Memory 16/17 */
sfrb(LCDM16W_L , LCDM16W_);
sfrb(LCDM16W_H , LCDM16W_+1);
sfrw(LCDM16W, LCDM16W_);
#define LCDM16              LCDM16W_L /* LCD Memory 16 */
#define LCDM17              LCDM16W_H /* LCD Memory 17 */
#define LCDM18W_              0x0632    /* LCD Memory 18/19 */
sfrb(LCDM18W_L , LCDM18W_);
sfrb(LCDM18W_H , LCDM18W_+1);
sfrw(LCDM18W, LCDM18W_);
#define LCDM18              LCDM18W_L /* LCD Memory 18 */
#define LCDM19              LCDM18W_H /* LCD Memory 19 */
#define LCDM20W_              0x0634    /* LCD Memory 20/21 */
sfrb(LCDM20W_L , LCDM20W_);
sfrb(LCDM20W_H , LCDM20W_+1);
sfrw(LCDM20W, LCDM20W_);
#define LCDM20              LCDM20W_L /* LCD Memory 20 */
#define LCDM21              LCDM20W_H /* LCD Memory 21 */
#define LCDM22W_              0x0636    /* LCD Memory 22/23 */
sfrb(LCDM22W_L , LCDM22W_);
sfrb(LCDM22W_H , LCDM22W_+1);
sfrw(LCDM22W, LCDM22W_);
#define LCDM22              LCDM22W_L /* LCD Memory 22 */
#define LCDM23              LCDM22W_H /* LCD Memory 23 */
#define LCDM24W_              0x0638    /* LCD Memory 24/25 */
sfrb(LCDM24W_L , LCDM24W_);
sfrb(LCDM24W_H , LCDM24W_+1);
sfrw(LCDM24W, LCDM24W_);
#define LCDM24              LCDM24W_L /* LCD Memory 24 */
#define LCDM25              LCDM24W_H /* LCD Memory 25 */
#define LCDM26W_              0x063A    /* LCD Memory 26/27 */
sfrb(LCDM26W_L , LCDM26W_);
sfrb(LCDM26W_H , LCDM26W_+1);
sfrw(LCDM26W, LCDM26W_);
#define LCDM26              LCDM26W_L /* LCD Memory 26 */
#define LCDM27              LCDM26W_H /* LCD Memory 27 */
#define LCDM28W_              0x063C    /* LCD Memory 28/29 */
sfrb(LCDM28W_L , LCDM28W_);
sfrb(LCDM28W_H , LCDM28W_+1);
sfrw(LCDM28W, LCDM28W_);
#define LCDM28              LCDM28W_L /* LCD Memory 28 */
#define LCDM29              LCDM28W_H /* LCD Memory 29 */
#define LCDM30W_              0x063E    /* LCD Memory 30/31 */
sfrb(LCDM30W_L , LCDM30W_);
sfrb(LCDM30W_H , LCDM30W_+1);
sfrw(LCDM30W, LCDM30W_);
#define LCDM30              LCDM30W_L /* LCD Memory 30 */
#define LCDM31              LCDM30W_H /* LCD Memory 31 */
#define LCDM32W_              0x0640    /* LCD Memory 32/33 */
sfrb(LCDM32W_L , LCDM32W_);
sfrb(LCDM32W_H , LCDM32W_+1);
sfrw(LCDM32W, LCDM32W_);
#define LCDM32              LCDM32W_L /* LCD Memory 32 */
#define LCDM33              LCDM32W_H /* LCD Memory 33 */
#define LCDM34W_              0x0642    /* LCD Memory 34/35 */
sfrb(LCDM34W_L , LCDM34W_);
sfrb(LCDM34W_H , LCDM34W_+1);
sfrw(LCDM34W, LCDM34W_);
#define LCDM34              LCDM34W_L /* LCD Memory 34 */
#define LCDM35              LCDM34W_H /* LCD Memory 35 */
#define LCDM36W_              0x0644    /* LCD Memory 36/37 */
sfrb(LCDM36W_L , LCDM36W_);
sfrb(LCDM36W_H , LCDM36W_+1);
sfrw(LCDM36W, LCDM36W_);
#define LCDM36              LCDM36W_L /* LCD Memory 36 */
#define LCDM37              LCDM36W_H /* LCD Memory 37 */
#define LCDM38W_              0x0646    /* LCD Memory 38/39 */
sfrb(LCDM38W_L , LCDM38W_);
sfrb(LCDM38W_H , LCDM38W_+1);
sfrw(LCDM38W, LCDM38W_);
#define LCDM38              LCDM38W_L /* LCD Memory 38 */
#define LCDM39              LCDM38W_H /* LCD Memory 39 */

#define LCDBM0W_              0x0640    /* LCD Blinking Memory 0/1 */
sfrb(LCDBM0W_L , LCDBM0W_);
sfrb(LCDBM0W_H , LCDBM0W_+1);
sfrw(LCDBM0W, LCDBM0W_);
#define LCDBM0              LCDBM0W_L /* LCD Blinking Memory 0 */
#define LCDBM1              LCDBM0W_H /* LCD Blinking Memory 1 */
#define LCDBMEM_            LCDBM0    /* LCD Blinking Memory */
#ifndef __STDC__
#define LCDBMEM             LCDBM0    /* LCD Blinking Memory (for assembler) */
#else
#define LCDBMEM             ((volatile char*) &LCDBM0) /* LCD Blinking Memory (for C) */
#endif
#define LCDBM2W_              0x0642    /* LCD Blinking Memory 2/3 */
sfrb(LCDBM2W_L , LCDBM2W_);
sfrb(LCDBM2W_H , LCDBM2W_+1);
sfrw(LCDBM2W, LCDBM2W_);
#define LCDBM2              LCDBM2W_L  /* LCD Blinking Memory 2 */
#define LCDBM3              LCDBM2W_H  /* LCD Blinking Memory 3 */
#define LCDBM4W_              0x0644    /* LCD Blinking Memory 4/5 */
sfrb(LCDBM4W_L , LCDBM4W_);
sfrb(LCDBM4W_H , LCDBM4W_+1);
sfrw(LCDBM4W, LCDBM4W_);
#define LCDBM4              LCDBM4W_L  /* LCD Blinking Memory 4 */
#define LCDBM5              LCDBM4W_H  /* LCD Blinking Memory 5 */
#define LCDBM6W_              0x0646    /* LCD Blinking Memory 6/7 */
sfrb(LCDBM6W_L , LCDBM6W_);
sfrb(LCDBM6W_H , LCDBM6W_+1);
sfrw(LCDBM6W, LCDBM6W_);
#define LCDBM6              LCDBM6W_L  /* LCD Blinking Memory 6 */
#define LCDBM7              LCDBM6W_H  /* LCD Blinking Memory 7 */
#define LCDBM8W_              0x0648    /* LCD Blinking Memory 8/9 */
sfrb(LCDBM8W_L , LCDBM8W_);
sfrb(LCDBM8W_H , LCDBM8W_+1);
sfrw(LCDBM8W, LCDBM8W_);
#define LCDBM8              LCDBM8W_L  /* LCD Blinking Memory 8 */
#define LCDBM9              LCDBM8W_H  /* LCD Blinking Memory 9 */
#define LCDBM10W_             0x064A    /* LCD Blinking Memory 10/11 */
sfrb(LCDBM10W_L , LCDBM10W_);
sfrb(LCDBM10W_H , LCDBM10W_+1);
sfrw(LCDBM10W, LCDBM10W_);
#define LCDBM10             LCDBM10W_L /* LCD Blinking Memory 10 */
#define LCDBM11             LCDBM10W_H /* LCD Blinking Memory 11 */
#define LCDBM12W_             0x064C    /* LCD Blinking Memory 12/13 */
sfrb(LCDBM12W_L , LCDBM12W_);
sfrb(LCDBM12W_H , LCDBM12W_+1);
sfrw(LCDBM12W, LCDBM12W_);
#define LCDBM12             LCDBM12W_L /* LCD Blinking Memory 12 */
#define LCDBM13             LCDBM12W_H /* LCD Blinking Memory 13 */
#define LCDBM14W_             0x064E    /* LCD Blinking Memory 14/15 */
sfrb(LCDBM14W_L , LCDBM14W_);
sfrb(LCDBM14W_H , LCDBM14W_+1);
sfrw(LCDBM14W, LCDBM14W_);
#define LCDBM14             LCDBM14W_L /* LCD Blinking Memory 14 */
#define LCDBM15             LCDBM14W_H /* LCD Blinking Memory 15 */
#define LCDBM16W_             0x0650    /* LCD Blinking Memory 16/17 */
sfrb(LCDBM16W_L , LCDBM16W_);
sfrb(LCDBM16W_H , LCDBM16W_+1);
sfrw(LCDBM16W, LCDBM16W_);
#define LCDBM16             LCDBM16W_L /* LCD Blinking Memory 16 */
#define LCDBM17             LCDBM16W_H /* LCD Blinking Memory 17 */
#define LCDBM18W_             0x0652    /* LCD Blinking Memory 18/19 */
sfrb(LCDBM18W_L , LCDBM18W_);
sfrb(LCDBM18W_H , LCDBM18W_+1);
sfrw(LCDBM18W, LCDBM18W_);
#define LCDBM18             LCDBM18W_L /* LCD Blinking Memory 18 */
#define LCDBM19             LCDBM18W_H /* LCD Blinking Memory 19 */

/* LCDIV Definitions */
#define LCDIV_NONE         (0x0000)    /* No Interrupt pending */
#define LCDIV_LCDBLKOFFIFG (0x0004)    /* Blink, segments off */
#define LCDIV_LCDBLKONIFG  (0x0006)    /* Blink, segments on */
#define LCDIV_LCDFRMIFG    (0x0008)    /* Frame interrupt */

#ifdef __cplusplus
}
#endif /* extern "C" */
