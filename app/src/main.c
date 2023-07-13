/*
 * Copyright (c) 2023 Daikin Comfort Technologies North America, Inc.
 * Copyright (c) 2021 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 * 
 * This file has been modified by Daikin Comfort Technologies North America, Inc.
 *  - remove sensor references and add counter logging
 * 
 */

#include <zephyr/kernel.h>
#include <zephyr/drivers/sensor.h>
#include <app_version.h>

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(main, CONFIG_APP_LOG_LEVEL);

int main(void)
{
    printk("Zephyr Example Application %s\n", APP_VERSION_STRING);

	//sensor = DEVICE_DT_GET(DT_NODELABEL(examplesensor0));
	//if (!device_is_ready(sensor)) {
	//	LOG_ERR("Sensor not ready");
	//	return 0;
	//}

	while (1) {
		struct sensor_value val;
//
		//ret = sensor_sample_fetch(sensor);
		//if (ret < 0) {
		//	LOG_ERR("Could not fetch sample (%d)", ret);
		//	return 0;
		//}
//
		//ret = sensor_channel_get(sensor, SENSOR_CHAN_PROX, &val);
		//if (ret < 0) {
		//	LOG_ERR("Could not get sample (%d)", ret);
		//	return 0;
		//}
//
		//printk("Sensor value: %d\n", val.val1);
        static int cnt = 0;
        cnt++;
        LOG_INF("Current iteration: %d", cnt);
		k_sleep(K_MSEC(1000));
	}

	return 0;
}

