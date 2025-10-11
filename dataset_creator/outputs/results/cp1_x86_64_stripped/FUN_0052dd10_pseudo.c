
undefined8 FUN_0052dd10(long param_1,long param_2,long param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_RDX;
  long lVar4;
  undefined *puVar5;
  long in_FS_OFFSET;
  long lStack_70;
  long local_60;
  long local_58;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = param_4;
  lVar4 = param_2;
  puVar5 = param_4;
  local_60 = param_2;
  local_58 = param_3;
  if ((undefined *)0x3fffffffffffffff < param_4) {
    lVar3 = param_3;
    lStack_70 = param_2;
    do {
      local_44 = FUN_00409fd0(param_1,lStack_70,lVar3,puVar2);
      lStack_70 = 0x52dd91;
      uVar1 = FUN_004098f0(param_1);
      lVar3 = param_3 - (long)puVar5;
      lVar4 = param_2 - (long)puVar5;
      puVar5 = puVar5 + -0x4000000000000000;
      puVar2 = PTR_FUN_0093afa8;
      FUN_005524c0(param_4 + lVar3,param_4 + lVar4,0x4000000000000000,uVar1,param_1 + 0x28,&local_44
                  );
      FUN_0040a0a0(param_1,local_44);
      lVar4 = 0x52dd91;
      lVar3 = extraout_RDX;
    } while ((undefined *)0x3fffffffffffffff < puVar5);
    puVar5 = (undefined *)((ulong)param_4 & 0x3fffffffffffffff);
    local_60 = ((ulong)(param_4 + -0x4000000000000000) >> 0x3e) + 1 << 0x3e;
    local_58 = param_3 + local_60;
    local_60 = param_2 + local_60;
    param_3 = extraout_RDX;
  }
  if (puVar5 != (undefined *)0x0) {
    local_44 = FUN_00409fd0(param_1,lVar4,param_3,puVar2);
    uVar1 = FUN_004098f0(param_1);
    FUN_005524c0(local_58,local_60,puVar5,uVar1,param_1 + 0x28,&local_44,PTR_FUN_0093afa8);
    FUN_0040a0a0(param_1,local_44);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

