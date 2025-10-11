
/* std::ios_base::_M_dispose_callbacks() */

void __thiscall std::ios_base::_M_dispose_callbacks(ios_base *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 0x28);
  while (puVar4 != (undefined8 *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar1 = (int *)((long)puVar4 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)((long)puVar4 + 0x14);
      *(int *)((long)puVar4 + 0x14) = iVar2 + -1;
    }
    if (iVar2 != 0) break;
    puVar3 = (undefined8 *)*puVar4;
    operator_delete(puVar4);
    puVar4 = puVar3;
  }
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

