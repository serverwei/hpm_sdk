/*
 * Copyright (c) 2021-2024 HPMicro
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */


#ifndef HPM_SOC_IRQ_H
#define HPM_SOC_IRQ_H


/* List of external IRQs */
#define IRQn_GPIO0_A                   1       /* GPIO0_A IRQ */
#define IRQn_GPIO0_B                   2       /* GPIO0_B IRQ */
#define IRQn_GPIO0_C                   3       /* GPIO0_C IRQ */
#define IRQn_GPIO0_D                   4       /* GPIO0_D IRQ */
#define IRQn_GPIO0_E                   5       /* GPIO0_E IRQ */
#define IRQn_GPIO0_F                   6       /* GPIO0_F IRQ */
#define IRQn_GPIO0_V                   7       /* GPIO0_V IRQ */
#define IRQn_GPIO0_W                   8       /* GPIO0_W IRQ */
#define IRQn_GPIO0_X                   9       /* GPIO0_X IRQ */
#define IRQn_GPIO0_Y                   10      /* GPIO0_Y IRQ */
#define IRQn_GPIO0_Z                   11      /* GPIO0_Z IRQ */
#define IRQn_GPIO1_A                   12      /* GPIO1_A IRQ */
#define IRQn_GPIO1_B                   13      /* GPIO1_B IRQ */
#define IRQn_GPIO1_C                   14      /* GPIO1_C IRQ */
#define IRQn_GPIO1_D                   15      /* GPIO1_D IRQ */
#define IRQn_GPIO1_E                   16      /* GPIO1_E IRQ */
#define IRQn_GPIO1_F                   17      /* GPIO1_F IRQ */
#define IRQn_GPIO1_V                   18      /* GPIO1_V IRQ */
#define IRQn_GPIO1_W                   19      /* GPIO1_W IRQ */
#define IRQn_GPIO1_X                   20      /* GPIO1_X IRQ */
#define IRQn_GPIO1_Y                   21      /* GPIO1_Y IRQ */
#define IRQn_GPIO1_Z                   22      /* GPIO1_Z IRQ */
#define IRQn_GPTMR0                    23      /* GPTMR0 IRQ */
#define IRQn_GPTMR1                    24      /* GPTMR1 IRQ */
#define IRQn_GPTMR2                    25      /* GPTMR2 IRQ */
#define IRQn_GPTMR3                    26      /* GPTMR3 IRQ */
#define IRQn_GPTMR4                    27      /* GPTMR4 IRQ */
#define IRQn_GPTMR5                    28      /* GPTMR5 IRQ */
#define IRQn_GPTMR6                    29      /* GPTMR6 IRQ */
#define IRQn_GPTMR7                    30      /* GPTMR7 IRQ */
#define IRQn_UART0                     31      /* UART0 IRQ */
#define IRQn_UART1                     32      /* UART1 IRQ */
#define IRQn_UART2                     33      /* UART2 IRQ */
#define IRQn_UART3                     34      /* UART3 IRQ */
#define IRQn_UART4                     35      /* UART4 IRQ */
#define IRQn_UART5                     36      /* UART5 IRQ */
#define IRQn_UART6                     37      /* UART6 IRQ */
#define IRQn_UART7                     38      /* UART7 IRQ */
#define IRQn_I2C0                      39      /* I2C0 IRQ */
#define IRQn_I2C1                      40      /* I2C1 IRQ */
#define IRQn_I2C2                      41      /* I2C2 IRQ */
#define IRQn_I2C3                      42      /* I2C3 IRQ */
#define IRQn_SPI0                      43      /* SPI0 IRQ */
#define IRQn_SPI1                      44      /* SPI1 IRQ */
#define IRQn_SPI2                      45      /* SPI2 IRQ */
#define IRQn_SPI3                      46      /* SPI3 IRQ */
#define IRQn_TSNS                      47      /* TSNS IRQ */
#define IRQn_MBX0A                     48      /* MBX0A IRQ */
#define IRQn_MBX0B                     49      /* MBX0B IRQ */
#define IRQn_MBX1A                     50      /* MBX1A IRQ */
#define IRQn_MBX1B                     51      /* MBX1B IRQ */
#define IRQn_EWDG0                     52      /* EWDG0 IRQ */
#define IRQn_EWDG1                     53      /* EWDG1 IRQ */
#define IRQn_EWDG2                     54      /* EWDG2 IRQ */
#define IRQn_EWDG3                     55      /* EWDG3 IRQ */
#define IRQn_HDMA                      56      /* HDMA IRQ */
#define IRQn_LOBS                      57      /* LOBS IRQ */
#define IRQn_ADC0                      58      /* ADC0 IRQ */
#define IRQn_ADC1                      59      /* ADC1 IRQ */
#define IRQn_ADC2                      60      /* ADC2 IRQ */
#define IRQn_ADC3                      61      /* ADC3 IRQ */
#define IRQn_ACMP0_0                   62      /* ACMP0[0] IRQ */
#define IRQn_ACMP0_1                   63      /* ACMP0[1] IRQ */
#define IRQn_ACMP1_0                   64      /* ACMP1[0] IRQ */
#define IRQn_ACMP1_1                   65      /* ACMP1[1] IRQ */
#define IRQn_ACMP2_0                   66      /* ACMP2[0] IRQ */
#define IRQn_ACMP2_1                   67      /* ACMP2[1] IRQ */
#define IRQn_ACMP3_0                   68      /* ACMP3[0] IRQ */
#define IRQn_ACMP3_1                   69      /* ACMP3[1] IRQ */
#define IRQn_I2S0                      70      /* I2S0 IRQ */
#define IRQn_I2S1                      71      /* I2S1 IRQ */
#define IRQn_DAO                       72      /* DAO IRQ */
#define IRQn_PDM                       73      /* PDM IRQ */
#define IRQn_UART8                     74      /* UART8 IRQ */
#define IRQn_UART9                     75      /* UART9 IRQ */
#define IRQn_UART10                    76      /* UART10 IRQ */
#define IRQn_UART11                    77      /* UART11 IRQ */
#define IRQn_UART12                    78      /* UART12 IRQ */
#define IRQn_UART13                    79      /* UART13 IRQ */
#define IRQn_UART14                    80      /* UART14 IRQ */
#define IRQn_UART15                    81      /* UART15 IRQ */
#define IRQn_I2C4                      82      /* I2C4 IRQ */
#define IRQn_I2C5                      83      /* I2C5 IRQ */
#define IRQn_I2C6                      84      /* I2C6 IRQ */
#define IRQn_I2C7                      85      /* I2C7 IRQ */
#define IRQn_SPI4                      86      /* SPI4 IRQ */
#define IRQn_SPI5                      87      /* SPI5 IRQ */
#define IRQn_SPI6                      88      /* SPI6 IRQ */
#define IRQn_SPI7                      89      /* SPI7 IRQ */
#define IRQn_MCAN0                     90      /* MCAN0 IRQ */
#define IRQn_MCAN1                     91      /* MCAN1 IRQ */
#define IRQn_MCAN2                     92      /* MCAN2 IRQ */
#define IRQn_MCAN3                     93      /* MCAN3 IRQ */
#define IRQn_MCAN4                     94      /* MCAN4 IRQ */
#define IRQn_MCAN5                     95      /* MCAN5 IRQ */
#define IRQn_MCAN6                     96      /* MCAN6 IRQ */
#define IRQn_MCAN7                     97      /* MCAN7 IRQ */
#define IRQn_PTPC                      98      /* PTPC IRQ */
#define IRQn_QEI0                      99      /* QEI0 IRQ */
#define IRQn_QEI1                      100     /* QEI1 IRQ */
#define IRQn_QEI2                      101     /* QEI2 IRQ */
#define IRQn_QEI3                      102     /* QEI3 IRQ */
#define IRQn_PWM0                      103     /* PWM0 IRQ */
#define IRQn_PWM1                      104     /* PWM1 IRQ */
#define IRQn_PWM2                      105     /* PWM2 IRQ */
#define IRQn_PWM3                      106     /* PWM3 IRQ */
#define IRQn_RDC0                      107     /* RDC0 IRQ */
#define IRQn_RDC1                      108     /* RDC1 IRQ */
#define IRQn_SDM0                      109     /* SDM0 IRQ */
#define IRQn_SDM1                      110     /* SDM1 IRQ */
#define IRQn_SEI_0                     111     /* SEI[0] IRQ */
#define IRQn_SEI_1                     112     /* SEI[1] IRQ */
#define IRQn_SEI_2                     113     /* SEI[2] IRQ */
#define IRQn_SEI_3                     114     /* SEI[3] IRQ */
#define IRQn_MTG0                      115     /* MTG0 IRQ */
#define IRQn_MTG1                      116     /* MTG1 IRQ */
#define IRQn_VSC0                      117     /* VSC0 IRQ */
#define IRQn_VSC1                      118     /* VSC1 IRQ */
#define IRQn_CLC0_0                    119     /* CLC0[0] IRQ */
#define IRQn_CLC0_1                    120     /* CLC0[1] IRQ */
#define IRQn_CLC1_0                    121     /* CLC1[0] IRQ */
#define IRQn_CLC1_1                    122     /* CLC1[1] IRQ */
#define IRQn_TRGMUX0                   123     /* TRGMUX0 IRQ */
#define IRQn_TRGMUX1                   124     /* TRGMUX1 IRQ */
#define IRQn_ENET0                     125     /* ENET0 IRQ */
#define IRQn_NTMR0                     126     /* NTMR0 IRQ */
#define IRQn_USB0                      127     /* USB0 IRQ */
#define IRQn_TSW_0                     128     /* TSW[0] IRQ */
#define IRQn_TSW_1                     129     /* TSW[1] IRQ */
#define IRQn_TSW_2                     130     /* TSW[2] IRQ */
#define IRQn_TSW_3                     131     /* TSW[3] IRQ */
#define IRQn_TSW_PTP_EVT               132     /* TSW_PTP_EVT IRQ */
#define IRQn_ESC                       133     /* ESC IRQ */
#define IRQn_ESC_SYNC0                 134     /* ESC_SYNC0 IRQ */
#define IRQn_ESC_SYNC1                 135     /* ESC_SYNC1 IRQ */
#define IRQn_ESC_RESET                 136     /* ESC_RESET IRQ */
#define IRQn_XPI0                      137     /* XPI0 IRQ */
#define IRQn_FEMC                      138     /* FEMC IRQ */
#define IRQn_PPI                       139     /* PPI IRQ */
#define IRQn_XDMA                      140     /* XDMA IRQ */
#define IRQn_FFA                       141     /* FFA IRQ */
#define IRQn_SDP                       142     /* SDP IRQ */
#define IRQn_RNG                       143     /* RNG IRQ */
#define IRQn_PKA                       144     /* PKA IRQ */
#define IRQn_PSEC                      145     /* PSEC IRQ */
#define IRQn_PGPIO                     146     /* PGPIO IRQ */
#define IRQn_PEWDG                     147     /* PEWDG IRQ */
#define IRQn_PTMR                      148     /* PTMR IRQ */
#define IRQn_PUART                     149     /* PUART IRQ */
#define IRQn_FUSE                      150     /* FUSE IRQ */
#define IRQn_SECMON                    151     /* SECMON IRQ */
#define IRQn_RTC                       152     /* RTC IRQ */
#define IRQn_PAD_WAKEUP                153     /* PAD_WAKEUP IRQ */
#define IRQn_BGPIO                     154     /* BGPIO IRQ */
#define IRQn_BVIO                      155     /* BVIO IRQ */
#define IRQn_BROWNOUT                  156     /* BROWNOUT IRQ */
#define IRQn_SYSCTL                    157     /* SYSCTL IRQ */
#define IRQn_CPU0                      158     /* CPU0 IRQ */
#define IRQn_CPU1                      159     /* CPU1 IRQ */
#define IRQn_DEBUG0                    160     /* DEBUG0 IRQ */
#define IRQn_DEBUG1                    161     /* DEBUG1 IRQ */

#endif /* HPM_SOC_IRQ_H */