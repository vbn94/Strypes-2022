#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vencislav Nachev");
MODULE_DESCRIPTION("Test module");
MODULE_VERSION("1.0");  

static int __init mymodule_init(void){
	printk(KERN_INFO "New module has been loaded.\n");
	return 0;
}

static void __exit mymodule_exit(void){
        printk(KERN_INFO "Module has been unloaded\n");
}

module_init(mymodule_init);
module_exit(mymodule_exit);


