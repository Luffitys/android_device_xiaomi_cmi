/*
 * Copyright (C) 2021-2025 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libvariant.h>

static const variant_info cmi_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "cmi",
    .marketname = "",
    .model = "Mi 10 Pro",
    .build_fingerprint = "Xiaomi/cmi_global/cmi:13/RKQ1.211001.001/V816.0.2.0.TJAMIXM:user/release-keys",

    .nfc = true,
};

const std::vector<variant_info> variants = {
    cmi_info,
};
