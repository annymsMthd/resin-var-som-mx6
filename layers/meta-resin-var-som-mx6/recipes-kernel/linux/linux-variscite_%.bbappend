inherit kernel-resin

RESIN_CONFIGS_append_var-som-mx6 = " som-wifi"

RESIN_CONFIGS[som-wifi] = " \
    CONFIG_INPUT_EVBUG=n \
    CONFIG_WL_TI=y \
    CONFIG_CFG80211_DEVELOPER_WARNINGS=y \
    CONFIG_WL18XX=m \
    CONFIG_WL12XX=n \
    CONFIG_WLCORE=m \
    CONFIG_WLCORE_SDIO=m \
"
