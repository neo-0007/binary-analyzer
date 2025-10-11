
void FUN_005255f0(undefined8 param_1,int param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_80 = (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_005253b0();
  if (0 < iVar1) {
    FUN_0041dba0(&local_b8,"pbits",&local_80);
    local_58 = local_98;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    FUN_0041e470(&local_b8);
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    local_30 = local_98;
    local_40 = local_a8;
    uStack_38 = uStack_a0;
    FUN_00414250(param_1,&local_78);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

