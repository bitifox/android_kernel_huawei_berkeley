


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "oal_profiling.h"
#include "oam_ext_if.h"
#include "frw_ext_if.h"
#include "wlan_spec.h"

#ifdef _PRE_WLAN_FEATURE_ALWAYS_TX
#include "hal_ext_if.h"
#endif

#include "hmac_vap.h"
#include "mac_vap.h"
#include "mac_resource.h"
#include "mac_data.h"
#include "hmac_ext_if.h"

#if (_PRE_MULTI_CORE_MODE_OFFLOAD_DMAC != _PRE_MULTI_CORE_MODE)
#include "hmac_vap.h"
#endif

#include "wal_main.h"
#include "wal_linux_bridge.h"

#ifdef _PRE_WLAN_FEATURE_BTCOEX
#include "hmac_device.h"
#include "hmac_resource.h"
#endif

#undef  THIS_FILE_ID
#define THIS_FILE_ID OAM_FILE_ID_WAL_LINUX_BRIDGE_C


/*****************************************************************************
  2 全局变量定义
*****************************************************************************/


/*****************************************************************************
  3 函数实现
*****************************************************************************/
#if (_PRE_MULTI_CORE_MODE_OFFLOAD_DMAC != _PRE_MULTI_CORE_MODE)


oal_net_dev_tx_enum  wal_vap_start_xmit(oal_netbuf_stru *pst_buf, oal_net_device_stru *pst_dev)
{
    return hmac_vap_start_xmit(pst_buf, pst_dev);
}

#endif


oal_net_dev_tx_enum  wal_bridge_vap_xmit(oal_netbuf_stru *pst_buf, oal_net_device_stru *pst_dev)
{
    return hmac_bridge_vap_xmit(pst_buf, pst_dev);
}

/*lint -e19*/
oal_module_symbol(wal_bridge_vap_xmit);
/*lint +e19*/

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

