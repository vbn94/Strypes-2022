#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/uaccess.h>

#define DEVICE_NAME "testdev"


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Venci");


static int dev_open(struct inode*, struct file*);
static int dev_release(struct inode*, struct file*);
static ssize_t dev_read(struct file*, char*, size_t, loff_t*);
static ssize_t dev_write(struct file*, const char*, size_t, loff_t*);

static struct file_operations fops = {
   .open = dev_open,
   .read = dev_read,
   .write = dev_write,
   .release = dev_release,
};

static int major;

static int __init rickroll_init(void) {
    major = register_chrdev(0, DEVICE_NAME, &fops);
    if (major < 0) {
        printk(KERN_ALERT "Rickroll load failed\n");
        return major;
    }
    printk(KERN_INFO "Test module has been loaded: %d\n", major);
    return 0;
}

static void __exit rickroll_exit(void) {
    unregister_chrdev(major, DEVICE_NAME);
    printk(KERN_INFO "Test module has been unloaded\n");
}

static int dev_open(struct inode *inodep, struct file *filep) {
   printk(KERN_INFO "Test device opened\n");
   return 0;
}

static ssize_t dev_write(struct file *filep, const char *buffer, size_t len, loff_t *offset) {
   printk(KERN_INFO "Sorry, test is read only\n");
   return 0;
}

static int dev_release(struct inode *inodep, struct file *filep) {
   printk(KERN_INFO "Test device closed\n");
   return 0;
}

static ssize_t dev_read(struct file *filep, char *buffer, size_t len, loff_t *offset) {
    static unsigned cnt = 0;
    int message_len;
    int errors = 0;
    char message[50];
    sprintf(message, "Strypes is super! [%d]\n", cnt);
    cnt++;
    message_len = strlen(message);
    errors = copy_to_user(buffer, message, message_len);
    return errors == 0 ? message_len : -EFAULT;
}

module_init(rickroll_init);
module_exit(rickroll_exit);
