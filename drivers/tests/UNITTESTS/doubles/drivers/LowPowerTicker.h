/*
 * Copyright (c) 2018-2019 Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_LOWPOWERTICKER_H
#define MBED_LOWPOWERTICKER_H

#include "hal/ticker_api.h"
#include "Callback.h"

namespace mbed {

/** mock Low Power Ticker
 *
 */
class LowPowerTicker {

public:
    LowPowerTicker(const char * name)
    {
    }

    virtual ~LowPowerTicker()
    {
    }

    void attach_us(Callback<void()> func, us_timestamp_t t)
    {

    }
    void detach()
    {

    }
};

} // namespace mbed

#endif


