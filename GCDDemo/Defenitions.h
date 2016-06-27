//
//  Defenitions.h
//  GCDDemo
//


#ifndef GCDDemo_Defenitions_h
#define GCDDemo_Defenitions_h

typedef enum {
    QueueStateNone,
    QueueStateSerial,
    QueueStateConcurrent
} QueueState;

typedef enum { 
    BlockStatusNotStarted,
    BlockStatusStarted,
    BlockStatusFinished
} BlockStatus;

#endif
