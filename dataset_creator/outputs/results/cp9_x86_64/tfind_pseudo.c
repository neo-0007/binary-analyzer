
void * tfind(void *__key,void **__rootp,__compar_fn_t __compar)

{
  void *pvVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong *puVar4;
  
  if (__rootp != (void **)0x0) {
    pvVar1 = *__rootp;
    while (puVar2 = (undefined8 *)((ulong)pvVar1 & 0xfffffffffffffffe), puVar2 != (undefined8 *)0x0)
    {
      iVar3 = (*__compar)(__key,(void *)*puVar2);
      if (iVar3 == 0) {
        return puVar2;
      }
      puVar4 = puVar2 + 2;
      if (iVar3 < 0) {
        puVar4 = puVar2 + 1;
      }
      pvVar1 = (void *)*puVar4;
    }
  }
  return (void *)0x0;
}

