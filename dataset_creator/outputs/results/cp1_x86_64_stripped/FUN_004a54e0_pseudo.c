
undefined8 FUN_004a54e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined1 local_48;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_50 = 0;
  if (param_1 == (undefined8 *)0x0) {
    param_1 = &local_50;
  }
  if (param_4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/tasn_dec.c",0x73,"asn1_item_ex_d2i_intern");
    FUN_0051f8f0(0xd,0xc0102,0);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_004a3ef0(param_1);
    if (iVar1 < 1) {
      FUN_004a6bc0(param_1,param_4);
      uVar2 = 0;
    }
    else {
      uVar2 = *param_1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

