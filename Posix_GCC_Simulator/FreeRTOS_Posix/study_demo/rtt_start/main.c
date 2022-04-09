#include <rtthread.h>
#include "board.h"

#ifndef RT_USING_HEAP
/* if there is not enable heap, we should use static thread and stack. */
ALIGN(8)
static rt_uint8_t main_stack[RT_MAIN_THREAD_STACK_SIZE];
struct rt_thread main_thread;
#endif /* RT_USING_HEAP */

/**
 * @brief  The system main thread. In this thread will call the rt_components_init()
 *         for initialization of RT-Thread Components and call the user's programming
 *         entry main().
 */
void main_thread_entry(void *parameter)
{
    rt_kprintf("main thread run...\n");
#ifdef RT_USING_COMPONENTS_INIT
    /* RT-Thread components initialization */
    rt_components_init();
#endif /* RT_USING_COMPONENTS_INIT */

#ifdef RT_USING_MSH
int finsh_system_init(void);
  finsh_system_init();
#endif
    while(1)
    {
        // rt_kprintf("test2:%d\n",12);
        rt_thread_delay(100);
    }

}

/**
 * @brief  This function will create and start the main thread, but this thread
 *         will not run until the scheduler starts.
 */
void rt_application_init(void)
{
    rt_thread_t tid;

#ifdef RT_USING_HEAP
    tid = rt_thread_create("main", main_thread_entry, RT_NULL,
                           RT_MAIN_THREAD_STACK_SIZE, RT_MAIN_THREAD_PRIORITY, 20);
    RT_ASSERT(tid != RT_NULL);
#else
    rt_err_t result;

    tid = &main_thread;
    result = rt_thread_init(tid, "main", main_thread_entry, RT_NULL,
                            main_stack, sizeof(main_stack), RT_MAIN_THREAD_PRIORITY, 20);
    RT_ASSERT(result == RT_EOK);

    /* if not define RT_USING_HEAP, using to eliminate the warning */
    (void)result;
#endif /* RT_USING_HEAP */

    rt_thread_startup(tid);
}

/**
 * @brief  This function will call all levels of initialization functions to complete
 *         the initialization of the system, and finally start the scheduler.
 */
int rtthread_startup(void)
{
    rt_hw_interrupt_disable();

    /* board level initialization
     * NOTE: please initialize heap inside board initialization.
     */
    rt_hw_board_init();

    /* show RT-Thread version */
    rt_show_version();


    rt_kprintf("rt_system_timer_init ...\n");
    /* timer system initialization */
    rt_system_timer_init();

    rt_kprintf("rt_system_scheduler_init ...\n");
    /* scheduler system initialization */
    rt_system_scheduler_init();

#ifdef RT_USING_SIGNALS
    /* signal system initialization */
    rt_system_signal_init();
#endif /* RT_USING_SIGNALS */

    /* create init_thread */
    rt_application_init();

    rt_kprintf("rt_system_timer_thread_init ...\n");
    /* timer thread initialization */
    rt_system_timer_thread_init();

    rt_kprintf("rt_thread_idle_init ...\n");
    /* idle thread initialization */
    rt_thread_idle_init();

#ifdef RT_USING_SMP
    rt_hw_spin_lock(&_cpus_lock);
#endif /* RT_USING_SMP */

    /* start scheduler */
    rt_system_scheduler_start();

    /* never reach here */
    return 0;
}

#include <stdio.h>
// #include <rtthread.h>

int main(void)
{
    rt_hw_interrupt_disable();
    rtthread_startup();
    
    printf("Hello RT-Thread\n");


    return 0;
}


/**
  * @}
  */

/******************************** (C) Tuu *********************END OF FILE****/