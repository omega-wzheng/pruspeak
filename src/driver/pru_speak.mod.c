#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa40d049c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xac0bad95, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xeabe6ac7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x706a0970, __VMLINUX_SYMBOL_STR(rproc_vq_interrupt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x205b20cb, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x4f834c48, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd3934b52, __VMLINUX_SYMBOL_STR(pwmchip_add) },
	{ 0x5eb674ab, __VMLINUX_SYMBOL_STR(rproc_boot) },
	{ 0x7b7ce40a, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x714dd036, __VMLINUX_SYMBOL_STR(rproc_add) },
	{ 0x22519494, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe41555c8, __VMLINUX_SYMBOL_STR(rproc_alloc) },
	{ 0x46799ea4, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x34d5886b, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x93dd74ef, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x29de7e8, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xb0508836, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x22841f8f, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xb645d0d7, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x20404878, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x70d5b0c8, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0x1ae6653e, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0x8c295522, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0xf65221c0, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6d78e6c6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb32b1289, __VMLINUX_SYMBOL_STR(dma_alloc_from_dev_coherent) },
	{ 0x2fad62d0, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x422196b2, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x81c6e15c, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8ad56368, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xe5f905d9, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8777ed86, __VMLINUX_SYMBOL_STR(dma_release_from_dev_coherent) },
	{ 0x3de5d986, __VMLINUX_SYMBOL_STR(rproc_put) },
	{ 0xbff169eb, __VMLINUX_SYMBOL_STR(rproc_del) },
	{ 0xe8ecce04, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xe43a4af2, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xe0f9a6fe, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1ed3824b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x7e55e252, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

