
int FUN_0040a800(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_30;
  
  lVar1 = *param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(lVar1 + 0x48) != (code *)0x0) {
    iVar2 = (**(code **)(lVar1 + 0x48))();
    goto LAB_0040a83e;
  }
  uVar3 = FUN_004098c0(lVar1);
  if ((uVar3 & 0x1000000) == 0) {
    iVar2 = FUN_0040a4b0(lVar1);
    if (iVar2 != 0x10001) {
      if (iVar2 < 0x10002) {
        if (iVar2 == 6) {
          iVar2 = FUN_00409250(param_1,param_2,param_3);
LAB_0040a83e:
          if (iVar2 != -2) {
            iVar4 = -1;
            if (-1 < iVar2) {
              iVar4 = iVar2;
            }
            if (0 < iVar2) goto LAB_0040a855;
            goto LAB_0040a8f7;
          }
        }
        else if (iVar2 != 7) goto LAB_0040a9a9;
      }
      else {
        iVar4 = 1;
        if (iVar2 == 0x10002) goto LAB_0040a855;
        if (iVar2 != 0x10003) {
LAB_0040a9a9:
          iVar2 = FUN_00409a30(param_1,param_2);
          goto LAB_0040a83e;
        }
      }
    }
  }
  else if (*(long *)(lVar1 + 0x78) != 0) {
    local_b0 = 0;
    iVar2 = FUN_004a7ee0(param_2,&local_b0);
    if (iVar2 < 0) {
      iVar4 = -1;
    }
    else {
      FUN_0041e2e0(&local_e8,"alg_id_param",local_b0,(long)iVar2);
      local_88 = local_c8;
      local_a8 = local_e8;
      uStack_a0 = uStack_e0;
      local_98 = local_d8;
      uStack_90 = uStack_d0;
      FUN_0041e470(&local_e8);
      local_80 = local_e8;
      uStack_78 = uStack_e0;
      local_60 = local_c8;
      local_70 = local_d8;
      uStack_68 = uStack_d0;
      iVar2 = FUN_005374c0(param_1,&local_a8);
      if (iVar2 != 0) {
        iVar4 = 1;
        FUN_0041ad60(local_b0,"../crypto/evp/evp_lib.c",0xe3);
        goto LAB_0040a855;
      }
      iVar4 = -1;
      FUN_0041ad60(local_b0,"../crypto/evp/evp_lib.c",0xe3);
    }
LAB_0040a8f7:
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_lib.c",0xec,"evp_cipher_asn1_to_param_ex");
    FUN_0051f8f0(6,0x7a,0);
    goto LAB_0040a855;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/evp_lib.c",0xea,"evp_cipher_asn1_to_param_ex");
  iVar4 = -1;
  FUN_0051f8f0(6,0x6b,0);
LAB_0040a855:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar4;
}

