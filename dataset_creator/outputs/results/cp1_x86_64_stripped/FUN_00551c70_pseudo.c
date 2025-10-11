
undefined8 FUN_00551c70(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  
  uVar9 = param_1[0xc];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (param_3 >> 4) + uVar9;
  do {
    uVar9 = uVar9 + 1;
    if (uVar7 < uVar9) {
      uVar9 = (ulong)((uint)param_3 & 0xf);
      if ((param_3 & 0xf) != 0) {
        uVar4 = param_1[0xe];
        uVar1 = param_1[0xf];
        uVar2 = param_1[7];
        uVar3 = param_1[8];
        param_1[0xe] = uVar4 ^ uVar2;
        param_1[0xf] = uVar1 ^ uVar3;
        local_58 = (undefined1  [16])0x0;
        uVar6 = FUN_00771fb0(local_58,param_2,uVar9,0x10);
        local_58[uVar9] = 0x80;
        local_58._8_8_ = local_58._8_8_ ^ uVar1 ^ uVar3;
        local_58._0_8_ = local_58._0_8_ ^ uVar4 ^ uVar2;
        (*(code *)*param_1)(uVar6,uVar6,param_1[2]);
        param_1[0x10] = param_1[0x10] ^ local_58._0_8_;
        param_1[0x11] = param_1[0x11] ^ local_58._8_8_;
      }
      param_1[0xc] = uVar7;
      uVar6 = 1;
LAB_00551d61:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return uVar6;
    }
    iVar8 = 0;
    uVar4 = uVar9;
    if ((uVar9 & 1) == 0) {
      do {
        uVar4 = uVar4 >> 1;
        iVar8 = iVar8 + 1;
      } while ((uVar4 & 1) == 0);
      puVar5 = (ulong *)FUN_005515c0(param_1,iVar8);
    }
    else {
      puVar5 = (ulong *)FUN_005515c0(param_1,0);
    }
    if (puVar5 == (ulong *)0x0) {
      uVar6 = 0;
      goto LAB_00551d61;
    }
    uVar4 = param_1[0xe];
    uVar1 = *puVar5;
    uVar2 = param_1[0xf];
    uVar3 = puVar5[1];
    param_1[0xe] = uVar4 ^ uVar1;
    param_1[0xf] = uVar2 ^ uVar3;
    local_58._8_8_ = uVar2 ^ uVar3 ^ param_2[1];
    local_58._0_8_ = uVar4 ^ uVar1 ^ *param_2;
    (*(code *)*param_1)(local_58,local_58,param_1[2]);
    param_1[0x10] = param_1[0x10] ^ local_58._0_8_;
    param_1[0x11] = param_1[0x11] ^ local_58._8_8_;
    param_2 = param_2 + 2;
  } while( true );
}

