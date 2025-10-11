
undefined8 FUN_00422410(ulong *param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  do {
    uVar3 = uVar1 | param_2;
    LOCK();
    uVar2 = *param_1;
    bVar4 = uVar1 == uVar2;
    if (bVar4) {
      *param_1 = uVar3;
      uVar2 = uVar1;
    }
    UNLOCK();
    uVar1 = uVar2;
  } while (!bVar4);
  *param_3 = uVar3;
  return 1;
}

