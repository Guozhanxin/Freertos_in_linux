#include <rtthread.h>
#include "board.h"
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
    // rt_application_init();

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

    printf("test2:%d\n",12);
    while(1)
    {
      // rt_thread_delay(100);
    }
    return 0;
}


/**
  * @}
  */

/******************************** (C) Tuu *********************END OF FILE****/