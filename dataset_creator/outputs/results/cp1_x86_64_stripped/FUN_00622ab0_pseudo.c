
long FUN_00622ab0(undefined1 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_006202a0();
  local_50 = 0;
  local_48 = 0;
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_b64.c",0x4a,"SCT_new_from_base64");
    FUN_0051f8f0(0x32,0xc0100,0);
    goto LAB_00622bed;
  }
  iVar1 = FUN_00620330(lVar2,param_1);
  if (iVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_b64.c",0x53,"SCT_new_from_base64");
    FUN_0051f8f0(0x32,0x73,0);
  }
  else {
    iVar1 = FUN_00622990(param_2,&local_50);
    if (iVar1 < 0) {
      FUN_0051f420();
      uVar3 = 0x59;
    }
    else {
      iVar1 = FUN_006203f0(lVar2,local_50,(long)iVar1);
      if (iVar1 == 0) goto LAB_00622c1f;
      local_50 = 0;
      iVar1 = FUN_00622990(param_5,&local_50);
      if (iVar1 < 0) {
        FUN_0051f420();
        uVar3 = 0x62;
      }
      else {
        FUN_00620640(lVar2,local_50,(long)iVar1);
        local_50 = 0;
        iVar1 = FUN_00622990(param_6,&local_50);
        if (-1 < iVar1) {
          local_48 = local_50;
          iVar1 = FUN_0061efd0(lVar2,&local_48,(long)iVar1);
          if (0 < iVar1) {
            FUN_0041ad60(local_50,"../crypto/ct/ct_b64.c",0x71);
            local_50 = 0;
            FUN_006205a0(lVar2,param_4);
            iVar1 = FUN_00620390(lVar2,param_3);
            if (iVar1 != 0) goto LAB_00622bed;
          }
          goto LAB_00622c1f;
        }
        FUN_0051f420();
        uVar3 = 0x6a;
      }
    }
    FUN_0051f540("../crypto/ct/ct_b64.c",uVar3,"SCT_new_from_base64");
    FUN_0051f8f0(0x32,0x76,0);
  }
LAB_00622c1f:
  FUN_0041ad60(local_50,"../crypto/ct/ct_b64.c",0x7c);
  FUN_00620220(lVar2);
  lVar2 = 0;
LAB_00622bed:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar2;
}

