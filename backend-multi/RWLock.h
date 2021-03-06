#ifndef RWLock_h
#define RWLock_h
#include <iostream>

class RWLock {
    public:
        RWLock();
        void rlock();
        void wlock();
        void runlock();
        void wunlock();
    private:
      pthread_cond_t vc;
      pthread_mutex_t mutex;
      bool escritor;
      int lectores;
      pthread_mutex_t pedidoEscritura;
};

#endif
