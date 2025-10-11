
undefined8 FUN_004b9860(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  long *local_78;
  uint local_70;
  undefined8 local_6c;
  long local_58;
  undefined8 local_50;
  long local_40;
  
  uVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = FUN_004b7ba0(param_2);
  if (iVar4 != 0) goto LAB_004b989a;
  uVar9 = 0;
  FUN_004b2c00(param_3);
  puVar6 = (undefined8 *)FUN_004b2df0(param_3);
  if (puVar6 != (undefined8 *)0x0) {
    puVar1 = param_1 + 8;
    lVar7 = FUN_004b8260(puVar1,param_2);
    if (lVar7 != 0) {
      iVar4 = FUN_004b7e80(param_2,4);
      if (iVar4 != 0) {
        FUN_004b7e70(puVar1,4);
      }
      param_1[0xc] = 0;
      FUN_004b7670();
      local_78 = &local_58;
      local_6c = 2;
      iVar4 = FUN_004b7e80(param_2,4);
      if (iVar4 != 0) {
        FUN_004b7e70(&local_78,4);
      }
      puVar2 = param_1 + 2;
      iVar4 = FUN_004b7bb0(param_2);
      uVar5 = iVar4 + 0x3fU;
      if ((int)(iVar4 + 0x3fU) < 0) {
        uVar5 = iVar4 + 0x7e;
      }
      *param_1 = uVar5 & 0xffffffc0;
      FUN_004b7b50(puVar2);
      iVar4 = FUN_004b8360(puVar2,0x40);
      if (iVar4 != 0) {
        local_58 = *(long *)*param_2;
        local_50 = 0;
        local_70 = (uint)(local_58 != 0);
        iVar4 = FUN_004b7cc0(&local_78);
        if (iVar4 == 0) {
          lVar7 = FUN_004b6c40(puVar6,puVar2,&local_78,param_3);
          if (lVar7 == 0) goto LAB_004b9984;
        }
        else {
          FUN_004b7b50(puVar6);
        }
        iVar4 = FUN_004bc220(puVar6,puVar6,0x40);
        if (iVar4 != 0) {
          iVar4 = FUN_004b7ba0(puVar6);
          if (iVar4 == 0) {
            iVar4 = FUN_004bcb60(puVar6,1);
          }
          else {
            iVar4 = FUN_004b8190(puVar6,0xffffffffffffffff);
          }
          if ((iVar4 != 0) && (iVar4 = FUN_004b34a0(puVar6,0,puVar6,&local_78,param_3), iVar4 != 0))
          {
            uVar8 = 0;
            if (0 < *(int *)(puVar6 + 1)) {
              uVar8 = *(undefined8 *)*puVar6;
            }
            *(undefined8 *)(param_1 + 0x14) = uVar8;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
            FUN_004b7b50(puVar2);
            iVar4 = FUN_004b8360(puVar2,*param_1 * 2);
            if ((iVar4 != 0) && (iVar4 = FUN_004b34a0(0,puVar2,puVar2,puVar1,param_3), iVar4 != 0))
            {
              uVar5 = param_1[4];
              uVar3 = param_1[10];
              if ((int)uVar5 < (int)uVar3) {
                thunk_FUN_00713720(*(long *)(param_1 + 2) + (long)(int)uVar5 * 8,0,
                                   (ulong)((uVar3 - 1) - uVar5) * 8 + 8);
              }
              param_1[4] = uVar3;
              uVar9 = 1;
            }
          }
        }
      }
    }
  }
LAB_004b9984:
  FUN_004b2d50(param_3);
LAB_004b989a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

