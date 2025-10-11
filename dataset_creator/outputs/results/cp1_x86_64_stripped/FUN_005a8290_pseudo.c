
uint FUN_005a8290(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined8 auStack_148 [7];
  undefined8 local_110;
  undefined8 local_b0;
  undefined8 *local_70;
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_1[0x1b];
  puVar7 = auStack_148;
  for (lVar6 = 0x22; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if (lVar1 == 0) {
    iVar2 = FUN_005a7c60(auStack_148,*param_1,param_2,param_1[2]);
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      auStack_148[3] = param_1[3];
      FUN_005a8260(auStack_148,param_1[4]);
      local_110 = param_1[7];
      local_70 = param_1;
      uVar3 = FUN_005a6db0(auStack_148);
      if (0 < (int)uVar3) {
        uVar4 = param_1[0x13];
        iVar2 = FUN_00436480(uVar4);
        uVar4 = FUN_004364a0(uVar4,iVar2 + -1);
        iVar2 = FUN_00436480(local_b0);
        uVar5 = FUN_004364a0(local_b0,iVar2 + -1);
        iVar2 = FUN_0059e700(uVar4,uVar5);
        uVar3 = (uint)(iVar2 == 0);
      }
      FUN_005a7b60(auStack_148);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

