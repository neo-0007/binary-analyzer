
void FUN_004aa4c0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar1 = 0;
  do {
    while (*(int *)(lVar2 + 0x24) == 0) {
LAB_004aa4f0:
      lVar1 = lVar2;
      if (*(int *)(lVar1 + 0x20) != 0) {
        *(undefined4 *)(lVar1 + 0x20) = 0;
      }
      lVar2 = *(long *)(lVar1 + 0x28);
      if (lVar2 == 0) {
        return;
      }
    }
    if (lVar1 == 0) {
      do {
        *param_1 = *(long *)(lVar2 + 0x28);
        FUN_0041ad60(lVar2,"../crypto/async/async_wait.c",0xeb);
        lVar2 = *param_1;
        if (lVar2 == 0) {
          return;
        }
      } while (*(int *)(lVar2 + 0x24) != 0);
      goto LAB_004aa4f0;
    }
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    FUN_0041ad60(lVar2,"../crypto/async/async_wait.c",0xeb);
    lVar2 = *(long *)(lVar1 + 0x28);
    if (lVar2 == 0) {
      return;
    }
  } while( true );
}

