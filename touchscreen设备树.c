&i2c1 {
        touchscreen@2a {
                compatible = "focaltech,ft6236";
                reg = <0x2a>;
                interrupts = <2 2>;
                interrupt-parent = <&gpiof>;
                interrupt-controller;
                touchscreen-size-x = <480>;
                touchscreen-size-y = <800>;
                panel = <&panel_otm8009a>;
                status = "okay";
        };
};

&i2c2 {
        pinctrl-names = "default", "sleep";
        pinctrl-0 = <&i2c2_pins_a>;
        pinctrl-1 = <&i2c2_pins_sleep_a>;
        i2c-scl-rising-time-ns = <100>;
        i2c-scl-falling-time-ns = <7>;
        status = "okay";
        /delete-property/dmas;
        /delete-property/dma-names;

        touchscreen@5d{
                compatible = "goodix,gt911";
                reg = <0x5d>;
                interrupt-parent = <&gpiog>;
                interrupts = <7 IRQ_TYPE_EDGE_FALLING>;
                irq-gpios = <&gpiog 7 (GPIO_ACTIVE_HIGH | GPIO_PULL_UP)>;
                reset-gpios = <&gpiog 8 GPIO_ACTIVE_HIGH>
                touchscreen-size-x = <480>;
                touchscreen-size-y = <800>;
                status = "okay";

                //touchscreen-inverted-x;
                touchscreen-inverted-y;
                //touchscreen-inverted-x-y;
        };
};

//i2c2_pins_sleep_a用这个节点