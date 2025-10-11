
int pthread_setcancelstate(int __state,int *__oldstate)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  iVar2 = 0x16;
  if ((uint)__state < 2) {
    lVar1 = *(long *)(in_FS_OFFSET + 0x10);
    if (__oldstate != (int *)0x0) {
      *__oldstate = (uint)*(byte *)(lVar1 + 0x971);
    }
    *(char *)(lVar1 + 0x971) = (char)__state;
    iVar2 = 0;
  }
  return iVar2;
}

