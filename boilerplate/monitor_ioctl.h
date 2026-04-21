#ifndef MONITOR_IOCTL_H
#define MONITOR_IOCTL_H

#include <linux/ioctl.h>

#define MONITOR_MAGIC 'M'
#define CONTAINER_ID_MAX 32

struct monitor_request {
    int pid;
    char container_id[CONTAINER_ID_MAX];
    unsigned long soft_limit_bytes;
    unsigned long hard_limit_bytes;
};

#define MONITOR_REGISTER   _IOW(MONITOR_MAGIC, 1, struct monitor_request)
#define MONITOR_UNREGISTER _IOW(MONITOR_MAGIC, 2, struct monitor_request)

#endif /* MONITOR_IOCTL_H */
