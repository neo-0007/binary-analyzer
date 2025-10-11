
long FUN_005967e0(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 5);
  lVar2 = param_1[2];
  if ((uVar1 & 2) != 0) {
    (**(code **)(*param_1 + 0x38))(param_1,lVar2);
    uVar1 = *(uint *)(param_1 + 5);
    lVar2 = 0;
  }
  param_1[2] = param_2;
  *(uint *)(param_1 + 5) = uVar1 & 0xfffffffd;
  return lVar2;
}

