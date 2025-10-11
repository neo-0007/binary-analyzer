
undefined8 FUN_00517380(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  ulong *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (ulong *)0x0;
  if (param_3 == (ulong *)0x0) {
    FUN_0051f420();
    uVar5 = 0;
    FUN_0051f540("../crypto/encode_decode/encoder_lib.c",99,"OSSL_ENCODER_to_data");
    FUN_0051f8f0(0x3b,0xc0102,0);
    goto LAB_005173e7;
  }
  uVar5 = FUN_005c0c00();
  lVar6 = FUN_004ab550(uVar5);
  if (lVar6 == 0) {
LAB_005173dc:
    uVar5 = 0;
  }
  else {
    iVar4 = FUN_00517230(param_1,lVar6);
    if (iVar4 == 0) goto LAB_005173dc;
    lVar7 = FUN_004abd40(lVar6,0x73,0,&local_38);
    if (lVar7 < 1) goto LAB_005173dc;
    uVar1 = *local_38;
    if (param_2 == (ulong *)0x0) {
      *param_3 = uVar1;
      uVar5 = 1;
    }
    else {
      uVar2 = *param_2;
      if (uVar2 == 0) {
        *param_3 = uVar1;
        uVar5 = 1;
        *param_2 = local_38[1];
        local_38[1] = 0;
      }
      else {
        if (*param_3 < uVar1) goto LAB_005173dc;
        uVar3 = local_38[1];
        uVar5 = 1;
        *param_3 = *param_3 - uVar1;
        thunk_FUN_00713a50(uVar2,uVar3,*local_38);
        *param_2 = *param_2 + *local_38;
      }
    }
  }
  FUN_004ab560(lVar6);
LAB_005173e7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

