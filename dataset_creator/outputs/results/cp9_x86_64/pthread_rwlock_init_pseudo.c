
int pthread_rwlock_init(pthread_rwlock_t *__rwlock,pthread_rwlockattr_t *__attr)

{
  int iVar1;
  
  *(undefined8 *)&(__rwlock->__data).__flags = 0;
  if (__attr == (pthread_rwlockattr_t *)0x0) {
    __attr = (pthread_rwlockattr_t *)&default_rwlockattr;
  }
  *(uint *)((long)__rwlock + 0x10) = 0;
  *(uint *)((long)__rwlock + 0x14) = 0;
  *(int *)((long)__rwlock + 0x18) = 0;
  *(int *)((long)__rwlock + 0x1c) = 0;
  *(undefined1 (*) [16])__rwlock = (undefined1  [16])0x0;
  *(ulong *)((long)__rwlock + 0x20) = 0;
  *(ulong *)((long)__rwlock + 0x28) = 0;
  iVar1 = *(int *)(__attr->__size + 4);
  (__rwlock->__data).__flags = *(uint *)__attr;
  (__rwlock->__data).__shared = (uint)(iVar1 != 0);
  return 0;
}

