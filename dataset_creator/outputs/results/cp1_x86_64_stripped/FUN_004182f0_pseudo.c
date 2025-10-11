
undefined8 FUN_004182f0(long param_1,undefined4 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  int local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_48[0] = param_2;
  uVar2 = FUN_004222a0(*(undefined8 *)(param_1 + 8));
  if ((int)uVar2 != 0) {
    lVar3 = FUN_00545d60(*(undefined8 *)(param_1 + 0x10));
    if (lVar3 != 0) {
      local_40 = FUN_0041ad90(lVar3 * 8,"../crypto/core_namemap.c",0x9e);
      if (local_40 != 0) {
        FUN_00545c40(*(undefined8 *)(param_1 + 0x10),FUN_004181c0,local_48);
        FUN_004222e0(*(undefined8 *)(param_1 + 8));
        if (0 < local_38) {
          lVar3 = 0;
          do {
            lVar1 = lVar3 * 8;
            lVar3 = lVar3 + 1;
            (*param_3)(*(undefined8 *)(local_40 + lVar1),param_4);
          } while ((int)lVar3 < local_38);
        }
        FUN_0041ad60(local_40,"../crypto/core_namemap.c",0xaa);
        uVar2 = 1;
        goto LAB_0041832f;
      }
    }
    FUN_004222e0(*(undefined8 *)(param_1 + 8));
    uVar2 = 0;
  }
LAB_0041832f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

