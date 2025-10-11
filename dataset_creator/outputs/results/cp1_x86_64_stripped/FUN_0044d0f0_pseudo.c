
undefined8 FUN_0044d0f0(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = *(undefined4 *)(param_1 + 0x70);
  uVar1 = param_4;
  local_68 = param_2;
  local_60 = param_3;
  if (0x3fffffffffffffff < param_4) {
    do {
      lVar2 = (param_2 + param_4) - uVar1;
      lVar3 = (param_3 + param_4) - uVar1;
      uVar1 = uVar1 + 0xc000000000000000;
      FUN_004d1ca0(lVar3,lVar2,0x4000000000000000,param_1 + 0xc0,param_1 + 0x140,param_1 + 0x1c0,
                   param_1 + 0x94,&local_44);
    } while (0x3fffffffffffffff < uVar1);
    uVar1 = param_4 & 0x3fffffffffffffff;
    local_68 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_60 = param_3 + local_68;
    local_68 = param_2 + local_68;
  }
  if (uVar1 != 0) {
    FUN_004d1ca0(local_60,local_68,uVar1,param_1 + 0xc0,param_1 + 0x140,param_1 + 0x1c0,
                 param_1 + 0x94,&local_44);
  }
  *(undefined4 *)(param_1 + 0x70) = local_44;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

