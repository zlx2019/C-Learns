#include <stdio.h>

/**
 * 我们使用线程的时候就会创建一个线程，这样实现起来非常简便，但是就会有一个问题:
 *  如果要执行的任务有很多，并且每个线程都是执行一个时间很短的任务就结束，这样频繁的创建和销毁线程会对系统的执行效率严重的负担。
 * 那有没有什么办法 可以使得线程可以复用？并不会被销毁，而是周而复始的执行一个又一个的任务呢？
 *
 * 线程池就是基于这种问题而产生的，其实'线程池'只是一个抽象的概念，并不是真的将线程放入一个池子里，然后需要的时候去拿。
 * 线程池的本质其实就是同时运行n多个线程，将这些线程圈到一个区域内，然后对外开一个窗口，我们就可以通过这个窗口去投放任务，
 *  所谓任务也就是想要被线程所执行的函数地址，然后这些线程就抢夺这个任务，抢夺到后就开始执行它，执行完就继续准备抢夺其他任务...就这样不断的循环...
 *
 * 不管是线程池还是连接池等池化技术，都是基于生产者消费者模型设计.
 *  一个线程池通常包含如下三个部分:
 *      1. 任务队列: 用于存放提交的任务，由工作线程来处理这些任务
 *          - 提供一个API函数，负责接收新的任务.
 *
 *      2. 工作线程: 用于执行任务的线程。
 *          - 池中维护了一定数量的工作线程，它们的作用就是不断的从任务队列中读取任务，并且处理.
 *          - 工作线程相当于是任务队列的消费者角色，负责消费任务队列的任务.
 *          - 如果队列为空，那么所有的工作线程都会被阻塞(condition/ signal)
 *          - 如果有了新的任务，那么工作线程则会被唤醒.

 *      3. 管理线程: 线程池的管理者，负责创建和销毁线程。
 *          - 当任务过多的时候，适当的创建一些新的工作线程.
 *          - 当任务过少的时候，适当的销毁一些空闲的工作线程.
 *
 */
