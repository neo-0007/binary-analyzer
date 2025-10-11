
int FUN_0053dc40(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined4 local_48;
  long local_40;
  
  lVar4 = *(long *)(param_1 + 0x60);
  lVar3 = *(long *)(param_1 + 0x68);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (*(long *)(param_2 + 0x68) == 0)) {
LAB_0053dd60:
    iVar1 = 0;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x60);
    if (((lVar4 == 0) || (lVar4 == lVar5)) &&
       ((lVar4 = lVar5, *(long *)(lVar5 + 0xd8) != 0 && (lVar3 == 0)))) {
      lVar3 = FUN_0053eb90(lVar5,*(long *)(param_2 + 0x68),param_3);
      lVar4 = lVar3;
      if (lVar3 == 0) goto LAB_0053dd60;
    }
    else {
      lVar5 = lVar4;
      uVar2 = FUN_0053e710();
      iVar1 = FUN_0053e720(lVar5,uVar2);
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/keymgmt_lib.c",0x1e2,"evp_keymgmt_util_copy");
        FUN_0051f8f0(6,0x65,0);
        iVar1 = 0;
        goto LAB_0053dd10;
      }
      local_58 = lVar5;
      local_50 = lVar3;
      local_48 = param_3;
      iVar1 = FUN_0053d2c0(param_2,param_3,FUN_0053d1c0,&local_58);
      if (iVar1 == 0) goto LAB_0053dd10;
      lVar4 = 0;
      if (lVar3 == 0) {
        lVar3 = local_50;
        lVar4 = local_50;
      }
    }
    if ((*(long *)(param_1 + 0x60) == 0) && (iVar1 = FUN_0040f410(param_1,lVar5), iVar1 == 0)) {
      FUN_0053e7e0(lVar5,lVar4);
      iVar1 = 0;
    }
    else {
      *(long *)(param_1 + 0x68) = lVar3;
      iVar1 = 1;
      FUN_0053d6f0(param_1);
    }
  }
LAB_0053dd10:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar1;
}

