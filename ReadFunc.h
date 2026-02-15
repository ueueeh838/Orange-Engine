template <typename T>
void OrangeKernel::read_queue(uintptr_t addr,void *buffer,int offset1)
{
    int offset[5];
    offset[0]=offset1;
    Read_Queue(addr, 1, &offset[0], buffer, sizeof(T));
}

template <typename T>
void OrangeKernel::read_queue(uintptr_t addr,void *buffer,int offset1,int offset2)
{
    int offset[5];
    offset[0]=offset1;
    offset[1]=offset2;
    Read_Queue(addr, 2, &offset[0], buffer, sizeof(T));
}

template <typename T>
void OrangeKernel::read_queue(uintptr_t addr,void *buffer,int offset1,int offset2,int offset3)
{
    int offset[5];
    offset[0]=offset1;
    offset[1]=offset2;
    offset[2]=offset3;
    Read_Queue(addr, 3, &offset[0], buffer, sizeof(T));
}

template <typename T>
void OrangeKernel::read_queue(uintptr_t addr,void *buffer,int offset1,int offset2,int offset3,int offset4)
{
    int offset[5];
    offset[0]=offset1;
    offset[1]=offset2;
    offset[2]=offset3;
    offset[3]=offset4;
    Read_Queue(addr, 4, &offset[0], buffer, sizeof(T));
}

template <typename T>
void OrangeKernel::read_queue(uintptr_t addr,void *buffer,int offset1,int offset2,int offset3,int offset4,int offset5)
{
    int offset[5];
    offset[0]=offset1;
    offset[1]=offset2;
    offset[2]=offset3;
    offset[3]=offset4;
    offset[4]=offset5;
    Read_Queue(addr, 5, &offset[0], buffer, sizeof(T));
}

template <typename T>
T OrangeKernel::read_queue_now(uintptr_t addr,int offset1)
{
    T res;
    int offset[5];
    offset[0]=offset1;
    Read_Queue_Now(addr, 1, &offset[0], &res, sizeof(T));
    return res;
}

template <typename T>
T OrangeKernel::read_queue_now(uintptr_t addr,int offset1,int offset2)
{
    T res;
    int offset[5];
    offset[0]=offset1;
    offset[1]=offset2;
    Read_Queue_Now(addr, 2, &offset[0], &res, sizeof(T));
    return res;
}

template <typename T>
T OrangeKernel::read_queue_now(uintptr_t addr,int offset1,int offset2,int offset3)
{
    T res;
    int offset[5];
    offset[0]=offset1;
    offset[1]=offset2;
    offset[2]=offset3;
    Read_Queue_Now(addr, 3, &offset[0], &res, sizeof(T));
    return res;
}

template <typename T>
T OrangeKernel::read_queue_now(uintptr_t addr,int offset1,int offset2,int offset3,int offset4)
{
    T res;
    int offset[5];
    offset[0]=offset1;
    offset[1]=offset2;
    offset[2]=offset3;
    offset[3]=offset4;
    Read_Queue_Now(addr, 4, &offset[0], &res, sizeof(T));
    return res;
}

template <typename T>
T OrangeKernel::read_queue_now(uintptr_t addr,int offset1,int offset2,int offset3,int offset4,int offset5)
{
    T res;
    int offset[5];
    offset[0]=offset1;
    offset[1]=offset2;
    offset[2]=offset3;
    offset[3]=offset4;
    offset[4]=offset5;
    Read_Queue_Now(addr, 5, &offset[0], &res, sizeof(T));
    return res;
}
template <typename T>
T OrangeKernel::read(uintptr_t addr)
{    
    T res;
    if (Read(addr, &res, sizeof(T)))
        return res;
    return {};
}