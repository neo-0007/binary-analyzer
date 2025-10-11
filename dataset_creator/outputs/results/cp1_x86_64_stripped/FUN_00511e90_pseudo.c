
undefined4 FUN_00511e90(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long in_FS_OFFSET;
  undefined8 local_50;
  int local_48 [2];
  long local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  if ((*(long *)(param_2 + 0x20) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 0x50), lVar1 == 0)) {
    FUN_0051f420();
    uVar6 = 0;
    FUN_0051f540("../crypto/ec/ecx_meth.c",0x6c,"ecx_priv_encode");
    FUN_0051f8f0(0x10,0x7b,0);
  }
  else {
    iVar3 = **(int **)(param_2 + 8);
    if ((iVar3 == 0x40a) || (iVar3 == 0x43f)) {
      local_48[0] = 0x20;
    }
    else {
      local_48[0] = (iVar3 != 0x40b) + 0x38;
    }
    local_38 = 0;
    local_40 = lVar1;
    iVar3 = FUN_004a7640(local_48,&local_50);
    uVar2 = local_50;
    if (iVar3 < 0) {
      FUN_0051f420();
      uVar6 = 0;
      FUN_0051f540("../crypto/ec/ecx_meth.c",0x76,"ecx_priv_encode");
      FUN_0051f8f0(0x10,0xc0100,0);
    }
    else {
      uVar5 = FUN_004239c0(**(undefined4 **)(param_2 + 8));
      iVar4 = FUN_004a2c50(param_1,uVar5,0,0xffffffff,0,uVar2,iVar3);
      if (iVar4 == 0) {
        FUN_0041aef0(local_50,(long)iVar3,"../crypto/ec/ecx_meth.c",0x7c);
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ecx_meth.c",0x7d,"ecx_priv_encode");
        FUN_0051f8f0(0x10,0xc0100,0);
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

