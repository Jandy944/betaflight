/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include "platform.h"

#ifdef USE_MAX7456

#include "pg/pg.h"
#include "pg/pg_ids.h"

#include "max7456.h"

PG_REGISTER_WITH_RESET_TEMPLATE(max7456Config_t, max7456Config, PG_MAX7456_CONFIG, 0);

PG_RESET_TEMPLATE(max7456Config_t, max7456Config,
    .clockConfig = MAX7456_CLOCK_CONFIG_OC, // SPI clock based on device type and overclock state
);

#endif // USE_MAX7456
