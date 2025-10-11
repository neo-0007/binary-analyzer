
uint FUN_00664130(long *param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  char cVar6;
  
  if ((*(byte *)(param_1 + 0xf) & 8) == 0) {
    return 0xffffffff;
  }
  if (*(char *)((long)param_1 + 0xaa) == '\0') {
    cVar6 = (char)param_1[0x18];
    uVar1 = param_1[2];
    if ((ulong)param_1[1] < uVar1) {
      param_1[2] = uVar1 - 1;
      uVar3 = (uint)*(byte *)(uVar1 - 1);
      goto LAB_00664176;
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    lVar5 = param_1[0x13];
    param_1[5] = 0;
    param_1[4] = 0;
    cVar6 = (char)param_1[0x18];
    param_1[1] = lVar5;
    param_1[2] = lVar5;
    param_1[3] = lVar5;
    param_1[6] = 0;
    *(undefined1 *)((long)param_1 + 0xaa) = 0;
  }
  lVar5 = (**(code **)(*param_1 + 0x20))(param_1,0xffffffffffffffff,1,0x18);
  if (lVar5 == -1) {
    return 0xffffffff;
  }
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  if (uVar3 == 0xffffffff) {
    return 0xffffffff;
  }
LAB_00664176:
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if (uVar3 != param_2) {
    if (cVar6 != '\0') {
      return 0xffffffff;
    }
    puVar4 = (undefined1 *)param_1[2];
    if ((char)param_1[0x18] == '\0') {
      param_1[0x16] = (long)puVar4;
      lVar5 = param_1[3];
      param_1[3] = (long)param_1 + 0xac;
      param_1[0x17] = lVar5;
      puVar4 = (undefined1 *)((long)param_1 + 0xab);
      param_1[1] = (long)puVar4;
      param_1[2] = (long)puVar4;
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    *(undefined1 *)((long)param_1 + 0xa9) = 1;
    *puVar4 = (char)param_2;
    return param_2;
  }
  return uVar3;
}

