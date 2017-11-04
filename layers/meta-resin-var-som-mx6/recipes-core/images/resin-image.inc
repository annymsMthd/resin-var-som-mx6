# Customize resinos-img
IMAGE_FSTYPES_append_var-som-mx6 = " resinos-img"

RESIN_IMAGE_BOOTLOADER_var-som-mx6 = "u-boot-variscite"

RESIN_BOOT_PARTITION_FILES_var-som-mx6 = " \
    uImage-initramfs-var-som-mx6.bin:/uImage \
    uImage-imx6q-var-som-cap.dtb:/imx6q-var-som-cap.dtb \
    uImage-imx6q-var-som-res.dtb:/imx6q-var-som-res.dtb \
    uImage-imx6q-var-som-vsc.dtb:/imx6q-var-som-vsc.dtb \
    uImage-imx6dl-var-som-cap.dtb:/imx6dl-var-som-cap.dtb \
    uImage-imx6dl-var-som-res.dtb:/imx6dl-var-som-res.dtb \
    uImage-imx6dl-var-som-vsc.dtb:/imx6dl-var-som-vsc.dtb \
    uImage-imx6dl-var-som-solo-cap.dtb:/imx6dl-var-som-solo-cap.dtb \
    uImage-imx6dl-var-som-solo-res.dtb:/imx6dl-var-som-solo-res.dtb \
    uImage-imx6dl-var-som-solo-vsc.dtb:/imx6dl-var-som-solo-vsc.dtb \
    "

IMAGE_CMD_resinos-img_append_var-som-mx6 () {
    dd if=${DEPLOY_DIR_IMAGE}/${SPL_BINARY} of=${RESIN_RAW_IMG} conv=notrunc seek=2 bs=512
    dd if=${DEPLOY_DIR_IMAGE}/u-boot-${MACHINE}.${UBOOT_SUFFIX_SDCARD} of=${RESIN_RAW_IMG} conv=notrunc seek=69 bs=1K
}
