/** Copyright 2020 Espressif Systems (Shanghai) PTE LTD
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
#pragma once

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/** Control/Status registers */
/** Type of otg_conf register
 *  PAD/DFIFO/PHY configuration register.
 */
typedef union {
    struct {
        /** srp_sessend_override : R/W; bitpos: [0]; default: 0;
         *  This bit is used to enable the software override of srp session end signal.1'b0:
         *  the signal is controlled by the chip input.1'b1: the signal is controlled by the
         *  software.
         */
        uint32_t srp_sessend_override:1;
        /** srp_sessend_value : R/W; bitpos: [1]; default: 0;
         *  Software override value of srp session end signal.
         */
        uint32_t srp_sessend_value:1;
        /** phy_sel : R/W; bitpos: [2]; default: 0;
         *  Select internal or external PHY.1'b0: Select internal PHY.1'b1: Select external PHY
         */
        uint32_t phy_sel:1;
        /** dfifo_force_pd : R/W; bitpos: [3]; default: 0;
         *  Force the dfifo to go into low power mode. The data in dfifo will not lost.
         */
        uint32_t dfifo_force_pd:1;
        /** dbnce_fltr_bypass : R/W; bitpos: [4]; default: 0;
         *  Bypass Debounce filters for avalid.
         */
        uint32_t dbnce_fltr_bypass:1;
        /** exchg_pins_override : R/W; bitpos: [5]; default: 0;
         *  Enable software to control USB D+ D- exchange
         */
        uint32_t exchg_pins_override:1;
        /** exchg_pins : R/W; bitpos: [6]; default: 0;
         *  USB D+/D- exchange.1'b0: don't change.1'b1: exchange D+ D-.
         */
        uint32_t exchg_pins:1;
        /** vrefh : R/W; bitpos: [8:7]; default: 0;
         *  Control single-end input high threshold.
         */
        uint32_t vrefh:2;
        /** vrefl : R/W; bitpos: [10:9]; default: 0;
         *  Control single-end input low threshold.
         */
        uint32_t vrefl:2;
        /** vref_override : R/W; bitpos: [11]; default: 0;
         *  Enable software to control input  threshold.
         */
        uint32_t vref_override:1;
        /** pad_pull_override : R/W; bitpos: [12]; default: 0;
         *  Enable software to control USB pad in pullup or pulldown mode.
         */
        uint32_t pad_pull_override:1;
        /** dp_pullup : R/W; bitpos: [13]; default: 0;
         *  Control USB D+ pullup.
         */
        uint32_t dp_pullup:1;
        /** dp_pulldown : R/W; bitpos: [14]; default: 0;
         *  Control USB D+ pulldown.
         */
        uint32_t dp_pulldown:1;
        /** dm_pullup : R/W; bitpos: [15]; default: 0;
         *  Control USB D+ pullup.
         */
        uint32_t dm_pullup:1;
        /** dm_pulldown : R/W; bitpos: [16]; default: 0;
         *  Control USB D+ pulldown.
         */
        uint32_t dm_pulldown:1;
        /** pullup_value : R/W; bitpos: [17]; default: 0;
         *  Control pullup value.1'b0: typical value is 2.4K.1'b1: typical value is 1.2K.
         */
        uint32_t pullup_value:1;
        /** pad_enable : R/W; bitpos: [18]; default: 0;
         *  Enable USB pad function.
         */
        uint32_t pad_enable:1;
        /** ahb_clk_force_on : R/W; bitpos: [19]; default: 1;
         *  Force AHB clock always on.
         */
        uint32_t ahb_clk_force_on:1;
        /** phy_clk_force_on : R/W; bitpos: [20]; default: 1;
         *  Force PHY clock always on.
         */
        uint32_t phy_clk_force_on:1;
        /** phy_tx_edge_sel : R/W; bitpos: [21]; default: 0;
         *  Select PHY tx signal output clock edge.1'b0: negedge;1'b1: posedge.
         */
        uint32_t phy_tx_edge_sel:1;
        /** dfifo_force_pu : R/W; bitpos: [22]; default: 0;
         *  Disable the dfifo to go into low power mode. The data in dfifo will not lost.
         */
        uint32_t dfifo_force_pu:1;
        uint32_t reserved_23:8;
        /** clk_en : R/W; bitpos: [31]; default: 0;
         *  Disable auto clock gating of CSR registers.
         */
        uint32_t clk_en:1;
    };
    uint32_t val;
} usb_wrap_otg_conf_reg_t;

/** Type of test_conf register
 *  TEST relative configuration registers.
 */
typedef union {
    struct {
        /** test_enable : R/W; bitpos: [0]; default: 0;
         *  Enable to test the USB pad.
         */
        uint32_t test_enable:1;
        /** test_usb_wrap_oe : R/W; bitpos: [1]; default: 0;
         *  USB pad oen in test.
         */
        uint32_t test_usb_wrap_oe:1;
        /** test_tx_dp : R/W; bitpos: [2]; default: 0;
         *  USB D+ tx value in test.
         */
        uint32_t test_tx_dp:1;
        /** test_tx_dm : R/W; bitpos: [3]; default: 0;
         *  USB D- tx value in test.
         */
        uint32_t test_tx_dm:1;
        /** test_rx_rcv : RO; bitpos: [4]; default: 0;
         *  USB differential rx value in test.
         */
        uint32_t test_rx_rcv:1;
        /** test_rx_dp : RO; bitpos: [5]; default: 0;
         *  USB D+ rx value in test.
         */
        uint32_t test_rx_dp:1;
        /** test_rx_dm : RO; bitpos: [6]; default: 0;
         *  USB D- rx value in test.
         */
        uint32_t test_rx_dm:1;
    };
    uint32_t val;
} usb_wrap_test_conf_reg_t;


/** Status registers */
/** Type of date register
 *  Version register.
 */
typedef union {
    struct {
        /** date : R/W; bitpos: [31:0]; default: 419631616;
         *  data register.
         */
        uint32_t date:32;
    };
    uint32_t val;
} usb_wrap_date_reg_t;


typedef struct {
    volatile usb_wrap_otg_conf_reg_t otg_conf;
    volatile usb_wrap_test_conf_reg_t test_conf;
    volatile usb_wrap_date_reg_t date;
} usb_wrap_dev_t;

extern usb_wrap_dev_t USB_WRAP;

#ifdef __cplusplus
}
#endif


