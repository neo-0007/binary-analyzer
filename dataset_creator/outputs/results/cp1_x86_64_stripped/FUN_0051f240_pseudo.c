
void FUN_0051f240(uint param_1)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = FUN_0051e1a0();
  if (lVar2 != 0) {
    puVar1 = (uint *)(lVar2 + (long)*(int *)(lVar2 + 0x380) * 4);
    *puVar1 = *puVar1 | ~((int)(~param_1 & param_1 - 1) >> 0x1f) & 2U;
  }
  return;
}

