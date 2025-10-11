
undefined8
FUN_0055b4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  undefined1 *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004ab770(param_1,local_58,0x18);
  if (iVar1 == 0x18) {
    uVar4 = 0;
    local_60 = local_58;
    iVar1 = FUN_0055b390(&local_60,0x18,0,&local_68,&local_64);
    if (iVar1 != 0) {
      iVar1 = local_68 + local_64;
      puVar3 = (undefined1 *)FUN_0041ad90((long)iVar1,"../crypto/pem/pvkfmt.c",0x3a8);
      if (puVar3 == (undefined1 *)0x0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/pem/pvkfmt.c",0x3aa,"do_PVK_key_bio");
        FUN_0051f8f0(9,0xc0100,0);
      }
      else {
        local_60 = puVar3;
        iVar2 = FUN_004ab770(param_1,puVar3,iVar1);
        if (iVar2 == iVar1) {
          uVar4 = FUN_0055ad70(local_60,local_68,local_64,param_2,param_3,param_4,param_5,param_6,
                               param_7);
        }
        else {
          FUN_0051f420();
          FUN_0051f540("../crypto/pem/pvkfmt.c",0x3af,"do_PVK_key_bio");
          FUN_0051f8f0(9,0x7c,0);
        }
        FUN_0041aef0(puVar3,(long)iVar1,"../crypto/pem/pvkfmt.c",0x3b5);
      }
    }
  }
  else {
    FUN_0051f420();
    uVar4 = 0;
    FUN_0051f540("../crypto/pem/pvkfmt.c",0x3a0,"do_PVK_key_bio");
    FUN_0051f8f0(9,0x7c,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

